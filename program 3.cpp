#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=0;k<n-i-1;k++){
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			printf("%d",j+1);
		}
			printf("\n");
		}
}

/*
5
    1
   12
  123
 1234
12345

*/
