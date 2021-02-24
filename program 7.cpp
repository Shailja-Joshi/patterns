#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=0;k<n-1-i;k++)
		{
			printf(" ");
		}
		
		for(j=i+1;j>0;j--)
		{
			printf("%d",j);
		}
			printf("\n");
		}
}

/*
5
    1
   21
  321
 4321
54321

*/
