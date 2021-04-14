quantidade_alimento = int(input("Qual a quantidade de alimentos consumidas no dia? "))
caloria = 0

for i in range(quantidade_alimento):
    caloria += float(input("Qual a quantidade de calorias do alimento {}: ".format(i + 1)))

plural_alimento = "alimentos" if quantidade_alimento > 1 else "alimento"
plural_caloria = "calorias" if caloria > 1 else "caloria"

print("\nConsumo de {} {} com o total de {:.2f} {}".format(quantidade_alimento, plural_alimento, caloria, plural_caloria))
