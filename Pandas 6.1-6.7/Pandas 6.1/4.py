import numpy as np
from math import sqrt

if (A1[0] == A2[0] and A2[0] == A3[0]) or (A1[1] == A2[1] and A2[1] == A3[1]):
    print(0)
else:
    a = sqrt((A1[0] - A2[0]) ** 2 + (A1[1] - A2[1]) ** 2)
    b = sqrt((A2[0] - A3[0]) ** 2 + (A2[1] - A3[1]) ** 2)
    c = sqrt((A1[0] - A3[0]) ** 2 + (A1[1] - A3[1]) ** 2)
    p = (a + b + c) / 2
    S = sqrt(p*(p - a)*(p - b)*(p - c))
    print(S)
