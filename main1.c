#include <stdio.h>

int main() {

    float x, y;
    
    printf("Введите координату x: ");

    scanf("%f",&x);

    printf("Введите координату y: ");

    scanf("%f",&y);

    printf("x=%f; y=%f\n",x,y);

    if ((y*y<=1) && (x*x<=1) && (x*x+y*y>=1))

        printf("Точка попадает в область\n");

    else printf("Точка не попадает в область\n");

    return 0;

}
