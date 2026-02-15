from sklearn.datasets import load_wine
from sklearn.model_selection import GridSearchCV
from sklearn.ensemble import RandomForestClassifier

X, y = load_wine(return_X_y=True)
clf = GridSearchCV(RandomForestClassifier(random_state=42), {"n_estimators": [50, 100]}, cv=3)
clf.fit(X, y)
print(clf.best_params_)
