#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,k,i,j,v;
	printf("Entrer la valeur de n : ");
	scanf("%d",&n);
	printf("\nEntrer la valeur de k : ");
	scanf("%d",&k);
	
	for (i=0;i<k;i++){
		printf("\nEntrer la valeur de de v%d : ",i+1);
		scanf("%d",&v);
		for (j=0;j<n;j++){
			if (((j*j*v)%n) == 1)
				printf("\nValeur de s%d : %d",i+1,j);
		}	
	}
	
	return 0;
}
