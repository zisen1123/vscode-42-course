from sklearn.datasets import load_wine
from sklearn.decomposition import PCA

X, _ = load_wine(return_X_y=True)
pca = PCA(n_components=2)
X2 = pca.fit_transform(X)
print("shape", X2.shape)
print("variance", pca.explained_variance_ratio_.round(4))
