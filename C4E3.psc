Algoritmo sin_titulo
	Definir productoA, productoB Como Entero;
	Escribir  "Ingrese el precio del primer producto";
	Leer productoA;
	Escribir  "Ingrese el precio del segundo producto";
	Leer productoB;
	Si (productoA + productoB > 10000) Entonces
		Si (productoA > productoB) Entonces
			productoB = productoB*0.70;
		SiNo
			productoA = productoA*0.70;
		FinSi
	FinSi
	Escribir 'Primer producto: $', productoA;
	Escribir 'Segundo producto: $', productoB;
	Escribir 'El total a pagar es $',productoA + productoB;
FinAlgoritmo
