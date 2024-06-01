import numpy as np
from math import sin
M2 = M1
M2[-2] = np.sin(np.array(list(map(lambda x: (x * np.pi) / 6, M1[-2]))))
M2[:, -2] = [np.e ** x[-2] for x in M2]
