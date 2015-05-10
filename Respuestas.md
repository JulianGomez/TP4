##Preguntas y Ejercicios

1.
For es una �nica sentencia, la cual primero situa la variable nl y nc
en cero, luego pide el ingreso de una secuencia de car�cteres, y
luego ejecuta una secuencia de pasos, siempre y cuando,
la secuencia ingresada sea distinto de EOF (end of file). 
En esta sentencia, la coma , (coma), es un operador, 
implica un orden en la evaluaci�n de condiciones. Es decir primero 
la sentencia situada a la izquierda y luego la situada a la derecha. 
Hay otra expresion equivalente, y ser�a "nl=nc=0" (Asociatividad).

2.
Los parentesis son necesarios, ya que establece un orden,
en este caso, establece que primero se ingrese una cadena de texto,
y que luego se eval�e con EOF, de lo contrario, establecer�a
que getchar() sea igual a EOF, y que se almacene en 
la variable c. Luego la comparaci�n con '\n'

3.
If:
Pragm�tica: eval�a si termin� la repetici�n con error o no.
Sem�ntica: ver�fica que !feof(stdin) sea = 1, de ser asi,
invoca a la funci�n Perror.

4.
Funci�n Perror: establece como salida estandar un error,
es decir, establece que el programa dejo de ejecutarse por
un error.
Esto puede suceder por varias razones:
si la cadena no es un puntero nulo y el car�cter apuntado
por cadena no es el car�cter nulo, la cadena apuntada por 
cadena seguido de dos puntos (:) y un espacio.

5.
* Sem�ntica: *feof(stdin): si el flujo es igual a fin, el resultado 
es verdadero. *ferror(stdin): si el flujo esta en estado err�neo,
el resultado es verdadero.
Estas funciones, no son mutuo excluyentes,
ya que un flujo puede tener 3 estados, estado err�neo,
estado de lectura y estado de fin.
En este programa programa, si la expresi�n ferror(stdin) 
es verdadero (=1), se invoca la funci�n perror. 

6.
El formato %.1f, expresa un operador de casteo, lo que implica
un cambio del formato de una expresi�n.
Se mostrara por pantalla un n�mero de tipo de dato punto
flotante con un m�nimo de 1 caracter.

7.
Se aplica un casteo en la expresi�n nl, para obtener una mayor
precisi�n como resultado final (promedio).

8.
No, ya que este programa no considera la opci�n vacio, ya
que no se peude dividir por cero (0).

9.
No, no es precisa, ya que cuenta los car�cteres enter "\n".

10.
Reemplazar lo que ejecuta if por: if (c=="\n") ++nl; else ++nc; 
y adem�s se deber�a establecer un condicional, para contemplar
el caso del vacio (0).

11.
No. Porque cuenta los \n funcionalmente

12.
Se quita del for:
++nc;

Se agregar:
if (c=='\n')
   ++nl;
else
   ++nc;
