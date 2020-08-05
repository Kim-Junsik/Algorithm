n, m = map(int, input().split())

stick=1
cut_count = 0

while stick<n:
    # 막대 수 증가
    if stick > m:
        stick += m
    else:
        stick*=2
    # 전체 자른 횟수
    cut_count+=1

print(cut_count)