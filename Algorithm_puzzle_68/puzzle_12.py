from math import sqrt

a = 1
count = 0
check_version = False
while count < 2:
    trig_1 = trig_2 = [False]*10
    check_str = '0123456789'
    check = str(sqrt(a))
    dot = check.find('.')
    total = check.replace('.','')[0:10]
    left = check[0:dot][0:10]
    right = check[dot+1:dot+11]
    
    if check_version:
        for i in total:
            if i in check_str:
                trig_1[int(i)-1] = True
    elif not check_version:
        for i in left:
            if i in check_str:
                trig_2[int(i)-1] = True

        for j in right:
            if j in check_str:
                trig_2[int(j)-1] = True

    if (False not in trig_1) or (False not in trig_2):
        print(a)
        count+=1
        check_version = not check_version

    a+=1

