# enumerate 사용하여 인덱스 가지고 오기
# 배열 100개 생성 후 전부 False로 초기화
# 카드를 뒤집으면 True로 표현
# [False] * 100으로도 초기화 가능

cards = [False for i in range(0,100)] 

# 뒤집는 간격
step = 2

# 카드 뒤집기
for i in range(1,100):
    for j in range(i,100,step):
        cards[j] = not cards[j]
    step+=1

# 뒷면 카드 출력
for index, card in enumerate(cards):
    if card == False:
        print(index+1, end=', ')
