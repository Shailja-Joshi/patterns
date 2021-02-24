#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		for(j=1;j<=n-i;j++)
		{
			printf("%d",j);
		}
			printf("\n");
		}
}

/*
5
12345
1234
123
12
1

*/
