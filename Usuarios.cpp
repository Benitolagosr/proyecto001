#include <stdio.h>   //Manejo de archivos
#include <stdlib.h>
#include <string.h>  //Manejo de cadenas de texto.


int main(){

char Usuario[20];
	
	printf("\n\n\t\tBIENVENIDO A XXXXXXXXXX");
	
	printf("\n\nCon xxxxxx usted podra cotizar que elemento desea comprar");
	printf("\ny asi tomar la mejor decision al momento de legir su compra.");
	printf("\nPrimero debera iniciar sesion con un nombre de usuario");
	
	printf("\n\nUsuario: ");	
	scanf("%s",Usuario);
	 strcat(Usuario, ".txt");
	
	
    FILE* arch = fopen(Usuario,"w");	
  
   
   
    fprintf(arch,"   %s  ",Usuario);
   
   
	fclose(arch);
	
return 0;	
}
