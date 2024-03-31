#В файле torg.csv представлена выгрузка со склада интернет-магазина.
#
#Сгруппируйте размеры представленных товаров по суммарному количеству единиц товара на складе.
#
#Учитывайте, что результат группировки (после применения итоговой функции) - обычный датафрейм, т.е. к нему применимы все обычные функции, например,
#https://pandas.pydata.org/pandas-docs/stable/reference/api/pandas.DataFrame.sort_values.html

import pandas as pd

df = pd.read_csv('torg.csv', sep=';')
df = df[['IP_PROP32', 'CP_QUANTITY']].groupby(['IP_PROP32']).sum()
print(df.sort_values(['CP_QUANTITY']))
