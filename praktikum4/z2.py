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
