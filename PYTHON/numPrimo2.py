# Tomá la solución del ejercicio anterior y preguntate sí elegiste el cliclo adecuado, y si estás evitando realizar ciclos innecesarios.
# Por ejemplo, algunas preguntas que nos podríamos hacer son:
#    a) Si con sólo encontrar un divisor del número a evaluar, ya puedo afirmar que el número no es primo, tiene sentido    
#       seguir evaluando divisores? xq si ya sabemos que es divisible por 1 y por si mismo, al encontrar otro divisible ya no seria primo.
#    b) Teniendo en cuenta que todo número par a excepción del 2 (num==2 es primo), no es primo, tiene sentido seguir en un ciclo si al calcular el resto de la división del número a evaluar por 2, el resultado es cero? 
#    c) Puedo a al número a evaluar dividido 2?
#       Seguramente, si tengo en cuenta estás cuestiones en mi programa, podré lograr que el  mismo sea más eficiente.


num = int(input("Ingrese un número para saber si es primo o no: "))

print('\n'"El numero ingresado es: ", num)

ciclos = 0  

if num < 2:
    print("El número no es primo"'\n')
elif num == 2:
    print(f"{num} es un número primo"'\n')
else:
    es_primo = True
    for i in range(3, int(num**0.5) + 1, 2):
        ciclos += 1  # Incrementa el contador de ciclos
        if num % i == 0:
            es_primo = False
            break

    if es_primo:
        print(f"{num} es un número primo"'\n')
    else:
        print(f"{num} no es un número primo"'\n')

    print("Cantidad de ciclos utilizados:", ciclos)  # Imprime la cantidad de ciclos
