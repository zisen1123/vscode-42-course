def daily_temperatures(temperatures):
    ans = [0] * len(temperatures)
    st = []
    for i, t in enumerate(temperatures):
        while st and temperatures[st[-1]] < t:
            j = st.pop()
            ans[j] = i - j
        st.append(i)
    return ans

print(daily_temperatures([73, 74, 75, 71, 69, 72, 76, 73]))
