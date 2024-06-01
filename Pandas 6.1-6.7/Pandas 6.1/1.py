import numpy as np
s = list(map(float, input().split(', ')))
V1 = np.array(s)
V2 = np.array([s[-2]])
V3 = np.array(s[::-1])
V4 = np.array([s[i] for i in range(0, len(s), 3)])
V5 = np.array(range(len(s)))
