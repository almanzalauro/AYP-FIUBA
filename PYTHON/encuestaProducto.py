# Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en el mercado.
# A cada encuestado se le pregunta si consume el producto x y si consume el producto y. La respuesta puede ser sí o no.
# Se pide calcular e informar el porcentaje de consumidores de:
#   a) del producto x
#   b) del producto y
#   c) del producto x solamente
#   d) del producto y solamente
#   e) de ambos productos
#   f) de ninguno de los productos

continuar = True
cantProductoX=0
cantProductoY=0
sumaTotal=0
encuestaLeida=0

consumeAmbos=False
consumeNinguno=False

ambosProd=0
ningunProd=0

numEncuestas=int(input("Ingrese la cantidad de encuestas a cargar: "))
print("Ingrese 1 si su respuesta es SI",'\n', "Ingrese 0 si su respuesta es NO")

while(encuestaLeida<=numEncuestas or continuar):
    respuestaX = int(input("Consume el producto X?:"))
    respuestaY = int(input("Consume el producto Y?:"))

    if(respuestaX==1 and respuestaY==1):
        ambosProd+=1
    elif(respuestaX==0 and respuestaY==1):
        cantProductoY+=1
    elif(respuestaX==1 and respuestaY==0):
        cantProductoX+=1
    elif(respuestaX==0 and respuestaY==0):
        ningunProd+=1
    else:
        print("Respuesta invalida")
        continuar=False;
    
    sumaTotal = cantProductoX+cantProductoY
    encuestaLeida+=1

    