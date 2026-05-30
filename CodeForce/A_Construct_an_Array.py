import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    arr = []
    p =1
    for i in range(n):
        q= p+ n
        arr.append(q)
        p+= 1
    print(*arr)
    
def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == '__main__':
    main()