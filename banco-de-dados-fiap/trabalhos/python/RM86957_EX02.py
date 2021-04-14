"""
querida pessoa avaliadora, eu sei que não chegamos a falar de funções neste capítulo
porém eu não consegui ficar contente com a duplicação de código... hahaha
a mão da refatoração chega a tremer, então por favor, releve o meu 'overengineering'
"""

def calcular_media(grupo_alunos, total_alunos = 50):
    grupo_alunos = "PARES" if grupo_alunos.upper() == "PARES" else "ÍMPARES"
    total_nota = 0

    print("\nVOCÊ ESTÁ DIGITANDO AS NOTAS DOS ALUNOS {}\n".format(grupo_alunos))

    for i in range(1, total_alunos, 2):
        numero_aluno = i + 1 if grupo_alunos == "PARES" else i
        total_nota += float(input("POR FAVOR, INSIRA A NOTA DO ALUNO DE NÚMERO {}: ".format(numero_aluno)))

    return total_nota / (total_alunos // 2)


media_pares = calcular_media("PARES")
media_impares = calcular_media("ÍMPARES")

print("\n", "*" * 20)

print("Média de alunos com números PARES: {:.2f}".format(media_pares))
print("Média de alunos com números ÍMPARES: {:.2f}".format(media_impares))

if media_pares == media_impares:
    print("Ambos os grupos tiveram médias iguais")
elif media_pares > media_impares:
    print("Os alunos com números PARES tiveram a melhor média")
else:
    print("Os alunos com números ÍMPARES tiveram a melhor média")

print("\n", "*" * 20)
