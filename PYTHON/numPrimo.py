# Solicitar el ingreso de un número y luego informar si el número ingresado es un número primo.
# En matemáticas, un número primo es un número natural mayor que 1 que tiene únicamente dos divisores positivos distintos: él mismo y el 1.


num = int(input("Ingrese un número para saber si es primo o no: "))
contador = 2
ciclos = 0  

print('\n'"El numero ingresado es: ", num)

if num >= 2: 
    for i in range(2, num):
        print(f"i={i}      |       {num} % {i} = {num%i}")
        if num % i == 0:
            contador += 1
        ciclos += 1  
    
    if contador == 2:
        print(f"{num} es un número primo"'\n')
    else:
        print(f"{num} no es un número primo"'\n')

    print("cantidad de ciclos: ", ciclos)  
else:
    print("El número no es primo"'\n')



