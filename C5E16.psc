Algoritmo C5E16
	// Hacer un programa que retorne la sumatoria de 1 hasta el número
	// que ingresa el usuario. Ejemplo: Sumatoria de 5 = 1 + 2 + 3 + 4 + 5.
	Definir i, maximo, acc Como Entero; 
	Definir mensaje Como Caracter;
	Escribir "Indique hasta que numero contar";
	Leer maximo;
acc = 0;
	Para i<-0 Hasta maximo-1 Hacer
		acc = acc+ i;
	FinPara
	 Escribir "Sumatoria = ", acc;
FinAlgoritmo
