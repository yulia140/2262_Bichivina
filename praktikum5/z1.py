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