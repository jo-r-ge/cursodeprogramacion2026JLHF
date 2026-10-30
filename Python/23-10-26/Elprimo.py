numero = int(input("ingrese un numero entero positivo: "))
divisores = 0
for i in range (1, numero + 1):
    if numero % i == 0:
        divisores += 1
print(f"El numero{numero} tiene {divisores} divisores.")

if divisores == 2:
    print(f"El numero{numero} es primo.")
else:
    print(f"El numero{numero} no es primo.")

