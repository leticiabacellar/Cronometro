 /*
 * Programa: cronômetro
 * Data de criação: 19/05/2021
 */
 
 //bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>//para usar o sleep()

int main(){
	//comando de regionalização
	setlocale(LC_ALL,"Portuguese");
	system("Color 4");
	//titulo do programa
	SetConsoleTitle("Cronômetro");
	
	//Variáveis
	int sec=0;
	int min=0;
	int hr=0;
	int i=0; // controle do loop
	
     do	{
		printf("Cuidado e uma bomba!!!");
		printf("ela vai explodir a qualquer momento.\n");
	    Sleep(1000);//tem a função de pausar a execução por um determinado tempo
	
		system("cls");//limpa tela
		
		printf("Cronometro\n\n\n");
		printf("\n\t\t\t%dhr:%dmin:%dsec\n\n\n", hr,min,sec);
		
		if(sec==60){
			sec=0;
			min++;
		}
		
		if(min==60){
			min=0;
			hr++;
		}
		
		if(hr==24){
			hr=0;
		}
		
		
		sec++;
	}while(i==0);
	
	system("Pause");
	return 0;
}
