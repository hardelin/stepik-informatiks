# В файле StudentsPerformance.csv представлен фрагмент выгрузки об абитуриентах.
#
# Каково максимальное медианное значение оценки по чтению у групп, разделенных по признаку "пол абитуриента" и "национальность" ?

import pandas as pd

df = pd.read_csv('StudentsPerformance.csv')

group = df.groupby(['gender', 'race/ethnicity'])
print(group['reading score'].median().max())
