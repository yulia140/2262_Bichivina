*** Задача 1. Маршрутка

```
vsego = int(input())
vmestimost = 15
uehali = (vsego // vmestimost) * vmestimost
ostalis = vsego % vmestimost
print(uehali, ostalis)
```
*** Задача 2. Сумма половин
```
stroka = input()
seredina = len(stroka) // 2
pervaya_polovina = stroka[:seredina]
vtoraya_polovina = stroka[seredina:]
otvet = int(pervaya_polovina) + int(vtoraya_polovina)
print(otvet)
```

*** Задача 3. Жажда
```4
n = float(input())
result = n / 3
print(round(result, 3))
```

*** Задача 4.Рубли и копейки
```
cena = float(input())
vsego_kopeek = round(cena * 100)
rubli = vsego_kopeek // 100
kopeiki = vsego_kopeek % 100
print(rubli, "rub", kopeiki, "kop")
```

*** Задача 5. Отчет
```
n, m, c, k = map(int, input().split())
vsego = n * m
net = vsego - k
if net <= 0:
    print(0)
else:
    p = (net + 199) // 200
    s = p * c
    
    print(s)
```

*** Задача 6. Подарки
```
n, m, k = map(int, input().split())
v = n * m
x = (v + k - 1) // k
print(x)
```

*** Задача 7. Датчик пульса
```
import math
n, t = map(float, input().split())
v_minutu = (n * 60) / t
otvet = math.ceil(v_minutu)
print(otvet)
```

*** Задача 8. Точки на прямой
```
import math
x, y = map(float, input().split())
if x > y:
    x, y = y, x
a = math.ceil(x)
b = math.floor(y)
c = b - a + 1
print(c)
```

*** Задача 9. Буквы и цифры
```
s = input()
sm = 0
for c in s:
    if c.isdigit():
        sm += int(c)
print(sm)
```

*** Задача 10. Скобки в зазеркалье

```
s = input()
s = s[::-1]
s = s.replace('(', '*')
s = s.replace(')', '(')
s = s.replace('*', ')')
print(s)
```

*** Задача 11. Разворот слов
```
s = input().split()
res = " ".join(w[::-1] for w in s)
print(res)
```

*** Задача 12. Минимальные делители

```
a = input().split()
res = []
for s in a:
    x = int(s)
    for d in range(2, x + 1):
        if x % d == 0:
            res.append(d)
            break
print(" ".join(map(str, res)))
```

*** Задача 13.Сумма делителей

```
n = int(input())
s = 0
for d in range(1, n):
    if n % d == 0:
        s += d
print(s)
```

*** Задача 14. Игра в пробке
```
n = int(input())
m = 0
d = 0
for i in range(n):
    x = int(input())
    if x % 3 == 0:
        m += 2
    else:
        d += 1
print(m, ":", d, sep="")
```

*** Задача 15. Прибыль

```
n = int(input())
s = 0
for i in range(n):
    a, b = map(int, input().split())
    p = a - b
    if p > 0:
        s += p
print(s)
```
