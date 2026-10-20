value = 1
for letter in 'abcdefghijklmnopqrstuvwxyz':
    for num in range(100):
        globals()[f'{letter}{num}'] = value
        value += 1

print(a0, a99)   # 1 100
print(b0)        # 101
print(z99)       # 2600