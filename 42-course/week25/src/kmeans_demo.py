from sklearn.datasets import load_iris
from sklearn.cluster import KMeans

X, _ = load_iris(return_X_y=True)
km = KMeans(n_clusters=3, random_state=42, n_init=10)
km.fit(X)
print("inertia", round(km.inertia_, 2))
