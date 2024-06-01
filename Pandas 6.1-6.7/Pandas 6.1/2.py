import numpy as np
s = list(map(int, input().split(', ')))
e = list(map(int, input().split(', ')))
V1 = np.array(s)
V2 = np.array(e)
V3 = V1 + V2
V4 = V1[::2] * V2[::-2]
