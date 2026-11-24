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