# Un juego de un parque de diversiones, debe realizar los siguientes controles antes de comenzar a funcionar:

    # Sólo pueden participar quienes tengan una altura entre 1.60 m y 1.90 m
    # El peso total de los participantes no debe superar las 1.5 toneladas
    # La capacidad máxima de participantes es de 20

# Debemos programar una simulación de estos controles, para ello nuestro programa debe solicitar a medida que va a ingresar al juego un nuevo participante, su peso y su altura.

# ----En caso de detectar que la altura del participante no cumple con lo requerido, se debe enviar el siguiente mensaje: “Altura del participante fuera de 
#     rango permitido”; y se debe continuar con el siguiente participante.

#---- También a medida que se procesan los ingresos de participantes, se debe controlar que la cantidad de participantes no exceda el máximo establecido, por 
#     ello, si se alcanza el máximo, se debe informar: “Cantidad máxima de participantes alcanzada” y el juego podrá comenzar si cumple con el resto.

# A medida que se procesan los ingresos de participantes, se debe controlar que el peso acumulado de los participantes no exceda el total permitido. Si lo excediera, debe enviar el mensaje: “Peso total excedido, el participante no puede subir”, el juego puede comenzar con los participantes ya aceptados.

# Por último, podría ser que suban menos personas que la capacidad máxima, entonces, utilizar el último ingreso de los pesos como corte de ingreso de participantes, considerando que si se ingresa 0 como peso, indica, que no hay más participantes.

# Escribir un programa en Python, que simule la situación descrita. 

# Inicializamos las variables
altura_minima = 1.60  # Altura mínima permitida
altura_maxima = 1.90  # Altura máxima permitida
peso_maximo_total = 1500  # Peso máximo total permitido (en kilogramos)
capacidad_maxima = 20  # Capacidad máxima de participantes
peso_total_actual = 0  # Peso total acumulado de los participantes
cantidad_participantes = 0  # Cantidad de participantes ingresados
continuar_ingresando = True  # Variable booleana para controlar el ingreso de participantes

print("CAP MAX:1500KG  Y MAX CANTIDAD DE PERSONAS: 20 \n")
while cantidad_participantes <= capacidad_maxima and continuar_ingresando:
    
    peso = float(input("Ingrese el peso del participante (en kilogramos): "))
    
    # si se ingresó 0 como peso indico que no hay más participantes
    if peso == 0:
        continuar_ingresando = False
    elif peso_total_actual + peso > peso_maximo_total:
        print("Peso total excedido, el participante no puede subir")
        continuar_ingresando = False
    else:
        altura = float(input("Ingrese la altura del participante (en metros): "))
        
        # compruebo si la altura está dentro del rango permitido
        if altura < altura_minima or altura > altura_maxima:
            print("Altura del participante fuera de rango permitido")
        else:
            # Si esta todo ok, sube el participante y actualizo las variables
            cantidad_participantes += 1
            peso_total_actual += peso

            print("Peso acumulado:", peso_total_actual)
            print("Personas arriba:", cantidad_participantes)
            print("----")


#verifico si se alcanzó la capacidad máxima de participantes
if cantidad_participantes == capacidad_maxima:
    print("Cantidad máxima de participantes alcanzada")

#el juego puede comenzar con los participantes que subieron
print("El juego puede comenzar con", cantidad_participantes, "participantes.")
