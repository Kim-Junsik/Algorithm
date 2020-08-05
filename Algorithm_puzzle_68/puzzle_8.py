def dfs(visit):
    if len(visit) > 12:
        return 1

    count = 0

    for index in [[-1,0],[1,0],[0,-1],[0,1]]:
        next_pos = [visit[-1][0] + index[0], visit[-1][1] + index[1]]
        if next_pos not in visit:
            # 다음 함수가 사용하고 리턴하면 그때의 위치가 없어야 한다.
            # 즉 현재의 위치에서 다음 위치를 넘겨줄때 다음 함수에만 영향을 미쳐야한다
            # append함수를 사용할 경우 이 다음의 위치를 다음 함수가 가지고 있는것이 아니라
            # 현재 함수가 가지고 있어 오답이 나온다.
            # append_test.py 참고
            # append의 리턴값은 None이다.
            count += dfs(visit + [next_pos])
    return count


visit = [[0,0]]
count = dfs(visit)
print(count)
