import numpy as np

x = np.array([[1.0], [2.0], [3.0], [4.0]])
y = np.array([[3.0], [5.0], [7.0], [9.0]])

w = np.zeros((1, 1))
b = 0.0
lr = 0.1

for _ in range(200):
    pred = x @ w + b
    err = pred - y
    dw = (2 / len(x)) * x.T @ err
    db = (2 / len(x)) * err.sum()
    w -= lr * dw
    b -= lr * db

print("w", float(w[0, 0]), "b", round(float(b), 4))
