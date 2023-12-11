altura_minima = 1.60  # Altura mínima permitida
altura_maxima = 1.90  # Altura máxima permitida
peso_maximo_total = 50  # Peso máximo total permitido (en kilogramos)
capacidad_maxima = 30  # Capacidad máxima de participantes
peso_total_actual = 0  # Peso total acumulado de los participantes
cantidad_participantes = 0  # Cantidad de participantes ingresados
continuar_ingresando = True  # Variable booleana para controlar el ingreso de participantes

print("CAP MAX:1500KG  Y MAX CANTIDAD DE PERSONAS: 20 \n")

while cantidad_participantes <= capacidad_maxima and continuar_ingresando:
    
    peso = float(input("Ingrese el peso del participante (en kilogramos): "))
    
    if peso == 0:
        continuar_ingresando = False

    elif peso_total_actual + peso > peso_maximo_total:
        print("Peso total excedido, el participante no puede subir")
        continuar_ingresando = False
        
    else:
        altura = float(input("Ingrese la altura del participante (en metros): "))
        
        # compruebo si la altura está dentro del rango permitido
        fuera_de_rango = altura < altura_minima or altura > altura_maxima
        
        # Si esta todo ok, sube el participante y actualizo las variables
        cantidad_participantes += (not fuera_de_rango)
        peso_total_actual += (not fuera_de_rango) * peso

        print("Peso acumulado:", peso_total_actual)
        print("Personas arriba:", cantidad_participantes)
        print("----")

if cantidad_participantes == capacidad_maxima:
    print("Cantidad máxima de participantes alcanzada")

print("El juego puede comenzar con", cantidad_participantes, "participantes.")
