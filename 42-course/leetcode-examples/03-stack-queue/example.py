def is_valid(s):
    pairs = {')': '(', ']': '[', '}': '{'}
    st = []
    for ch in s:
        if ch in pairs.values():
            st.append(ch)
        elif not st or st[-1] != pairs[ch]:
            return False
        else:
            st.pop()
    return not st

print(is_valid("()[]{}"))
