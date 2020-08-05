import pandas as pd
dt_index = pd.date_range(start='19641010', end='20200724')

for date in dt_index:
    date = str(date).replace('-', '')[:9]
    bi_date = bin(int(date)).replace('0b', '')
    if bi_date == bi_date[::-1]:
        print(date)
