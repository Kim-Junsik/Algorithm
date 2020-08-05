from math import gcd
max_len = 500
count = 0
for a in range(1, max_len//4 + 1):
    square = a**2

    for x in range(1,a):
        for y in range(1,a):
            if (x**2 + y**2) == ((2*a)*(x+y)-(a**2)) and gcd(x,y) == 1:

                count+=1

print('가로 세로 바꾼것은 같은 사각형으로 볼때 :{}'.format(count//2))
print('가로 세로 바꾼것은 다른 사각형으로 볼때 :{}'.format(count))
print('두 개의 끈을 서로 바꿀때 :{}'.format(2*count))
