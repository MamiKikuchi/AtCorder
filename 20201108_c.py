n = int(input())
sum=0
while n>0:
    sum += n%10
    n = n // 10#スラッシュ２つは整数になる
print(sum)
    
print(-1)