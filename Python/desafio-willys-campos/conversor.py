# Desenvolvido por Bruno Monteiro <bruno.monteirodg@gmail.com>
# LAUS DEO
def bin_to_dec(numero, soma = 0, index = 0, exp = 0):
    #converte o valor de numero para str
    if (type(numero) is not str):
        numero = str(numero)

    # condição de parada. Retorna o resultado
    if index == len(numero) or numero == 0:
        return soma

    # verifica se o expoente foi setado, caso true continua execução
    # cado false seta o expoente
    if exp == 0 and soma == 0:
        # seta o expoente com o tamanho da string menos 1
        exp = len(numero) - 1

    #inicia a brincadeira da recursividade ... =)
    return bin_to_dec(numero, soma + (int(numero[index]) * (2 ** exp)), index + 1, exp - 1)

print('O número binário 1010 é igual a %d em decimal' %(bin_to_dec(1010)))
