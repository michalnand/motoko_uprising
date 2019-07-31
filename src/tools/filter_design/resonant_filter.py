
from scipy import signal
import numpy
import random
import matplotlib.pyplot as plt

fs = 1000.0  #samling frequency
fc = 250.0   #resonant frequency
q  = 0.95  #Q factor


a1_ = 2.0*q*numpy.cos(2*numpy.pi*fc/fs)
a2_ = -q*q
b_  = (1.0 - q*q)/2.0


b = [b_, 0.0, -b_]
a = [1.0, -a1_, -a2_]

print()
print()

print("a1 = ", round(a1_, 6))
print("a2 = ", round(a2_, 6))
print("b0 = ", round(b_, 6))
print("b1 = ", round(0.0, 6))
print("b2 = ", round(-b_, 6))

print()
print()
print("y(n) = ", end = "")
print(round(a1_, 6),"*y(n-1) + ", end = "")
print(round(a2_, 6),"*y(n-2) + ", end = "")
print(round(b_, 6) ,"*x(n) + ", end = "")
print(round(-b_, 6),"*x(n-2)", end = "")
print()
print()

w, h = signal.freqz(b, a, fs = fs)


seq_length 	= 100
period 		= seq_length//2

imp = numpy.zeros(seq_length)
for i in range(0, seq_length):
	if i%period < period//2:
		imp[i] = 1.0

response = signal.lfilter(b, a, imp)
response_abs = numpy.abs(response)

input_response = plt.plot(numpy.arange(0, seq_length), imp, label = "input")
filter_response = plt.plot(numpy.arange(0, seq_length), response, label = "filter output")
amplitude_response = plt.plot(numpy.arange(0, seq_length), response_abs, label = "amplitute output")
plt.margins(0.1, 0.1)
plt.xlabel('Time [samples]')
plt.ylabel('Amplitude')
plt.grid(True)
plt.legend()
plt.show()



h_abs = numpy.abs(h)

h_abs_log = 20.0*numpy.log10(h_abs)

plt.plot(w, h_abs_log)
plt.xlabel('Frequency [Hz]')
plt.ylabel('Amplitude [dB]')
plt.show()
