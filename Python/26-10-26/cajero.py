def calcular_billetes():
    try:
        monto = int(input("Ingrese el monto de retirar(multiplo de 10): "))
    except ValueError:
        print("monto invalido.")
        return
    if monto % 10 != 0:
        print("El cajero solo entrega montos multiplos de 10 Bs. ")
        return

    billetes = [200, 100, 50, 20, 10]
    print(f"\nDesglose para entregar {monto} Bs.:")
    for billete in billetes:
        if monto >= billete:
            cantidad = monto // billete
            monto = monto % billete
            print(f"- {cantidad} billete(s) de {billete} Bs.")

calcular_billetes()