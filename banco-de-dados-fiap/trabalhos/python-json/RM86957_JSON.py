# NOME: EDSON BRUNO SOARES MONTEIRO
# CURSO: Banco de Dados
# Atividade: Manipulação de JSON
import json

male_count = 0
female_count = 0
unknown_gender_count = 0

with open('./star_wars.json') as content_file:
    content_json = json.load(content_file)

    for item in content_json:
        gender = item['gender']

        if gender == 'male':
            male_count += 1
        elif gender == 'female':
            female_count += 1
        else:
            unknown_gender_count += 1

        print('Nome:', item['name'])
        print('Gênero:', gender)
        print('*' * 7)

print('Sexo feminino:', female_count)
print('Sexo masculino:', male_count)
print('Sexo não identificado:', unknown_gender_count)
