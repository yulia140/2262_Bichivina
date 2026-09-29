*** Задача 1
```
name1 = input()
name2 = input()
print(name1, "and", name2, "was here")
```
*** Задача 2
```
a = input().split()
b = input().split()
print(a[0], b[0], a[1], b[1], a[2], sep=',')
```
*** Задача 3
```
a, b = input().split()
c, d = input().split()
e, f = input().split()
print(len(a) * int(b) + len(c) * int(d) + len(e) * int(f))
```

*** Задача 4
```
s = input()
print('*' * (len(s) + 4))
print('* ' + s + ' *')
print('*' * (len(s) + 4))
```

*** Задача 5
```
h1, m1, s1 = map(int, input().split())
h2, m2, s2 = map(int, input().split())
start = h1 * 3600 + m1 * 60 + s1
finish = h2 * 3600 + m2 * 60 + s2
print(finish - start)
```

*** Задача 6
```
n = int(input())
if n == 1:
    print("pusk)
else:
    print(n - 1)
```

*** Задача 7
```
a, b, c = map(int, input().split())
if a == 3 and b == 3 and c == 3:
    print("hole")
else:
    print(a + b + c)
```

*** Задача 8
```
a, b, c = input().split()
if len(a) > len(b) and len(a) > len(c):
    print(a)
elif len(b) > len(a) and len(b) > len(c):
    print(b)
else:
    print(c)
```

*** Задача 9
```
a, b = map(int, input().split())
if a < b:
    print("<")
elif a > b:
    print(">")
else:
    print("=")
```

*** Задача 10
```
a, b, c = map(int, input().split())
if a > b:
    a, b = b, a
if c < a:
    print(a - c)
elif c > b:
    print(c - b)
else:
    print(0)
```
*** Задача 11
```
x = int(input())
while x != 1:
    print(x, end=' ')
    if x % 2 == 0:
        x = x // 2
    else:
        x = 3 * x + 1
print(1)
```
*** Задача 12
```
n = int(input())
p = 1
while p * 2 <= n:
    p = p * 2
print(p)
```

*** Задача 13
```
count = 0
name = input()
while name != "Petr":
    count += 1
    name = input()
print(count + 1)
```

*** Задача 14
```
n, a = map(int, input().split())
count = 0
while count < n:
    if a % 2 != 0 and a % 3 != 0 and a % 5 != 0 and a % 7 != 0:
        print(a, end=' ')
        count += 1
    a += 1
```

*** Задача 15
```
a, b = map(int, input().split())
while b != 0:
    a, b = b, a % b
print(a)
```

