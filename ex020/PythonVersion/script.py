numero = int(input("digita um número ai de mil e tanto: "))

casaDecimal = ["unidades", "dezenas","centenas", "milhares"]

divisor = 10

for i in casaDecimal:
    # printa somenete o resto||decimal
    print(numero % divisor, i)

    # divisao inteira, sem o resto||decimal
    numero = numero // divisor
