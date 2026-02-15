from sklearn.datasets import load_diabetes
from sklearn.model_selection import train_test_split
from sklearn.linear_model import Ridge
from sklearn.svm import SVR

X, y = load_diabetes(return_X_y=True)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)
ridge = Ridge(alpha=1.0).fit(X_train, y_train)
svr = SVR(C=10.0, epsilon=0.2).fit(X_train, y_train)
print("ridge", round(ridge.score(X_test, y_test), 4))
print("svr", round(svr.score(X_test, y_test), 4))
