nums = list(map(int, input().split()))
for x in nums:
    if x < 0:
        print("Negative:", x)
        break
else:
    print("All non-negative")