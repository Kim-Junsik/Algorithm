from itertools import combinations
magic_square = [1,14,14,4,11,7,6,9,8,10,10,5,13,2,3,15]

dict_sum = {}

for i in range(len(magic_square)):
    for comb_number in combinations(magic_square, i):
        sum_comb = sum(comb_number)
        if sum_comb not in dict_sum.keys():
            dict_sum[sum_comb] = 0
        dict_sum[sum_comb] +=1

max_key = 0
max_value = 0

for key, value in dict_sum.items():
    if max_value < value:
        max_key = key
        max_value = value
#print(dict_sum)
print(max_key, max_value, sep='\n')
