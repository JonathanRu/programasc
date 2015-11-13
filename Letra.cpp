#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;


    pf= fopen("Letrac.txt", "w");

	fprintf(pf, "Yo me voy al Manzanares\n"
		"Al estadio Vicente Calderon\n");

    fclose(pf); 

	return EXIT_SUCCESS;

}
