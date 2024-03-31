#Переменная df содержит DataFrame.
#
#Выведите на печать для каждого столбца, содержащего числа его имя и сумму через двоеточие.

for i in list(df):
    if np.dtype(df[i]) == "float64" or np.dtype(df[i]) == "int64":
        print(f'{i}:{df[i].sum()}')
