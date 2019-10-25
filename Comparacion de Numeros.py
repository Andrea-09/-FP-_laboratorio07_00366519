Casos=int(input("Ingrese el numero de casos a evaluar: "))
numeros = []

for i in range(Casos):
  numero = float(input("Introduce el número #{}: ".format(i + 1)))
  numeros.append(numero)

mayor = numeros[0]
# Recorrer y comparar
for numero in numeros:
    if numero > mayor:
        mayor = numero
        
print("Mayor:", mayor)