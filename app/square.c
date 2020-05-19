#include <stdio.h>
#include <math.h>
#include <myfunc.h>
struct sqr square (float a, float b, float c)
{
    struct sqr IXI = {0,0,0};
    float D = (b*b - 4*a*c);
    if (a != 0)
    {
        if(D > 0)
        {
            IXI.x1 = ( -1*b + sqrt(D) ) / (2 * a);
            IXI.x2 = ( -1*b - sqrt(D) ) / (2 * a);
            IXI.p = 1;
        } else if (D == 0)
        {
            IXI.x1 = (-1*b) / (2 * a);
            IXI.p = 0;
        } else
            IXI.p = -1;
    } else
        IXI.p = -2;

    return IXI;
}


    

