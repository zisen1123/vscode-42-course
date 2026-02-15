def max_profit(prices):
    hold = float('-inf')
    cash = 0
    for p in prices:
        hold = max(hold, -p)
        cash = max(cash, hold + p)
    return cash

print(max_profit([7, 1, 5, 3, 6, 4]))
