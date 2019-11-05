#include <stdio.h>

main (){
float a, b, c, d, e, f;

printf("Quatro cálculos básicos");
printf("\nDigite dois números: ");
scanf("%f %f", &a, &b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
printf("%.0f+%.0f=%.0f", a, b, c);
printf("\n%.0f-%.0f=%.0f", a, b, d);
printf("\n%.0f*%.0f=%.0f", a, b, e);
printf("\n%.0f/%.0f=%.2f", a, b, f);
}
