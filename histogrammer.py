import matplotlib.pyplot as plt

# OTHER FIFO RR
time_1 = [15.926429,8.343421,8.355861]
time_2 = [16.052783,8.420751,8.417663]
time_3 = [15.926429,8.361273,8.383946]
time_4 = [15.873235,8.336859,8.337889]

priority_1 = [0,60,30]
priority_2 = [0,30,60]
priority_3 = [0,1,1]
priority_4 = [0,99,99]

plt.bar(priority_1,time_1,10,label = "1st")
plt.show()

plt.bar(priority_2,time_2,10,label = "2nd")
plt.show()

plt.bar(priority_3,time_3,10,label = "3rd")
plt.show()

plt.bar(priority_4,time_4,10,label = "4th")
plt.show()