#include <stdio.h>
#include <math.h>

int main() {

    float x = 5.7, y = 1.2;
    double r, t;


    if (x>y) r = cos(x + y*y);
    else r = log((x+y)/x-y);


    if (r<x) t = (x+r)/(cos(x-r));
    else if (r>x) t = fabs(x*x-r)/(1+sin(r));
    else t = sqrt(y-pow(r-x,1/3));
    printf("x = %f, y = %f, r = %lf, t = %lf", x,y,r,t);

    return 0;

}
