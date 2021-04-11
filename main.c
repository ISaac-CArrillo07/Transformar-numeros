#include<conio.h>
#include<stdio.h>

main(){
	
char centero[10];
int entero,opc;
void romanos(int);
void arabicos();

printf ("MENU\n");
printf ("1.transformar numeros de arabico a romano\n");
printf("2.transformar numeros de romano a arabico\n");
printf ("3.Salir\n");
printf ("Eleccion: ");
scanf("%d",&opc);
printf ("\n");

	switch (opc){
		case 1:
			printf("Introduce el numero en arabigo:");
			scanf("%s",centero);
			entero=atoi(centero); //Convierte un numero decimal a entero
			romanos(entero); //llama a la funcion romanos, para transformarlo a numero romano
			break;
		case 2:
			arabicos();
			break;
		case 3: 
			printf ("FIN");
			break;
		default: ;


	}


}

void romanos(int entero){
char *centenas[]={"","C"};
char *decenas[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
char *unidades[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};

int aux,c,aux2,d,u;


aux=entero;
c=aux/100; //centenas
aux2=aux%100;
d=aux2/10; //decenas
u=aux2%10; //unidades

printf("\nEl numero %d en romano es %s%s%s\n\n",entero,centenas[c],decenas[d],unidades[u]);
printf ("");
}

void arabicos(){
	char romanos[9]={0,0,0,0,0,0,0,0,0};	
	char letras[5]={'C','L','X','V','I'};
	int valores[8];
	int cont;
	int num=0;

	
	

	printf("Introduce el numero en romano(EN MAYUSCULAS):   ");
	scanf("%9s",&romanos);
	printf("\n");
	for(cont=0;cont<9;cont++)
	{
		switch(romanos[cont])
		{
			case 'M':
				valores[cont]=1000;
			break;
 
			case 'C':
				valores[cont]=100;
			break;
 
			case 'D':
				valores[cont]=500;
			break;
 
			case 'L':
				valores[cont]=50;
			break;
 
			case 'X':
				valores[cont]=10;
			break;
 
			case 'V':
				valores[cont]=5;
			break;
 
			case 'I':
				valores[cont]=1;
			break;
 
			case 0:
				valores[cont]=0;
			break;
			default:
			printf("\n Has introducido caracteres invalidos");
			valores[cont]=0;
			break;
		} /* fin switch */
	} /* fin for */
	for(cont=0;cont<9;cont++)
	{
		if(valores[cont]<valores[cont+1])
		{
			valores[cont]=-valores[cont];
		}
		if(valores[cont]>=valores[cont])
		{
			valores[cont]=valores[cont];
		}
	}
	for(cont=0;cont<9;cont++)
	{
		num=num+(valores[cont]);
	}
/*	for(cont=0;cont<8;cont++)
	{
		printf("%i\t",valores[cont]);
	}*/
	
	printf("\nEl numero %s en decimal equivale a: ",romanos);

	printf("%d" ,num);
	getch();
}

