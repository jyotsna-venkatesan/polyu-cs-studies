#include "stdio.h"
#include "limits.h"
#include "float.h"

int main()
{
    int x;
    float f;
    double d;

    printf("Q1: x == (int)(float)x ?\n");
    x = INT_MAX;
    printf("x = %d\n(float)x = %f\n(int)(float)x = %d\n\n", x, (float)x, (int)(float)x);
    // rounding occurs, overflow occurs
    // answer: NO

    getchar();    

    printf("Q2: x == (int)(double)x ?\n");
    x = INT_MAX;
    printf("x = %d\n(int)(double)x = %d\n\n", x, (int)(double)x);
    x = INT_MIN;
    printf("x = %d\n(int)(double)x = %d\n\n", x, (int)(double)x);
    // answer: YES

    getchar();    

    printf("Q3: f == (float)(double)f ?\n");
    f = FLT_MAX;
    printf("f = %.23f\n(float)(double)f = %f\n\n", f, (float)(double)f);
    // answer: YES

    getchar();    

    printf("Q4: d == (float)d ?\n");
    d = DBL_MAX;
    printf("d = %f\n(float)d = %f\nd == (float)d ? %d\n\n", d, (float)d, (d == (float)d));
    // answer: NO, overflow problem

    getchar();    

    printf("Q5: f == -(-f) ?\n");
    f = FLT_MAX;
    printf("f = %f\n-(-f) = %f\nf == -(-f) ? %d\n\n", f, -(-f), (f == -(-f)));
    f = -FLT_MAX;
    printf("f = %f\n-(-f) = %f\nf == -(-f) ? %d\n\n", f, -(-f), (f == -(-f)));
    // answer: YES

    getchar();    

    printf("Q6: d < 0.0 --> (d*2) < 0.0 ?\n");
    d = -DBL_MAX;
    printf("d = %f\td < 0.0?  %d\n", d, (d < 0.0));
    printf("d*2 = %f\t d*2 < 0.0?  %d\n\n", d*2, (d*2 < 0.0));
    // answer: YES

    getchar();    
    
    printf("Q7: d * d >= 0.0 ?\n");
    d = -DBL_MAX;
    printf("d = %f\nd*d = %f\nd*d >= 0 ? %d\n\n", d, (d*d), ((d * d) >= 0));
    // answer: YES

    return 0;
}