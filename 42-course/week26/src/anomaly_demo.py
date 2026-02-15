from sklearn.ensemble import IsolationForest
import numpy as np

X = np.r_[np.random.randn(100, 2), np.array([[7, 7], [8, 8]])]
model = IsolationForest(random_state=42)
out = model.fit_predict(X)
print("anomalies", (out == -1).sum())
