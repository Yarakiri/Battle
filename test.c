#include <stdio.h>

int contre()
{
	int pv2;
	pv2 = 200;
		printf("Le monstre vous attaque, vous perdez 20pv\n");
		pv2 -= 20;
		if (pv2<=0)
		{
			pv2 = 0;
			printf("VOUS  Pv : %d\n",pv2 );
		}
		else
		{
			printf("VOUS   Pv : %d\n",pv2 );
			printf("\n");
		}
	return 0;
}

int attaque()
{
	int pv1;
	pv1 = 100;
		printf("Vous attaquez le monstre, il perd 15pv\n");
		pv1 -= 15;
		printf("%d\n",pv1 );
		if (pv1<=0)
		{
			pv1 = 0;
			printf("MONSTRE  Pv : %d\n",pv1 );
		}
		else
		{
			printf("MONSTRE   Pv : %d\n",pv1);
			printf("\n");
		}
	
	return 0;
}



int main(void){
	int pv1;
	int pv2;
	pv1 = 100;
	pv2 = 200;
	printf("MONSTRE  :%d            ",pv1 );
	printf("VOUS  :%d            ",pv2 );
	printf("\n");
	printf("\n");
	while (pv1 >= 0 && pv2 >= 0){
		attaque();
		contre();	
	}
	return 0;
	
}