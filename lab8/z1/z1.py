x = [int(t) for t in input().split()]
i = 0
while i < len(x) and x[i] != 1 and x[i] <= 2:
    i += 1
print(i)