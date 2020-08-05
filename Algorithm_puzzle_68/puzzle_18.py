from itertools import permutations
from math import sqrt
import copy
N = 2
count = 0

# 한번에 제곱근이 되는 갯수 전부 체크  --
# 각각 넣은후 넣은 배열로 다음 함수 재귀 호출, 남은 딸기 카운트도 같이 던져줌 
# 남은거중에 아무것도 제곱근이 안될 경우 return  --
# 남은 딸기의 수가 0 이라면 returne N

def check_straw(_N, _flag, _number_straw, _cut_straw, _remain):
    return_value=0
    positive = []

    if _remain == 0 and sqrt(_cut_straw[-1] + _cut_straw[0]) % 1 == 0:
        return _N

    for i in range(2, _N+1):
        if _flag[i-1] == False and sqrt(_cut_straw[-1] + i) % 1 == 0:
            positive.append(i)

    if not len(positive):
        return False

    for j in range(len(positive)):
        copy_cut_straw = copy.deepcopy(_cut_straw)
        copy_number_straw = copy.deepcopy(_number_straw)
        copy_flag = copy.deepcopy(_flag)
        copy_cut_straw.append(positive[j])
        copy_number_straw.remove(positive[j])
        copy_flag[positive[j]-1] = True
        return_value = check_straw(_N, copy_flag, copy_number_straw, copy_cut_straw, _remain-1)
        if return_value == False:
            continue
        else:
            break

    return return_value




# 함수만들어서 재귀로 돌리기
while count == 0:
    # 사용한 딸기 를래그
    flag = [False] * N
    # 딸기의 숫자 리스트
    number_straw = [i for i in range(2,N+1)]
    # 자른 케이크에 올려저 있는 딸기의 수와 순서
    cut_straw = [1]
    # 1개를 기준으로 잡고 시작
    flag[0] = True

    count = check_straw(N, flag, number_straw, cut_straw, N-1)
    N+=1
print(count)
