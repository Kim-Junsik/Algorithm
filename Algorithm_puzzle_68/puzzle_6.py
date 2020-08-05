numbers = [i for i in range(1, 10001) if i%2 == 0]

count = 0

for number in numbers:
    copy_number = 3*number + 1

    while copy_number != 1:
        if copy_number%2 == 0:
            copy_number = copy_number//2
        else :
            copy_number = 3*copy_number + 1

        if copy_number == number:
            count+=1

print(count)

