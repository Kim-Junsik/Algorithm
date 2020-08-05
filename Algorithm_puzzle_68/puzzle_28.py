from itertools import combinations

clubs = [[11000, 40], [8000, 30], [400, 24], [800, 20], [900, 14],
        [1800, 16], [1000, 15], [7000, 40], [100, 10], [300, 12]]
N = 150

max_value = 0
max_num = 0
for i in range(1, len(clubs)+1):
    for club in combinations(clubs,i):
        value = 0
        number = 0
        for j in range(len(club)):
            number+=club[j][1]
        if number <= N:
            for j in range(len(club)):
                value+=club[j][0]
        max_value = max([max_value, value])
        max_num = max([max_num, number])
print(max_value, max_num)
