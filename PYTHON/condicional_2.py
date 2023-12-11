num1 = int(input("Ingrese el primer numero: "))
num2 = int(input("Ingrese el segundo numero: "))

if num1 > num2:
    numMayor = num1
elif num2 > num1:
    numMayor = num2
else:
    print("Los números son iguales.")
    numMayor = num1  

if numMayor is not None:
    print("El número mayor es:", numMayor)
