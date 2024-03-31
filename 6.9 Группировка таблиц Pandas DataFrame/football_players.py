#В файле football_players.csv представлен фрагмент выгрузки датасета о футболистах.
#
#Посчитайте среднюю и медианную зарплату "Wage" футболистов из разных клубов "Club".
#
#В скольких клубах средняя и медианная зарплаты совпадают?

import pandas as pd

df = pd.read_csv('football_players.csv', sep=',')
print(df.groupby('Club').agg({'Wage': lambda x: x.mean() == x.median()}).sum())
