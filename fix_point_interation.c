#include<stdio.h>
#include<math.h>

#define f(x) pow(x,3)+pow(x,2)-1
#define g(x) (1/sqrt(x+1))

int main()
{
    float x0, x1, e=0.0001;
    printf("enter the initial guess:   ");
    scanf("%f",&x0);
    int step = 1;

    do
    {
        x1 = g(x0);
        step += 1;
        x0 = x1;
    }
    while(fabs(f(x1))>e);

    printf("the final root is: %f ",x1);
    return 0;
}