# 42 Paris Style Syllabus (12 Weeks)

This plan is built from:
- C Primer Plus (6th ed., Chinese)
- Hands-On Machine Learning with Scikit-Learn, Keras, and TensorFlow (2nd ed.)

Time budget: ~9–11 hours/week (weekday 1h, weekend 2–3h/day).
Each week has: goals, reading, tasks, a small project, and clear acceptance criteria.

---

## Week 1 — C Basics + Toolchain
Goals:
- Build/compile/run C programs confidently.
- Basic I/O, variables, control flow.

Reading:
- C Primer Plus Ch. 1–3

Tasks:
- Learn `gcc`, `make`, `gdb` basics.
- Write 3 small programs: temperature conversion, max/min of 5 ints, char count of a line.

Project:
- `mini-utils-1`

Acceptance:
- `Makefile` builds all targets.
- One `gdb` session captured in notes.
- Programs handle simple edge cases (empty input, negative numbers).

---

## Week 2 — Control Flow + Functions
Goals:
- Looping patterns, function usage, simple decomposition.

Reading:
- C Primer Plus Ch. 4–6

Tasks:
- Implement: prime check, simple calculator, sum/average loop.

Project:
- `mini-utils-2`

Acceptance:
- Each program uses at least one function.
- Inputs validated (basic `scanf` checks).

---

## Week 3 — Arrays, Strings, Pointers (Intro)
Goals:
- Understand arrays/strings; basic pointer concepts.

Reading:
- C Primer Plus Ch. 7–9

Tasks:
- Implement simplified `wc` (lines/words/chars).

Project:
- `text-tools-1`

Acceptance:
- Works for empty file and single-line file.
- No out-of-bounds string access.

---

## Week 4 — Strings + File I/O
Goals:
- File read/write, string handling with standard library.

Reading:
- C Primer Plus Ch. 10–11

Tasks:
- Implement simplified `grep` (match substring, print matching lines).

Project:
- `text-tools-2`

Acceptance:
- Handles multiple files.
- Reports file open errors cleanly.

---

## Week 5 — Structs + Modularization
Goals:
- Structs, header files, split compilation.

Reading:
- C Primer Plus Ch. 12–13

Tasks:
- Implement a small record system with add/search/delete.

Project:
- `mini-db-1`

Acceptance:
- Code split into `db.c`, `db.h`, `main.c`.
- Basic persistence to file.

---

## Week 6 — Pointers + Dynamic Memory + Linked List
Goals:
- `malloc/free`, linked list operations.

Reading:
- C Primer Plus Ch. 14

Tasks:
- Convert record storage to linked list.

Project:
- `mini-db-2`

Acceptance:
- No leaks under `valgrind`.
- Delete operations are correct for head/middle/tail.

---

## Week 7 — ML Intro + NumPy
Goals:
- Understand what ML is and basic workflow.

Reading:
- Hands-On ML Ch. 1

Tasks:
- Implement linear regression in NumPy (gradient descent).

Project:
- `linreg-numpy`

Acceptance:
- Loss decreases over epochs.
- Clear training/validation split.

---

## Week 8 — End-to-End ML Project
Goals:
- Full pipeline: data loading → EDA → features → train → evaluate.

Reading:
- Hands-On ML Ch. 2

Tasks:
- Build housing-price model (as in book, simplified).

Project:
- `housing-price`

Acceptance:
- Train/val/test split.
- At least two models compared.

---

## Week 9 — Classification + Metrics
Goals:
- Binary/multiclass classification; evaluation metrics.

Reading:
- Hands-On ML Ch. 3

Tasks:
- Build a classifier and report confusion matrix, ROC-AUC.

Project:
- `classification-demo`

Acceptance:
- Use precision/recall/F1 and ROC plot.

---

## Week 10 — Linear Models + SVM
Goals:
- Regression with regularization, SVM basics.

Reading:
- Hands-On ML Ch. 4–5

Tasks:
- Compare ridge/lasso vs SVM for a simple dataset.

Project:
- `model-compare`

Acceptance:
- Clear discussion of overfitting/underfitting.

---

## Week 11 — Decision Trees + Ensembles
Goals:
- Trees, random forests, gradient boosting.

Reading:
- Hands-On ML Ch. 6–7

Tasks:
- Train tree + random forest, compare feature importance.

Project:
- `tree-ensemble`

Acceptance:
- Feature importance chart + short analysis.

---

## Week 12 — Neural Networks Intro
Goals:
- Basic neural network concepts, Keras usage.

Reading:
- Hands-On ML Ch. 10

Tasks:
- MNIST digit classifier in Keras.

Project:
- `digits`

Acceptance:
- Training curves saved.
- Hyperparameters recorded.

---

## Weekly Routine (42 Style)
- Day 1: Read key sections only.
- Day 2–4: Implement core tasks.
- Day 5: Debug, refactor, tests.
- Weekend: Project completion + 5–10 line retrospective.

---

## Next Steps
- I can generate Week 1 daily checklist + test cases.
- I can scaffold folders for each week in `/Users/xuzisen/vscode/42-course`.
