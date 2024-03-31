n = int(input())
cnt = 0;
for i in range(n):
    cnt += list(map(int, input().split())).count(1)
print(cnt)
