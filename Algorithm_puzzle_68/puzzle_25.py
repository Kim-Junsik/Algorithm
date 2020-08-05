from itertools import permutations
N = 5

hole_list = [i for i in range(1,N+1)]
max_count = 0
for left in permutations(hole_list, N):
    for right in permutations(hole_list, N):
        total_list = []
        left_start = 0
        right_start = right[0]
        for idx in range(N):
            total_list.append([left_start, right_start])
            left_start = left[idx]
            total_list.append([left_start, right_start])
            if len(right) > idx+1:
                right_start = right[idx+1]
        total_list.append([left_start, 0])

        count=0
        for i in range(0,len(total_list)-1):
            for j in range(i+1,len(total_list)):
                if (total_list[i][0]-total_list[j][0])*(total_list[i][1] - total_list[j][1]) < 0:
                    count+=1

        max_count = max(max_count, count)

print(max_count)
