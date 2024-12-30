#include <stdio.h>

int UCLN(int a, int b) {
    if (b == 0)
        return a;
    return UCLN(b, a % b );
}

int main() {
    int a,b;
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    printf("UCLN cua %d va %d la: %d\n",a,b,UCLN(a,b));
    
    return 0;
}
