# Escribir un programa que simule el proceso de control de peso y cantidad de personas que puede transportar un ascensor.
# Vamos a suponer que nuestro ascensor puede soportar un máximo de 400 kg y hasta 6 personas.
# Nuestra simulación debe proceder del siguiente modo:

# A medida que las personas ingresan al ascensor de a una a la vez, se registra el peso de la persona. Supondremos que si el ingreso es 0 kg, indica que no hay más personas por subir al ascensor.

# Si en un determinado momento del ingreso de las personas, se supera el peso máximo, el ascensor, advertirá mediante un - mensaje, que indique que se ha excedido el peso máximo y nuestra simulación terminará.

# De igual modo, si el ascensor detecta que ha subido una séptima persona al ascensor, deberá advertir de esto, y nuestra simulación terminará.

# Por último, si habiéndose indicado que todas las personas están abordo del ascensor y las condiciones establecidas se cumplen, el ascensor anunciará "ascensor en movimiento".

pesoMaximoKg = 400
cantidadMaximaPersonas = 6

cantidadPersonas=0
sumaPeso=0

pesoPersona=float(input("Ingrese el peso de la persona en kg: "))
cantidadPersonas+=1
sumaPeso = sumaPeso + pesoPersona

while (pesoPersona!=0):
    
    if(sumaPeso>pesoMaximoKg):
        print("Peso Maximo excedido")
        break
    if(cantidadPersonas>cantidadMaximaPersonas):
        print("Cantidad de personas excedida")
        break
    pesoPersona=float(input("Ingrese el peso de la persona en kg: "))
    cantidadPersonas+=1
    sumaPeso = sumaPeso + pesoPersona

if(pesoPersona==0):
    print("Ascensor en movimiento")


