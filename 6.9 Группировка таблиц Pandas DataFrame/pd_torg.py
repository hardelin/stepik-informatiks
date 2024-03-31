#В файле torg.csv представлена выгрузка со склада интернет-магазина.
#
#Обратите внимание на нестандартный разделитель!
#
#Товаров какого цвета больше всего на складе?
#P.S. скачайте torg.csv и запустите код ниже (они должны лежать в одной папке)

import pandas as pd

df = pd.read_csv('torg.csv', sep=';')
df = df[['IP_PROP30', 'CP_QUANTITY']].groupby(['IP_PROP30']).sum()
print(df.sort_values(['CP_QUANTITY'], ascending=False).iloc[0])
