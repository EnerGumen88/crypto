/** \file key.c
 * \brief Function for compute private key in challenge
 * \author CARON Frédéric
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,k,i,j,v;
	//Get n
	printf("Entrer la valeur de n : ");
	scanf("%d",&n);
	//Get k the number of bits
	printf("Entrer la valeur de k : ");
	scanf("%d",&k);
	
	//Go for each part of private key
	for (i=0;i<k;i++){
		//Get part of public key
		printf("Entrer la valeur de de v%d : ",i+1);
		scanf("%d",&v);
		//Let's go
		for (j=0;j<n;j++){
			if (((j*j*v)%n) == 1)
				printf("Valeur de s%d : %d\n",i+1,j);
		}	
	}
	
	return 0;
}
