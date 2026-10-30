total = 0
cantidad_productos = 0
while True :
    precio = float(input("ingrese el precio del producto(0 para terminar): "))

    if precio == 0:
        break # 
    total += precio
    cantidad_productos += 1
print(f"\ntotal a pagar: ${total:.2f}")
print(f"Cantidad total de productos: {cantidad_productos}")
