import numpy as np
n = input().split()
a = []
b = np.float64
for i in n:
    if i.isdigit():
        a.append(int(i))
    else:
        b = i
Z = np.zeros(a, dtype=b)
