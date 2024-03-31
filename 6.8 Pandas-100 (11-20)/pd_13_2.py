#Переменная df содержит DataFrame.
#
#Увеличьте значение возраста во всех строках на 1.
#
#Выведите df на печать.

df["age"] = list(map(lambda x: x+1, df["age"]))
print(df)
