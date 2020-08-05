n = 16

line_num = {}
line_num[0] = line_num[2] = 1

for i in range(4,16+2,2):
    line_num[i]=0
    for j in range(0,i//2):
        line_num[i] += line_num[j*2] * line_num[i - (j*2) -2]

print(line_num[n])
print(line_num)
