import numpy as np
import mycythonlibs as l

a = np.array([1,2,3,4,5], dtype='d')

print("Before Multiply {}".format(a))

l.multiply(a, 3)

print("After Multiply {}".format(a))