import numpy as np
s = list(map(float, input().split(', ')))
e = list(map(float, input().split(', ')))
V = np.array([el // e[-2] for el in s if el % e[-2] == 0])
