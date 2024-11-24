#include <stdio.h>

void muda_valor_a(double param){
    param = 99;
    printf("A=%lf\n", param);
}
void muda_valor_b(double *param){
    param = 99;
    printf("B=%lf\n", *param);
}

int main() {
    double n = 507;
    printf("%lf\n", n);
    muda_valor_a(n);
    printf("%lf\n", n);
    muda_valor_b(&n);
    printf("%lf\n", n);
    return 0;
}