def step(a, b):
    if a == b:
        return 1
    elif a>b:
        return 0
    count = 0
    for i in range(1, 5):
        for j in range(1,5):
            count+=step(a+i, b-j)

    return count
print(step(0,10))