chips = 10

def blackjack(start_coin, game_count):
    total_game = 0
    if start_coin == 0:
        return 0

    if game_count == 24:
        return 1

    # 승리
    total_game += blackjack(start_coin+1, game_count+1)
    # 패배
    total_game += blackjack(start_coin-1, game_count+1)

    return total_game

total_game = blackjack(chips, 0)
print(total_game)
