from sklearn.datasets import load_wine
from sklearn.ensemble import GradientBoostingClassifier

X, y = load_wine(return_X_y=True)
clf = GradientBoostingClassifier(random_state=42)
clf.fit(X, y)
print("train_score", round(clf.score(X, y), 4))
