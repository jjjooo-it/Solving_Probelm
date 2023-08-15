t = int(input())

for _ in range(t):
    n, s = input().split()
    n = int(n)
    s = str(s)
    for i in range(len(s)):
        print(n*s[i] ,end='')
    print()
