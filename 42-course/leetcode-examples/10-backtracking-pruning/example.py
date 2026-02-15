def combination_sum(candidates, target):
    candidates.sort()
    res = []
    def bt(start, remain, path):
        if remain == 0:
            res.append(path[:])
            return
        for i in range(start, len(candidates)):
            x = candidates[i]
            if x > remain:
                break
            path.append(x)
            bt(i, remain - x, path)
            path.pop()
    bt(0, target, [])
    return res

print(combination_sum([2, 3, 6, 7], 7))
