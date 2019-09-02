Algoritmo Calculando_Meses
	Escribir "Introduzca el year: "
	Leer year
	Escribir "Introduzca el mes (numero) :"
	Leer mes
	dd = 0
	segun mes hacer 
		1: 
			dd = 31
		3:
			dd = 31
		5:
			dd = 31
		7:
			dd = 31
		8:
			dd = 31
		10:
			dd = 31
		12:
			dd = 31
	
		4:
			dd = 30
		6:
			dd = 30
		9:
			dd = 30
		11: 
			dd = 30
		
		2:
			dd = 28
	De Otro Modo :
				Escribir "mes no valido"
FinSegun

si mes>=1 && mes <=12 Entonces
	Escribir "El mes " mes " del year " year " tiene " dd " dias "
	
FinSi

FinAlgoritmo
