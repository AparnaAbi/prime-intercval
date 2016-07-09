# prime-intercval
#include <stdio.h>
int main()
{
    int a, b, i, flag=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (a < b)
    {
         for(i=2; i<=n1/2; ++i)
        {
            if(a%i == 0)
            {
                flag=1;
                break;
            }
        }
            if (flag == 0)
            printf("%d ",a);
            ++a;
    }
}
