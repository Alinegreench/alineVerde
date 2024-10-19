Algoritmo lista_par_impar
	//Este programa imprime una lista del 1 al 100 y viceversa indicando si el numero es par o impar
	
	//variables
	Definir contador1, contador2 Como Entero;
	contador1=1;
	contador2=100;
	
	//bucle
	Mientras (contador1 <= 100) Hacer
		
		Si(contador1 mod 2 =1)Entonces
			Si(contador2 mod 2=0)Entonces
				Escribir contador1, " impar ", contador2, " par ";
			FinSi
		FinSi
		
		Si(contador1 mod 2 = 0 )Entonces
			Si(contador2 mod 2 = 1)Entonces
				Escribir contador1, " par ", contador2, " impar ";
			FinSi
			
		FinSi
		
		contador1=contador1+1;
		contador2=contador2-1;
	Fin Mientras
	
FinAlgoritmo
