***Задание 1. Первый класс
```
import math
n = int(input())
k = math.ceil(n / 25)
min_students = n // k
print(k, min_students)
```
***Задание 2. Двоичная запись

```
for _ in range(int(input())):
    n = int(input())
    p, q = map(int, input().split())
    ans = "0."
    for _ in range(n):
        p *= 2
        ans += '1' if p >= q else '0'
        if p >= q: p -= q
    print(ans)
```

***Задание 3. Сравнение

```
from fractions import Fraction
import sys
data = sys.stdin.read().split()
t = int(data[0])
idx = 1
res = []

for _ in range(t):
    p1, q1, p2, q2, p3, q3, p4, q4 = map(int, data[idx:idx+8])
    idx += 8
    
    sum1 = Fraction(p1, q1) + Fraction(p2, q2)
    sum2 = Fraction(p3, q3) + Fraction(p4, q4)
    
    res.append('0' if sum1 == sum2 else '-1' if sum1 < sum2 else '1')

print(' '.join(res))
```
***Задание 4. Универсальный префиксный код.

```
n = int(input())
nums = map(int, input().split())

ans = []
for x in nums:
    b_x = bin(x)[2:]
    b_y = bin(len(b_x))[2:]
    ans.append('0' * (len(b_y) - 1) + b_y + b_x[1:])

print(''.join(ans))
```
***Задание 5.Декодирование универсального префиксного кода

```
s = input().strip()
ans = []
i = 0
n = len(s)

while i < n:
    z = 1
    while i < n and s[i] == '0':
        z += 1
        i += 1
    
    y_str = s[i : i + z]
    i += z
    
    y = int(y_str, 2)
    
    x_str = '1' + s[i : i + y - 1]
    i += y - 1
    
    ans.append(int(x_str, 2))

print(len(ans))
print(*ans)
```
