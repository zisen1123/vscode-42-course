# 学习手册（便于查阅版）

这个文件用于把“周计划 + 书籍索引 + 刷题”串成一个可执行流程。

## 1) 每周固定流程（90 分钟版）

- 15 分钟：看本周 `README.md` 的 `Knowledge Mapping`
- 25 分钟：读对应书籍章节（按 `book-index.md` 的页码）
- 35 分钟：完成 `src/` 代码练习
- 15 分钟：在 `notes/` 写复盘（今天卡在哪里）

## 2) 每周交付清单（Checklist）

- [ ] `src/` 有至少 1 个可运行文件
- [ ] `tests/` 里有至少 5 条测试点
- [ ] `notes/` 里有本周总结（错误 + 修复）
- [ ] `leetcode-notes/weekXX.md` 完成本周 6 题记录

## 3) 例题与讲解

### 例题 A（C 指针）

题目：实现函数 `int sum_array(const int *arr, int n)`，返回数组元素和。

关键点：
- `const int *arr` 表示函数不会修改数组内容
- 入参校验：`arr == NULL` 或 `n <= 0` 时直接返回 0
- 时间复杂度 `O(n)`，空间复杂度 `O(1)`

参考实现：

```c
#include <stdio.h>

int sum_array(const int *arr, int n) {
    if (!arr || n <= 0) return 0;
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}
```

常见错误：
- 忘记判空导致崩溃
- 把 `n` 写错成 `sizeof(arr)`（函数参数里拿不到原数组长度）

### 例题 B（ML 过拟合判断）

题目：训练一个分类模型后，训练集准确率 0.99，验证集准确率 0.78。如何处理？

思路：
- 这是典型过拟合：训练好、泛化差
- 优先动作：
  - 增加正则化（L2、Dropout）
  - 降低模型复杂度
  - 增加数据/数据增强
  - 用交叉验证稳定评估

最小代码示例（sklearn）：

```python
from sklearn.linear_model import LogisticRegression
clf = LogisticRegression(C=0.5, max_iter=500)  # 更强正则
```

### 例题 C（LeetCode：Two Sum）

题目：给定数组和目标值，返回两数下标。

思路：
- 用哈希表记录“数值 -> 下标”
- 每次看 `target - nums[i]` 是否已出现
- 时间复杂度 `O(n)`，空间复杂度 `O(n)`

讲解重点：
- 为什么比双重循环快：避免重复扫描
- 为什么需要先查再存：防止同一元素被重复使用

## 4) 学习记录模板（可复制到 notes）

```md
# Week XX Day Y

- 今日章节：
- 今日代码：
- 今日测试：
- 今日卡点：
- 明日动作：
```

## 5) 导航

- 总说明：`README.md`
- 书籍索引：`book-index.md`
- 36 周计划：`syllabus-36weeks.md`
- LeetCode 并行计划：`dsa-leetcode-plan.md`
