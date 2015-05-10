/* Informa la longitud promedio de las líneas
* Julian Gomez
* 10/05/2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int nl; 
int nc; 
int c; 
for(nl = 0, nc = 0; ( c = getchar()) != EOF;)
c=='\n' ? ++nl : ++nc;

!ferror(stdin) ? perror("No se pudo seguir leyendo de la entrada debido a un error"): 
  nl==0 ? printf ("Longitud promedio = 0"):
		  printf("Longitud promedio: %.1f\n", nc / (float)nl );
;
			   
return EXIT_SUCCESS;
}
