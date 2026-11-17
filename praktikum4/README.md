*** Задача 1
```
n = int(input())
count = 0
num = 2
def is_prime(x):
    if x < 2:
        return False
    # Проверяем делители до корня из x для оптимизации
    for i in range(2, int(x**0.5) + 1):
        if x % i == 0:
            return False
    return True
while count < n:
    if is_prime(num):
        count += 1
    if count == n:
        print(num)
        break
    num += 1
```

*** Задача 2

```
import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return
   n = int(data[0])
    dresses = data[1:1+n] 
    seen = set()
    for day, dress in enumerate(dresses, start=1):
        seen.add(int(dress))
        if len(seen) == 3:
            print(day)
            return      
    print(n)
if __name__ == '__main__':
    solve()
```

*** Задача 3

```
from string import ascii_lowercase

s = input().strip()

most_frequent_char = max(ascii_lowercase, key=s.count)

result = s.replace(most_frequent_char, '')

print(result)
```

*** Задача 4

```
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
```

*** Задача 5

```
import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    trump = input_data[0]
    n = int(input_data[1])
    
    ranks = ["6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"]
    
    results = []
    
    idx = 2
    for _ in range(n):
        attack_rank = input_data[idx]
        attack_suit = input_data[idx+1]
        defend_rank = input_data[idx+2]
        defend_suit = input_data[idx+3]
        idx += 4
        
        is_beat = False
        
        # Получаем индексы (силу) карт
        attack_power = ranks.index(attack_rank)
        defend_power = ranks.index(defend_rank)
        
        if attack_suit == defend_suit:
            # Если масти одинаковые, отбивающая должна быть строго старше
            if defend_power > attack_power:
                is_beat = True
        else:
            # Если масти разные, отбить можно только козырем
            if defend_suit == trump:
                is_beat = True
                
        results.append("1" if is_beat else "0")
            
    print(" ".join(results))

if __name__ == '__main__':
    solve()
```

