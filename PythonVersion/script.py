numero = int(input("digita um número ai de mil e tanto: "))

casaDecimal = ["unidades", "dezenas","centenas", "milhares"]
divisor = 10

for i in casaDecimal:
    print(numero % divisor, i)
    numero = numero // divisor

