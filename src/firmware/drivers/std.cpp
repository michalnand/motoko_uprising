


extern "C" int __aeabi_atexit(
                              void *object,
                              void (*destructor)(void *),
                              void *dso_handle)
{
  static_cast<void>(object);
  static_cast<void>(destructor);
  static_cast<void>(dso_handle);
  return 0;
}


void* __dso_handle = nullptr;




extern "C" void __cxa_pure_virtual()
{
  while (true)
  {
    
  }
}
