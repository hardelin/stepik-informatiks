#Переменная df содержит DataFrame.
#
#Переменная column содержит имя колонки, содержащей строковые значения "yes", "no", либо числовые 1 или 0.
#
#Замените в column:
#
#"yes" и 1 на True
#"no" и 0 на False
#Выведите df на печать

def ser(e):
    if e == 'yes' or e == 1:
        return True
    if e == 'no' or e == 0:
        return False
df[column] = df[column].map(ser)
print(df)
