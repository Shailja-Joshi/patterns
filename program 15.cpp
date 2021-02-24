#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	int a=n;
	for(i=1;i<=n;i++){
		for(k=i;k<n;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>0;j--)
		{
			printf("%d",j);
		}
			printf("\n");
		}
	int b=n-2;	
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<a;j++)
		{
			printf("%d",j);
		}
		a--;
		for(k=b;k>0;k--)
		{
			printf("%d",k);
		}
		b--;
			printf("\n");
		}
		return 0;	
}

/*
5
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1
*/
