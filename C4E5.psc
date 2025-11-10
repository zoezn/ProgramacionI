Algoritmo sin_titulo
	Definir dato1, dato2, operacion Como Entero; 
	Escribir  "Ingrese el primer numero";
 	Leer dato1; 
	Escribir  "Ingrese el segundo numero";
 	Leer dato2; 
	Escribir  "Ingrese la operacion que quiere realizar:";
	Escribir '1. Suma';
	Escribir '2. Resta';
	Escribir '3. Multiplicacion';
	Escribir '4. Division';
	Leer operacion;
	Segun operacion Hacer
		1:
			Escribir 'La suma da ',dato1+dato2;
		2:
			Escribir 'La resta da ',dato1-dato2;
		3:
			Escribir 'La multiplicacion da ',dato1*dato2;
		4:
			Escribir 'La divison da ',dato1/dato2;
		De Otro Modo:
			Escribir 'Opcion no valida';
	FinSegun
FinAlgoritmo
