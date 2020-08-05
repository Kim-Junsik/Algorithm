european = [0, 32, 15, 19, 4, 21, 2, 25, 17, 34, 6, 27, 13, 36,
            11, 30, 8, 23, 10, 5, 24, 16, 33, 1, 20, 14, 31, 9,
            22, 18, 29, 7, 28, 12, 35, 3, 26]
american = [0, 28, 9, 26, 30, 11, 7, 20, 32, 17, 5, 22, 34, 15,
            3, 24, 36, 13, 1, 0, 27, 10, 25, 29, 12, 8, 19, 31,
            18, 6, 21, 33, 16, 4, 23, 35, 14, 2]

def find_max(roulette_num, sum_count):
    max = 0
    for i in range(0, len(roulette_num)+1):
        ans = 0
        if i + sum_count <= len(roulette_num)-1:
            # 범위 내부에 있을때 더하기
            ans = sum(roulette_num[i:i+sum_count+1])
        else :
            # 범위 벗어나면 더하기 --> 고쳐보기
            ans = sum(roulette_num[i:len(roulette_num)]) # --> 왜 -1이지..??
            ans += sum(roulette_num[0:sum_count - (len(roulette_num) - i) + 1])
        if max < ans:
            max = ans
    return max

count = 0
for i in range(2,37):
    eu_max = find_max(european, i)
    am_max = find_max(american, i)
    if eu_max < am_max:
        print(eu_max, am_max)
        count+=1

print(count)
