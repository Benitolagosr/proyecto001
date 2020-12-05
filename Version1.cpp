#include <stdio.h>   //Manejo de archivos
#include <stdlib.h>
#include <string.h>  //Manejo de cadenas de texto.

void PC();
void notebook();
void pantalla();
void mouse();


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

char Usuario[20];
int presupuesto;

int main(){

int opcion;

int cotizaciones;

	printf("\n\n\t\tBIENVENIDO A COTIZATUPC");

	printf("\n\nCon COTIZATUPC usted podra cotizar que elemento desea comprar");
	printf("\ny asi tomar la mejor decision al momento de legir su compra.");
	printf("\nPrimero debera iniciar sesion con un nombre de usuario");

	printf("\n\nUsuario: ");	
	scanf("%s",Usuario);
	strcat(Usuario, ".txt");

     FILE* arch = fopen(Usuario,"a+");
      
    // fprintf(arch,"Hola mundo!!");
    
   /* if (feof(arch) == 0){
		
		printf("\nUsted tiene cotizaciones anteriores desea verlas");
		printf("\n1-si \n2-no");
		scanf("%d",&cotizaciones);
		
	}else{
		
		printf("\n Usted no presenta cotizaciones anteriores\n");
		
	}	*/
    
    printf("\n Desea cotizar algo:\n");
    printf("\n\t Porfavor ingrese su presupuesto:");
    scanf("%d", &presupuesto);

    printf("\n Que desea cotizar? \n");
	printf(" 1. PC \n");
	printf(" 2. Notebook \n");
	printf(" 3. Monitor \n");
	printf(" 4. Mouse \n");
	scanf("%d", &opcion);
 
 fclose(arch);
 
    switch(opcion){
		
		case 1:
		   
		  PC();
		   
		break;
		
		case 2:
		
		notebook();
		   
		break;
		
		case 3:
		   
		   pantalla();
		   
		break;
		
		case 4:
		
		mouse();
		    
		break;
		
		}
	
return 0;	
}

void PC(){
	
	int opcion1;
	
	FILE* arch = fopen(Usuario,"a+");
	fprintf(arch,"Cotizacion ");

	printf(" Cual es su necesidad de PC? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming \n"); 
	        printf(" 3. Edicion y almacenamiento \n");
	        scanf("%d", &opcion1);
	
	
	FILE* arch2 = fopen("Torre.txt", "r");
	
	
	for(int i=0;!fofe(arch2);i++){
		
		
		
	}
     
              fclose(arch);
              fclose(arch2);

}


void notebook(){
	
	int opcion2;
	
	 printf(" Cual es su necesidad de notebook? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming \n");
	        printf(" 3. Edicion y almacenamiento \n");
	        scanf("%d", &opcion2);
	        
	        
	
	
}

void pantalla(){

            printf(" Cual es su necesidad de pantalla? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming (Tasa de refresco) \n");
	        printf(" 3. Enfocado en calidad de imagen (720p/1080p)\n");
	        
	        

}

void mouse(){
	
	        printf(" Cual es su necesidad de su mouse? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming \n");
	
	
}	
