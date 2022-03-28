//Md. Injamul Haque
//BSc in CSE, DIU
#include <stdio.h>
int main()
{
    int n=5, c, d, swap;
    long long int array[n];
    for (c = 0; c < n; c++)
    {
        scanf("%lld", &array[c]);

    }

    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
            {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            }
        }
    }

    long long int min,max;
    min=array[0]+array[1]+array[2]+array[3];
    max=array[4]+array[3]+array[2]+array[1];
    printf("%lld %lld\n",min,max);



    return 0;
}
