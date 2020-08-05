charge = 1000

count = 0

for i in range(0, charge//500+1):
    for j in range(0, charge//100+1):
        for k in range(0,16):
            for l in range(0,16):
                if (500*i + 100*j + 50*k + 10*l) == charge:
                    count+=1


print(count)
