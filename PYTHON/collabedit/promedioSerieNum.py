# Dada una serie de números ingresados de a uno.
# Indicar promedio de la serie.
# El ingreso de números finaliza cuando el usario ingresa 0

promedio=0;

num=int(input("Ingrese un numero:"))
suma=0   
contador=03


while(num!=0):
    suma+=num
    contador+=1
    num=int(input("Ingrese un numero:"))    

print(suma/contador)