#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		
		for(j=0;j<n-i;j++)
		{
			printf("%d",n-j);
		}
			printf("\n");
		}
}

/*
5
54321
5432
543
54
5
*/
