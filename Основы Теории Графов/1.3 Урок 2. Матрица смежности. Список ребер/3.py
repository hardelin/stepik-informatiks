n = int(input())
x = 0
y = 0
for i in range(n):
    d = list(map(int, input().split()))
    if d[i] == 1:
        f = 1
    else:
        f = 0
    f += sum(d)
    if f % 2:
        y += 1
    else:
        x += 1
print(x, y)
