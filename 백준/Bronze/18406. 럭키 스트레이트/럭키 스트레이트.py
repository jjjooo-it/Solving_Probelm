n = list(map(int, input()))
one=0
two=0
for i in range(0,len(n)//2):
    one += n[i]

for i in range(len(n)//2, len(n)):
    two += n[i]

if one == two:
    print("LUCKY")
else:
    print("READY")