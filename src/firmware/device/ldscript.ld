/*
 * GCC linker script for STM32 microcontrollers (ARM Cortex-M).
 *
 * It exports the symbols needed for the CMSIS assembler startup script for GCC
 * ARM toolchains (_sidata, _sdata, _edata, _sbss, _ebss) and sets the entry
 * point to Reset_Handler.
 *
 * Adapt FLASH/RAM size for your particular device below.
 *
 * @author Bjørn Forsman
 */

MEMORY
{
    flash (rx) : ORIGIN = 0x08000000, LENGTH = 128K
    ram  (rwx) : ORIGIN = 0x20000000, LENGTH = 32K
}

ENTRY(Reset_Handler)

/*
 * Reserve memory for heap and stack. The linker will issue an error if there
 * is not enough memory.
 *
 * NOTE: The reserved heap and stack will be added to the bss column of the
 * binutils size command.
 */
_heap_size = 0;    /* required amount of heap  */
_stack_size = 0;   /* required amount of stack */

/*
 * The stack starts at the end of RAM and grows downwards. Full-descending
 * stack; decrement first, then store.
 */
_estack = ORIGIN(ram) + LENGTH(ram);

__ram_size__ = LENGTH(ram);

__log_flash_size__ = 16K;
__log_flash_address__ = ORIGIN(flash) + LENGTH(flash) - __log_flash_size__;

SECTIONS
{
    /* Reset and ISR vectors */
    .isr_vector :
    {
        __isr_vector_start__ = .;
        KEEP(*(.isr_vector)) /* without 'KEEP' the garbage collector discards this section */
        ASSERT(. != __isr_vector_start__, "The .isr_vector section is empty");
    } >flash

    /* C++ ocnstructor section */
    . = ALIGN(4);
    .init_array :
    {
    __init_array_start = .;
    KEEP (*(.init_array*))
    __init_array_end = .;
    } >flash


    /* Text section (code and read-only data) */
    .text :
    {
        . = ALIGN(4);
        _stext = .;
        *(.text*)   /* code */

        /*
        . = ALIGN(4);
        __init_array_start = .;
        KEEP (*(.init_array*))
        __init_array_end = .;
        */

        *(.rodata*) /* read only data */

        _etext = .;
    } > flash




    /*
     * Stack unwinding and exception handling sections.
     *
     * ARM compilers emit object files with .ARM.extab and .ARM.exidx sections
     * when using C++ exceptions. Also, at least GCC emits those sections when
     * dividing large numbers (64-bit) in C. So we have to handle them.
     *
     * (ARM uses .ARM.extab and .ARM.exidx instead of the .eh_frame section
     * used on x86.)
     */
    .ARM.extab :
    {
        *(.ARM.extab*)
    } >flash
    .ARM.exidx :
    {
        *(.ARM.exidx*)
    } >flash


    /*
     * Newlib and Eglibc (at least) need these for C++ support.
     * (Copied from Sourcery CodeBench Lite: arm-none-eabi-gcc -V)
     */

/*
    .preinit_array :
    {
        PROVIDE_HIDDEN(__preinit_array_start = .);
        KEEP(*(.preinit_array*))
        PROVIDE_HIDDEN(__preinit_array_end = .);
    } >flash
    .init_array :
    {
        PROVIDE_HIDDEN(__init_array_start = .);
        KEEP(*(SORT(.init_array.*)))
        KEEP(*(.init_array*))
        PROVIDE_HIDDEN(__init_array_end = .);
    } >flash
    .fini_array :
    {
        PROVIDE_HIDDEN(__fini_array_start = .);
        KEEP(*(SORT(.fini_array.*)))
        KEEP(*(.fini_array*))
        PROVIDE_HIDDEN(__fini_array_end = .);
    } >flash
*/

    /*
     * Initialized data section. This section is programmed into FLASH (LMA
     * address) and copied to RAM (VMA address) in startup code.
     */


    _sidata = .;
    .data : AT(_sidata) /* LMA address is _sidata (in FLASH) */
    {
        . = ALIGN(4);
        _sdata = .; /* data section VMA address */
        *(.data*)
        . = ALIGN(4);
        _edata = .;
    } >ram


    /* Uninitialized data section (zeroed out by startup code) */
    .bss :
    {
        . = ALIGN(4);
        _sbss = .;
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        _ebss = .;
    } >ram


    /*
     * Reserve memory for heap and stack. The linker will issue an error if
     * there is not enough memory.
     */
    ._heap :
    {
        _sheap = .;
        . = ALIGN(4);
        . = . + _heap_size;
        . = ALIGN(4);
    } >ram
    ._stack :
    {
        . = ALIGN(4);
        . = . + _stack_size;
        . = ALIGN(4);
    } >ram
}

/* Nice to have */
__isr_vector_size__ = SIZEOF(.isr_vector);
__text_size__ = SIZEOF(.text);

__data_start__ = _sdata;
__data_size__ = SIZEOF(.data);

__bss_start__ = _sbss;
__bss_size__ = SIZEOF(.bss);

__heap_start__ = _sheap;
