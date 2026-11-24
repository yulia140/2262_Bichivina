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