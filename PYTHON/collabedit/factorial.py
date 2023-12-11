# Calcular el factorial de un numero ingresado por el usuario e indicarle el resultado.

numIngresado = int(input("Ingresar número a calcular factorial: "))
totalProducto = 1


for num in range(2, numIngresado + 1):
    totalProducto *= num

print("El factorial de", numIngresado, "es", totalProducto)