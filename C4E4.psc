Algoritmo sin_titulo
	Definir dato Como Entero;
	Definir mensaje Como Cadena;
	Escribir  "Ingrese el numero";
	Leer dato; 
	mensaje = 'No es un numero de la suerte :(';
	Si (dato == 20  O dato == 80 O (dato > 0 Y dato MOD 2 <> 0 y dato MOD 3 = 0 )) Entonces
		mensaje = 'Es un numero de la suerte!';
	FinSi
	Escribir mensaje;
FinAlgoritmo
