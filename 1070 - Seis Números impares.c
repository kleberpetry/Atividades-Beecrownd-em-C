#include<stdio.h>

main(){
	int x,y=1;
	scanf("%d",&x);
	while(y<=6){
		if((x%2)==1){
			printf("%d\n",x);
			y++;
			x++;
		}
	}
	return 0;
}
