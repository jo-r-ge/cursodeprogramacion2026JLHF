cuenta = float(input("Ingrese del total de la cuenta: "))
porcentaje_propina = float(input("Introduce el porcentaje de propina (ej. 15): "))

propina = cuenta * (porcentaje_propina / 100)
total_a_pagar = cuenta + propina
print(f"Propina: ${propina:.2f}")
print(f"total a pagar: ${total_a_pagar:.2f}")
