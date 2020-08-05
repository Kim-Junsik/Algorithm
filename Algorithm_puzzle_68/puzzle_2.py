num_list = [str(i) for i in range(1000,10000) if i%10 != 0]

for count in range(len(num_list)):
    rev_num = int(num_list[count][::-1])
    
    if ((int(num_list[count][0]) * int(num_list[count][1:])) == rev_num)\
        or ((int(num_list[count][0:2]) * int(num_list[count][2:])) == rev_num)\
        or ((int(num_list[count][0:3]) * int(num_list[count][3:])) == rev_num):
        print(num_list[count])

    elif ((int(num_list[count][0]) * int(num_list[count][1]) * int(num_list[count][2:])) == rev_num)\
            or ((int(num_list[count][0:2]) * int(num_list[count][2]) * int(num_list[count][3])) == rev_num)\
            or ((int(num_list[count][0]) * int(num_list[count][1:3]) * int(num_list[count][3:])) == rev_num):
        print(num_list[count])

    elif ((int(num_list[count][0]) * int(num_list[count][1]) * int(num_list[count][2]) * int(num_list[count][3])) == rev_num):
        print(num_list[count])
