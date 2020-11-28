#include <stdio.h>   //Manejo de archivos
#include <stdlib.h>
#include <string.h>  //Manejo de cadenas de texto.

/*

struct pc{
	
char nombre[20];
struct CPU;
struct GPU;
struct RAM;
struct Almacenamiento;
int preciopc;

};

struct CPU{
	char nombre[20];
	int preciocpu;
	}
	
struct GPU{
	char nombre[20];
	int preciogpu;
	}
	
struct RAM{
	char nombre[20];
	int precioram;
	}
struct Almacenamiento{
	char nombre[20];
	int precioalmacenamiento;
	}




*/


int main(){

int opcion;
int opcion1;
int opcion2;
char Usuario[20];
int presupuesto;



	printf("\n\n\t\tBIENVENIDO A COTIZATUPC");

	printf("\n\nCon COTIZATUPC usted podra cotizar que elemento desea comprar");
	printf("\ny asi tomar la mejor decision al momento de legir su compra.");
	printf("\nPrimero debera iniciar sesion con un nombre de usuario");

	printf("\n\nUsuario: ");	
	scanf("%s",Usuario);
	strcat(Usuario, ".txt");


    FILE* arch = fopen(Usuario,"w");	

    
    fprintf(arch,"   %s  ",Usuario);
    
    printf(" Porfavor ingrese su presupuesto \n");
    scanf("%d", &presupuesto);

    printf(" Que desea cotizar? \n");
	printf(" 1. PC \n");
	printf(" 2. Notebook \n");
	printf(" 3. Monitor \n");
	printf(" 4. Mouse \n");
	scanf("%d", &opcion);
 
    switch(opcion){
		
		case 1:
		    
		  
		    printf(" Cual es su necesidad de PC? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming \n"); 
	        printf(" 3. Edicion y almacenamiento \n");
	        scanf("%d", &opcion1);

     
		
		break;
		
		case 2:
		    printf(" Cual es su necesidad de notebook? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming \n");
	        printf(" 3. Edicion y almacenamiento \n");
	        scanf("%d", &opcion2);
		break;
		
		case 3:
		    printf(" Cual es su necesidad de pantalla? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming (Tasa de refresco) \n");
	        printf(" 3. Enfocado en calidad de imagen (720p/1080p)\n");
		break;
		
		case 4:
		    printf(" Cual es su necesidad de su mouse? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming \n");
		break;
		
		}
	
	
	fclose(arch);
	
	

return 0;	
}
