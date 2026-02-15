import numpy as np

x = np.array([1.0, 2.0, 3.0])
y = np.array([2.0, 4.0, 6.0])
w = 0.0
for _ in range(100):
    pred = w * x
    grad = (2 / len(x)) * np.sum((pred - y) * x)
    w -= 0.1 * grad
print(round(w, 4))
