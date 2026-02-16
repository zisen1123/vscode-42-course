# 42-course 学习仓库说明

这是一个基于 **42 Paris 风格** 设计的长期学习仓库，目标是系统学习：

- 《C Primer Plus（第6版）》
- 《Hands-On Machine Learning with Scikit-Learn, Keras, and TensorFlow（第2版）》

## 仓库结构

- `week1` ~ `week36`
  - `README.md`：本周目标、任务、验收标准、知识点映射
  - `src/`：本周代码示例或练习骨架
  - `tests/`：本周测试用例（可逐步补全）
  - `notes/`：学习记录与复盘
- `syllabus-12weeks.md`：早期 12 周基础计划
- `syllabus-36weeks.md`：扩展后的 36 周长期计划
- `book-index.md`：书籍路径、章节映射与合法查阅说明
- `study-guide.md`：学习手册（阅读流程、Checklist、例题与讲解）
- `dsa-leetcode-plan.md`：数据结构 + LeetCode 并行训练计划
- `leetcode-notes/`：每周刷题记录模板
- `leetcode-examples/`：22 个数据结构主题例题（每个主题至少 1 题）
- `cnam-docs-study-notes.md`：CNAM 网络/通信文档第一轮学习笔记
- `cnam-deep-dive.md`：IoT + NFV 深度讲解（含与 42 Paris 的联系）
- `cnam-cards/`：20 份文档的一页学习卡片
- `cnam-relearning-plan-16weeks.md`：基于当前资料重建的 16 周系统重学教案

## 学习节奏（当前）

- 工作日：每天约 1 小时
- 周末：每天约 2-3 小时
- 每周总计：约 9-11 小时

## 学习方法（42 风格）

- 项目驱动：每周必须有可运行产物
- 先跑通再优化：先保证功能正确，再重构和清理
- 严格验收：每周至少完成 5 个测试/检查点
- 每周复盘：记录错误、修复方案、下一周改进点

## 如何使用本仓库

1. 按周进入目录，例如 `week8`。
2. 先阅读该周 `README.md` 的知识点映射。
3. 运行 `src/` 中代码，确认环境可用。
4. 在 `tests/` 补测试，在 `notes/` 写复盘。

## 运行提示

- C 代码示例（以 week13 为例）：
  - `cc -Wall -Wextra -Werror week13/src/pointer_lab.c -o /tmp/w13 && /tmp/w13`
- Python 代码示例（以 week21 为例）：
  - `python3 week21/src/gradient_check.py`

## 说明

本仓库中的周计划与代码模板是学习用骨架，不是最终答案。
请在每周迭代中持续补充：测试、注释、改进版本与复盘记录。
