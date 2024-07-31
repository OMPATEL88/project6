#include<stdio.h>
main(){
	int i,j,y;
	y=11;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d ",y);
			y=y+1;
		}
		printf("\n");
	}
}
