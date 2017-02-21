#include <stdio.h>
#include <stdlib.h>

/* Esta es una aplicación para el calculo de incrementos mensuales de ingresos
   por medio de plazos fijos mensuales*/

void consultar_saldo();//completa
void despositar_saldo();//incompleta
void retirar_saldo();//incompleta
void capitalizar_mensual();//incompleta
void asignar_tasa();



int main(void)
{
	system("clear");
	int salir = 0;//Esta es la variable que nos permitira dejar de ejecutar el programa
	float saldo = 0;
	int opcion = 0;
	float deposito = 0;
	float monto = 0;
	float mensual = 30./360;
	int mes = 0;
	int retiro = 0;

	printf("\nBienvenido a Elu bank service\n");

	while(salir == 0)
	{
		printf("Tiempo transcurrido = ");
		printf("%d mes/meses\n\n\n", mes);
		printf("\nQue operacion desea ejecutar?\n\n");
		printf("1) Consultar saldo.\n");
		printf("2) Depositar saldo.\n");
		printf("3) Capitalizar (1 mes).\n");
		printf("4) Salir.\n");

		scanf("%d", &opcion);
		if(opcion == 1)
		{
			system("clear");
			consultar_saldo();
		}
		if(opcion == 2)
		{
			system("clear");
			printf("\nCuanto dinero desea depositar?\n");
			scanf("%f", &deposito);
			saldo = saldo + deposito;
			system("clear");
			printf("\nUsted a depositado %f con exito.\n\n", deposito);
			deposito = 0;
			opcion = 0;
		}
		if(opcion == 3)
		{
			system("clear");
			mes++;
			monto = saldo * 0.15 * mensual;
			printf("\nLos intereses producidos fueron: %f.\n\n", monto);
			saldo = saldo + monto;
			opcion = 0;
		}
		if(opcion == 4)
		{
			system("clear");
			salir = 1;
		}
	}
}

void consultar_saldo()
{
	printf("\nSu saldo actual es %f.\n\n", saldo);
	opcion = 0;
}

void retirar_saldo()
{
	printf("\nIngrese el monto que desea retirar:\n");
	scanf("%f", &retiro);
	saldo = saldo - retiro;
	printf("Usted ha retirado %f con exito", retiro);
	retiro = 0;
	opcion = 0;
}
