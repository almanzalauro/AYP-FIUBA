# Escribir un programa que le solicite al usuario el ingreso de dos números (asumir que serán enteros).
# Luego indicar cuál es el máximo común divisor de ambos números.

# Se define el máximo común divisor (abreviado MCD) de dos o más números enteros al mayor número entero que los divide sin dejar resto.
# Ambos números deben ser distintos a cero.
# Requisito: basar la solución en la aplicación del método de Euclides, en el siguiente video podes encontrar una explicación de dicho método:

num1=int(input("Ingrese el 1er valor: "))
num2=int(input("Ingrese el 2do valor: "))

cociente =int(max(num1,num2)/min(num1,num2))
residuo=(max(num1,num2)%min(num1,num2))

valorMCD=residuo
nuevoNumerador=min(num1,num2)

ciclos=0;
while(residuo!=0):
    nuevoDivisor=residuo
    nuevoNumerador=max(nuevoNumerador,nuevoDivisor)
    residuo=nuevoNumerador%nuevoDivisor
    ciclos+=1
    if(residuo!=0):
        valorMCD=residuo

    print(f"Numerador={nuevoNumerador}\nDivisor={nuevoDivisor}\nCociente={cociente} \nResiduo={residuo}\nMCD={valorMCD}\n")

print(f"\nEl MCD entre {num1} y {num2} es: {valorMCD}\nCantidad de ciclos={ciclos}")

