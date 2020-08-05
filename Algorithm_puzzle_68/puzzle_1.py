number = 11

while True:
    de_num = str(number)
    oc_num = oct(number).replace("0o","")
    bi_num = bin(number).replace("0b","")

    if de_num == de_num[::-1] and oc_num == oc_num[::-1] and bi_num == bi_num[::-1]:
        print(number)
        break

    number+=2
