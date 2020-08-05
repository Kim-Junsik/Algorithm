from itertools import permutations
prime_number = [2,3,5,7,11,13]

N = prime_number[-1]*prime_number[-1]
N_friends = []
for list_number in permutations(prime_number):
    composit_number = [list_number[i]*list_number[i+1] for i in range(len(list_number)-1)]
    composit_number.insert(0, list_number[0]*list_number[0])
    composit_number.insert(-1, list_number[-1]*list_number[-1])
    if N > max(composit_number):
        N = max(composit_number)
        N_friends = composit_number

print(N, N_friends, sep='\n')
