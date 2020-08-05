import copy
max_num = 2014
count = 0
line_count = 2

step = [1,1]

while count < max_num:
    copy_step = []
    copy_step.append(1)
    for i in range(len(step)-1):
        re = step[i] ^ step[i+1]
        if re == 0:
            count +=1
        copy_step.append(re)

    copy_step.append(1)
    step = copy.deepcopy(copy_step)
    line_count+=1

print(line_count)

