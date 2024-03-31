#Продолжаем работать с датасетом StudentsPerformance.csv
#
#Какое среднее значение оценок по всем предметам у мальчиков из такой же группы с уровнем образования как у родителей девочек, получивших максимальную среднюю оценку по всем предметам?
#Ответ округлите до одного знака после запятой.

import pandas as pd

ds = pd.read_csv('StudentsPerformance.csv')
meanScore = ds.groupby(['gender', 'parental level of education']).mean().mean(axis=1)
print(meanScore.loc[('male',meanScore.loc['female'].idxmax())].round(1))
