countries = ["Brazil", "Croatia", "Mexico", "Cameroon",
            "Spain", "Netherlands", "Chile", "Australia",
            "Colombia", "Greece", "Cote d'Ivoire", "Japan",
            "Uruguay", "Costa Rica", "England", "Italy",
            "Switzerland", "Ecuador", "France", "Honduras",
            "Argentina", "Bosnia and Herzegovina", "Iran",
            "Nigeria", "Germany", "Portugal", "Ghana",
            "USA", "Belgium", "Algeria", "Russia",
            "Korea Republic"]

flag = [False]*len(countries)

def bfs(index, use_country, _count):
    count = _count
    global max_count
    last = True
    flag[index] = True
    # 거쳐간 나라 확인용
    #print(count, use_country)
    for num, country in enumerate(countries):
        if countries[index][-1].upper() == country[0] and flag[num] == False:
            # count+=1 --> 여기에 넣으면 안됨
            # ['Brazil'] 1 1
            # ['Croatia' --> 1 에서 2, 'Australia' --> 2 에서 3, 'Argentina' --> 3 에서 4, 'Algeria' --> 4 종료] count=4 -- >원래 순서인데
            # 위에서의 Australia위치로 리턴하면
            # ['Croatia' --> 2, 'Australia' --> 3, 'Argentina' --> 4, 'Algeria' --> 5] 4  -- > 따라서 위치 조정 필요!!!!!
            # 위의 결과때문에 
            # ['Croatia', 'Australia' --> 3, 'Algeria' --> 4, 'Argentina' --> 5] 5 
            """
            1 ['Croatia']                                          | --> input = 1 가지고 있는 count = 2
            2 ['Croatia', 'Australia']                             | --> input = 2 가지고 있는 count = 3
            3 ['Croatia', 'Australia', 'Argentina']                | --> input = 3 가지고 있는 count = 4
            4 ['Croatia', 'Australia', 'Argentina', 'Algeria']     | --> input = 4 가지고 있는 count = 4
            ['Croatia', 'Australia', 'Argentina', 'Algeria'] 4 4   | --> 츨력 결과
            4 ['Croatia', 'Australia', 'Algeria']                  | --> 위에 Australia에서 보면 가지고 있는 
                                                                        count는 3 따라서 이곳에서 count증가 즉 count = 4
            5 ['Croatia', 'Australia', 'Algeria', 'Argentina']     | --> input = 4 가지고 있는 count = 5
            ['Croatia', 'Australia', 'Algeria', 'Argentina'] 5 5   | --> 출력결과
            """
            last=False
            bfs(num,use_country + [country], count + 1)
    if last:
        if max_count < count:
            max_count = count
            # count 확인용
            #print(use_country, count, max_count)
    flag[index] = False
    return

max_count = 0
for idx, country in enumerate(countries):
    bfs(idx,[country],1)


print(max_count)
