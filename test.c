#include <stdio.h>

int main(void){
	int pv;
	int attaque; //2
	pv = 100; //init
	printf("MONSTRE  :%d\n",pv );
	printf("\n");
	while (pv>0)
	{
		printf("Vous attaquez le monstre, il perd 15pv\n");
		pv -= 15;
		if (pv<=0){
			pv = 0;
			printf("MONSTRE  Pv : %d\n",pv );
		}
		else
		{
			printf("MONSTRE   Pv : %d\n",pv);
			printf("\n");
		}
	}	
	return 0;
	
}