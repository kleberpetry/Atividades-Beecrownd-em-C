#include <stdio.h>
 
int main() {
 
    int cod, horas;
    double valor, salario;
    scanf("%d %d %lf",&cod,&horas,&valor);
    salario=valor*horas;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",cod,salario);
 
    return 0;
}
