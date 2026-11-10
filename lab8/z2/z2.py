x = [int(t) for t in input().split()]
i = 0
while i < len(x) and not (i <= x[i] < 2*i or 3*i <= x[i] < 4*i):
    i += 1
print(i)