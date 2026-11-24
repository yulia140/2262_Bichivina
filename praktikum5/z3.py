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