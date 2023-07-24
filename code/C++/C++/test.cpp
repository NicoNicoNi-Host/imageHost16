#define PI 3.14159
void cycle(int r, double *c,double *s)//由半径r 求解圆周长c和面积s
{
    *c=2*PI*r;
    *s=PI*r*r;
}


