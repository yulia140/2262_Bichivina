n = int(input())

rows = [
    "1234567890",
    "qwertyuiop",
    "asdfghjkl",
    "zxcvbnm"
]

for _ in range(n):
    password = input().strip()
    
    is_strong = True
    for row in rows:
        if not any(char in row for char in password):
            is_strong = False
            break
            
    if is_strong:
        print("strong")
    else:
        print("weak")