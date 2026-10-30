import random

def jugar_adivina():
    numero_secreto = random.randint(1, 100)
    intentos_restantes = 5 
    print("¡Bienvenido a adivina!")
    print("He pensado un numero secreto entre 1 y 100. Tienes 5 intentos.")

    while intentos_restantes > 0:
        print(f"\nTienes {intentos_restantes} intentos restantes.")
        posible_numero = int(input("ingresa tu numero: "))

        if posible_numero == numero_secreto:
            print(f"¡Felicidades! Has adivinado el numero secreto: {numero_secreto}")
            return
        elif posible_numero < numero_secreto:
            print("El numero secreto es <<mas alto>>.")
        else:
            print("El numero secreto es << mas bajo>>.")
 
        intentos_restantes -= 1
    print(f"\nTe has quedado sin intentos. El numero secreto era: {numero_secreto}")
jugar_adivina()