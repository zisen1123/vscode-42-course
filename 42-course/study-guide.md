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

### 例题 D（链表：反转链表）

题目：给定单链表头结点，返回反转后的头结点。

思路：
- 维护三个指针：`prev`、`cur`、`next`
- 每一步把 `cur->next` 指向 `prev`
- 迭代直到 `cur == NULL`

参考实现：

```c
typedef struct Node {
    int val;
    struct Node *next;
} Node;

Node *reverse_list(Node *head) {
    Node *prev = NULL;
    Node *cur = head;
    while (cur) {
        Node *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
```

常见错误：
- 提前改写 `cur->next` 但没保存 `next`，导致链断
- 返回 `head` 而不是 `prev`

### 例题 E（二叉树：层序遍历）

题目：按层输出二叉树节点值。

思路：
- 使用队列进行 BFS
- 每一轮先记录当前层节点数，再循环弹出并压入孩子
- 复杂度：时间 `O(n)`，空间 `O(w)`（`w` 为最大层宽）

Python 示例：

```python
from collections import deque

def level_order(root):
    if not root:
        return []
    q = deque([root])
    ans = []
    while q:
        level_size = len(q)
        level = []
        for _ in range(level_size):
            node = q.popleft()
            level.append(node.val)
            if node.left:
                q.append(node.left)
            if node.right:
                q.append(node.right)
        ans.append(level)
    return ans
```

常见错误：
- 没有固定 `level_size`，导致层边界混乱
- 空树时直接访问属性报错

### 例题 F（动态规划：爬楼梯）

题目：每次爬 1 或 2 阶，求到第 `n` 阶的方法数。

状态定义：
- `dp[i]` 表示到达第 `i` 阶的方法数

转移：
- `dp[i] = dp[i-1] + dp[i-2]`

边界：
- `dp[1] = 1`, `dp[2] = 2`

Python 示例（空间优化）：

```python
def climb_stairs(n: int) -> int:
    if n <= 2:
        return n
    a, b = 1, 2
    for _ in range(3, n + 1):
        a, b = b, a + b
    return b
```

常见错误：
- 把“方法数”误写成“最小步数”
- 边界 `n=1`、`n=2` 漏处理

## 6) 继续扩展建议

- 每学完一个数据结构，补 2 道“模板题 + 变体题”
- 每周至少做 1 道题的“口头讲解复盘”（不用看答案）
- 把高频模板沉淀到自己的 `snippets/`（哈希、双指针、BFS、DP）
