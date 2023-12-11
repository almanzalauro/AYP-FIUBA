# Escribir un programa que le solicite al usuario el ingreso de dos números (asumir que serán enteros).
# Luego indicar cuál es el máximo común divisor de ambos números.

# Se define el máximo común divisor (abreviado MCD) de dos o más números enteros al mayor número entero que los divide sin dejar resto.
# Ambos números deben ser distintos a cero.


num1=int(input("Ingrese el primer numero:"))
num2=int(input("Ingrese el segundo numero:"))

numMinimo=min(num1,num2)

minComunDivisor = 1

for i in range(1, numMinimo + 1):
    if num1 % i == 0 and num2 % i == 0:
        minComunDivisor = i

print(f"El MCD entre {num1} y {num2} es {minComunDivisor}")