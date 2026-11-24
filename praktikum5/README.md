***Задача 1
Код:

```
import sys

def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    
    n = int(data[0])
    m = int(data[1])
    a = [float(x) for x in data[2:2+n]]
    
    for _ in range(m):
        new_a = []
        for i in range(n):
            if i == 0:
                val = (2 * a[0] + a[1]) / 3.0 if n > 1 else a[0]
            elif i == n - 1:
                val = (2 * a[n-1] + a[n-2]) / 3.0
            else:
                val = (a[i-1] + a[i] + a[i+1]) / 3.0
            new_a.append(val)
        a = new_a
    
    print(" ".join(f"{x:.6f}" for x in a))

if __name__ == "__main__":
    solve()
```

***Задача 2

Код:

```
import sys

def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    
    n = int(data[0])
    a = [int(x) for x in data[1:1+n]]
    
    a.sort(key=lambda x: abs(x) * 2 + (1 if x > 0 else 0))
    
    print(" ".join(map(str, a)))

if __name__ == "__main__":
    solve()
```
***Задача 3

Код:

```
import sys

def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    
    target = data[0]
    n = int(data[1])
    
    dictionary = {}
    for i in range(n):
        word = data[2 + i * 2]
        replacement = data[3 + i * 2]
        dictionary[word] = replacement
    
    for i in range(1, len(target)):
        left = target[:i]
        right = target[i:]
        if left in dictionary and right in dictionary:
            print(dictionary[left] + dictionary[right])
            return

if __name__ == "__main__":
    solve()
```

***Задача 4

Код:

```
import sys

def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    
    n = int(data[0])
    m = int(data[1])
    
    matrix = []
    idx = 2
    for i in range(n):
        row = data[idx:idx+m]
        matrix.append(row)
        idx += m
    
    for j in range(m):
        print(" ".join(matrix[i][j] for i in range(n)))

if __name__ == "__main__":
    solve()
```

***Задача 5

Код:

```
import math
import sys

def solve():
  data = sys.stdin.read().split()
  if not data:
    return

  w = int(data[0])
  h = int(data[1])
  s = int(data[2])
  n = int(data[3])

  trees = []
  idx = 4
  for _ in range(n):
    x = float(data[idx])
    y = float(data[idx + 1])
    idx += 2
    trees.append((x, y))

  def route_key(point):
    x, y = point
    k = int(x // s)
    if k % 2 == 0:
      return (k, y, x)
    else:
      return (k, -y, x)

  ordered_trees = sorted(trees, key=route_key)

  total_dist = 0.0
  for i in range(1, n):
    x1, y1 = ordered_trees[i - 1]
    x2, y2 = ordered_trees[i]
    total_dist += math.hypot(x2 - x1, y2 - y1)

  print("{:.10f}".format(total_dist))

if __name__ == "__main__":
  solve()
```
