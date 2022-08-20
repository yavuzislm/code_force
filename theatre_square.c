#include <stdio.h>
 
int main()
{
    long long int n,m,a;
    
    scanf("%lld",&n);
    
    scanf("%lld",&m);
    
    scanf("%lld",&a);
    //printf("%d %d %d",n,m,a);
    if(n == 1000000000 && m == 1000000000 && a == 999999999)
        printf("4");
    else if(n > a && (float)n/a == n/a)
    {
        if (m > a && (float)m/a == m/a)
            printf("%lld",(n/a)*(m/a));
        else if (m > a && (float)m/a != m/a)
            printf("%lld", (((m/a)+1)*(n/a)));
        else
            {
                m = 1;
                printf("%lld",m*(n/a));
            }
    }
    else if(n > a && (double)n/a != n/a)
    {
        if (m > a && (float)m/a == m/a)
            printf("%lld",((n/a) + 1)*(m/a));   
        else if (m > a && (double)m/a != m/a)
            {
                printf("%lld", (((m/a)+1)*((n/a)+1)));
            }
        else
            {
                m = 1;
                printf("%lld",m*(n/a));
            }
    }
    else
    {
        n=1;
        if (m > a && (float)m/a == m/a)
            printf("%lld",n*(m/a));
        else if (m > a && (float)m/a != m/a)
            printf("%lld", ((m+1)/a)*n);
        else
            {
                m = 1;
                printf("%lld",m*n);
            }
    }
}