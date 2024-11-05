#include<stdio.h>
#include<math.h>
int prime_checker(int x)
{
    int c = 0;
    for(int i = 2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            c = c+1;
            return c;
            break;
        }
       
    }
    return c;

}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);

    int checker = prime_checker(n);
    (checker==1)? printf("Not prime"):printf("prime");
    return 0;
}