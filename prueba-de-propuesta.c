#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero, horas,horanumero;
	char digitohora[5],minutos[5],segundos[5];
	
	printf("De el número de empleado: ");
	scanf("%d",&numero);
	// hasta el 2000, cuatro tipos de empleados
    if(numero<=100){
    	printf("\nTipo de empleado: Ejecutivo\n");
    	//printf("\nDe el numero de horas trabajadas: ");
    	//scanf("%d",&horas);
    	//este trabajador tiene un sueldo por hora de  
	}else{
		if(numero>100 && numero<=300){
			printf("\nTipo de empleado: Vendedor\n");
		//	printf("\nDe el numero de horas trabajadas: ");
    	//scanf("%d",&horas);
		}
	else{
		if(numero>300 && numero<=600){
			printf("Tipo de empleado: Ingeniero\n");
		//	printf("\nDe el numero de horas trabajadas: ");
    	//scanf("%d",&horas);
    	}
	else{
		if(numero>60 && numero<=2000){
			printf("\nTipo de empleado: Empleado/obrero\n");
		//	printf("\nDe el numero de horas trabajadas: ");
    	//scanf("%d",&horas);
    	}
    else{
    	printf("numero incorrecto");
	}
	}
	}
}


  char fecha[25];//ctime devuelve 26 caracteres pero tambien se podría usar un puntero de char
    time_t current_time;
    current_time=time(NULL);
    ctime(&current_time);
    strcpy(fecha, ctime(&current_time));
   // printf("%s", fecha);
    
    char hora[14];
    char *token=strtok(fecha," ");
    int i=0;
    
    while(token!=NULL)
    {
	token=strtok(NULL," ");
    if(i==2)
    {
    	strcpy(hora,token);   //copia en una cadena de caracteres los caracteres de las horas, minutos y segundos
	}
	i++;
}

printf("\nTu hora de entrada es: %s\n\n",hora);

char *separador=strtok(hora, ":");     //se separara la cadena hora cada vez que aparezca el operador :
	int j=0;
	
	while(separador!=NULL)
	{
		//printf("separacion= %s\n",separador);
		
        switch(j)
		{
			case 0:
				strcpy(digitohora,separador);
			break;
			case 1:
				strcpy(minutos,separador);
			break;
			case 2:
				strcpy(segundos,separador);
			break;
		}
		separador=strtok(NULL,"/");
	j++;
	}
	

horanumero=atoi(digitohora);    //se convertira la cadena que incluye los digitos de la hora a un dato int

//printf("\nNumero entero: %d\n", horanumero);

if(horanumero>8){       //compara si el empleado ha llegado tarde ya
                 printf("\nYa son mas de las 8 de la manana. Has llegado tarde, se te restara a tu salario del dia\n\n");
                 }

	system("PAUSE");
	return 0;
	
	
	
}
