#include<stdio.h>

main(){
	int x,numero,positivo=0, negativo=0, impar=0, par=0;
	for(x=1;x<=5;x++){
		scanf("%d",&numero);
		if(numero>0){
			positivo++;
		}
		if(numero<0){
			negativo++;
		}
		if((numero%2)==0){
			par++;
		}else{
			impar++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",par,impar,positivo,negativo);
	return 0;
}
