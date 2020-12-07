#include <stdio.h>   //Manejo de archivos
#include <stdlib.h>
#include <string.h>  //Manejo de cadenas de texto

void PC();
void notebook();
void pantalla();
void mouse();


//void imprimir();
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
	};
	
struct GPU{
	char nombre[20];
	int preciogpu;
	};
	
struct RAM{
	char nombre[20];
	int precioram;
	};
struct Almacenamiento{
	char nombre[20];
	int precioalmacenamiento;
	};
*/
char Usuario[20];
int presupuesto;
char imprimir[50];

int main(){

int opcion;
int cotizaciones;
int cont = 0;
char temp[50];


	printf("\n\n\t\tBIENVENIDO A COTIZATUPC");

	printf("\n\nCon COTIZATUPC usted podra cotizar que elemento desea comprar");
	printf("\ny asi tomar la mejor decision al momento de legir su compra.");
	printf("\nPrimero debera iniciar sesion con un nombre de usuario");

	printf("\n\nUsuario: ");	
	scanf("%s",Usuario);
	strcat(Usuario, ".txt");
    
     FILE* arch = fopen(Usuario,"a+");
    
         while (!feof(arch)){
            fgets(temp,50,arch);
            cont++;
           }
     
     printf("\n\n%d",cont);	
       fclose(arch);
     
    if(cont > 10){
		
		printf("\nUsted tiene cotizaciones anteriores desea verlas");
		printf("\n1-si \n2-no");
		scanf("%d",&cotizaciones);
		
		if(cotizaciones == 1 ){
	     
	    FILE* arch = fopen(Usuario,"a+");	
	   while (!feof(arch)) {
        
        fscanf (arch, "%c", &imprimir[50]);
        printf (" %c \n", imprimir[50]);  
          
    }
     fclose(arch);
     printf("\n Desea cotizar algo:\n");
     printf("\n1-si \n2-no");
    scanf("%d",&cotizaciones);   
    
    if(cotizaciones == 2){
		exit (-1);
		
	}
	}
	}else{
		
		printf("\n Usted no presenta cotizaciones anteriores\n");
        printf("\n Desea cotizar algo:\n");
        printf("\n1-si \n2-no");
        scanf("%d",&cotizaciones);
        
       if(cotizaciones == 2){
		exit (-1);
	}   
	}	
    
    printf("\n\n\t Porfavor ingrese su presupuesto:");
    scanf("%d", &presupuesto);

    printf("\n Que desea cotizar? \n");
	printf(" 1. PC \n");
	printf(" 2. Notebook \n");
	printf(" 3. Monitor \n");
	printf(" 4. Mouse \n");
	scanf("%d", &opcion);
 
 
    switch(opcion){
		
		case 1: PC();  
		break;
		
		case 2: notebook();   
		break;
		
		case 3: pantalla();   
		break;
		
		case 4: mouse();	    
		break;
		
		default: printf("ERROR, opcion incorrecta");
		
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
	
	switch(opcion1){
		
		case 1: printf("nada");  
		break;
		
		case 2: printf("nada");  
		break;
		
		case 3: printf("nada"); 
		break;
		
	    default: printf("ERROR, opcion incorrecta");
		
		}
	
	
	
	FILE* arch2 = fopen("Torre.txt", "r");
	
	
     
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

/*
void imprimir(){
	
	for(int i=0;!fofe(arch2);i++){
			
	}
	
}
*/
