#Посчитайте количество организаций (CompanyID), у которых суммарный объем файлов (FileSize) хотя бы одного проекта (ProjectID)
#превышает средний объем файлов по всем проектам.

import pandas as pd

df = pd.read_csv('dataset_file_storage.csv', sep=';')
mean_sum = df.groupby(['ProjectID']).FileSize.sum().mean()
grp = df.groupby(['CompanyID', 'ProjectID'], as_index=False).FileSize.sum().rename(columns={'FileSize': 'volume'})
print(grp.query('volume > @mean_sum').CompanyID.nunique())
