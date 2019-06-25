
from scipy import signal
import numpy
import random
import matplotlib.pyplot as plt

r = 0.95
a_ = -r*r
b_ = (1.0 - r*r)/2.0

b = [b_, 0.0, -b_]
a = [1.0, 0.0, -a_]

w, h = signal.freqz(b, a, fs = 100.0)


seq_length = 200
period = 4

imp = numpy.zeros(seq_length)
dc_offset = 2.7
amplitute = 1.0
noise_level = 0.2
for i in range(0, seq_length):

	imp[i] = dc_offset + random.uniform(-1.0, 1.0)*noise_level

	if i%(seq_length//2) <  seq_length//4:
		if i%period < period//2:
			imp[i]+= amplitute
		else:
			imp[i]+= -amplitute


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
