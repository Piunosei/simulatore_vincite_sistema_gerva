#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

int under_over;
int percentuale=66;
int tipologia_giocata=0;
long long int puntata=1;
long long int fondo_cassa;
int check=0;
long long int i=0;
int j[2]={0,0};
int k[3]={0,0,0};
long long int numero_giocate;


long long int guadagno_netto=0;


printf("Inserire il FONDO CASSA iniziale\n");
scanf("%lli",&fondo_cassa);


printf("Inserire il numero di giocate su cui si vuole testare il metodo\n");
scanf("%lli",&numero_giocate);
srand(time(NULL));


while(i<numero_giocate){

under_over= rand() % 100 +1 ;

printf("\n under over = %d\n ",under_over);

printf("\n puntata %lli \n",puntata);
/*
if(puntata>=8){

int TEST;
scanf("%d",&TEST);

}
*/
check=0;
	if (under_over<=percentuale){//perdi
		if(k[0]==0 && k[1]==0 && k[2]==0 && check==0){
			if(tipologia_giocata==0){
				tipologia_giocata=0;
				k[0]=1;
				fondo_cassa=fondo_cassa-puntata;
				puntata=2;
			}else if(tipologia_giocata==1 && j[0]==0){
				fondo_cassa=fondo_cassa-puntata;
				tipologia_giocata=0;
				puntata=1;				
			}else if(tipologia_giocata==1 && j[0]==1){
				fondo_cassa=fondo_cassa-puntata;
				j[0]=0;	
				tipologia_giocata=1;			
			}
			check=1;
		}else if(k[0]==1 && k[1]==0 && k[2]==0 && tipologia_giocata==0 && check==0){
			tipologia_giocata=0;
   			k[1]=1;
			fondo_cassa=fondo_cassa-puntata;
			puntata=4;
			check=1;		
		}else if(k[0]==1 && k[1]==1 && k[2]==0 && tipologia_giocata==0 && check==0){
			tipologia_giocata=0;   			
			k[0]=0;
			k[1]=0;
			fondo_cassa=fondo_cassa-puntata;
			puntata=1;
		}		
	}else if (under_over>percentuale){//vinci//pareggi
		if(k[0]==0 && k[1]==0 && k[2]==0 && check==0){
			if(j[0]==0){
				tipologia_giocata=1;
				j[0]=1;	
				fondo_cassa=fondo_cassa+puntata;	
			}else if(j[0]==1){
				tipologia_giocata=1;
				j[0]=0;	
				fondo_cassa=fondo_cassa+puntata;
				puntata=puntata*2;	
			}
				
			check=1;
		}else if(k[0]==1 && k[1]==0 && k[2]==0 && tipologia_giocata==0 && check==0){
   			k[1]=0;
			fondo_cassa=fondo_cassa+puntata;
			puntata=1;
			tipologia_giocata=0;	
			check=1;	
		}else if(k[0]==1 && k[1]==1 && k[2]==0 && tipologia_giocata==0 && check==0){
   			k[0]=0;
			k[1]=0;
			fondo_cassa=fondo_cassa+puntata;
			puntata=1;
			tipologia_giocata=0;
			check=1;
		}		
	
	}






if(fondo_cassa<=0){
printf("\n giocate %lli \n",i);
break;
}
printf("\n FONDO CASSA %lli\n",fondo_cassa);
i++;

/*
int TEST;
scanf("%d",&TEST);
*/
}




printf("\n FONDO CASSA finale %lli\n",fondo_cassa);
}























