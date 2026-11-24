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