import math

man = 20
woman = 10

count = 0
for m in range(1, man+1):
    for w in range(1, woman+1):
        if m != w and (20-m) != (10-w):
            left = math.factorial(m+w)//(math.factorial(m)*math.factorial(w))
            right = math.factorial(20-m+10-w)//(math.factorial(20-m)*math.factorial(10-w))
            count += left*right

print(count)
