import json
t = 0
d = 0
mai = 0

with open("dados.json", encoding='utf-8') as meu_json:
    dict_dados = json.load(meu_json)

for i in dict_dados:
  if i['valor'] != 0:
    x = i['valor']
    t = t + x
    d = d + 1
med = t/d
  
for i in dict_dados:
  if i['valor'] != 0:
    if i['valor']  > mai:
      mai = i['valor']

men = mai
for i in dict_dados:
  if i['valor'] != 0:
    if i['valor']  < men:
      men = i['valor']

for i in dict_dados:
  if i['valor']  > med:
    dm =+ 1

print("O menor valor de faturamento ocorrido em um dia do mês foi de: ", men)
print("O maior valor de faturamento ocorrido em um dia do mês foi de: ", mai)
print("Número de dias no mês em que o valor de faturamento diário foi superior à média mensal foi de: ", dm)
