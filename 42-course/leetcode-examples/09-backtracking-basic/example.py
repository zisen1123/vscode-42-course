def permute(nums):
    res = []
    used = [False] * len(nums)
    path = []
    def bt():
        if len(path) == len(nums):
            res.append(path[:])
            return
        for i, x in enumerate(nums):
            if used[i]:
                continue
            used[i] = True
            path.append(x)
            bt()
            path.pop()
            used[i] = False
    bt()
    return res

print(permute([1, 2, 3]))
