N = 30

list_m = [True] 
list_w = [False]


def line(_list):
    if len(_list) == N:
        return 1
    count = 0
    # plus True
    count += line(_list + [True])
    if _list[-1] == True:
        count += line(_list + [False])

    return count

start_m = line(list_m)
start_w = line(list_w)
total = start_m + start_w
print(total)
