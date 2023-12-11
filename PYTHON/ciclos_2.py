#Escribir un program que solicite el ingreso de una serie de números, de uno a la vez, hasta que la suma acumulada supere el valor 1000.
#Informar cuantos ingresos se hicieron y el total acumulado.

suma = 0
contador=0
while suma <= 1000:
    numero = int(input("Ingrese un número: "))
    contador += 1
    suma += numero

print("Se ingresaron: ",contador," numeros. Suma total: ",suma)