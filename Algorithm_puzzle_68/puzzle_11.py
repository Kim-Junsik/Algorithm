count = 0

start = second = 1
while count < 5:
    third = start + second
    sum = 0
    if third > 144:
        for i in str(third):
            sum+= int(i)
        
        if third%sum == 0:
            print(third)
            count+=1

    start, second = second, third
