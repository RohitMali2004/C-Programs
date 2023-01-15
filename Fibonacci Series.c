#include <stdio.h>
int main()

{
   int a=0 , b=1, n ,c , i ;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)             // 0 1 1 2 3 5 8 13
    {
        printf("%d\n",a);         // (0)  c=1 then a=1 then b=1 . S2  (1)  a=1 ,b=1 c=2 then a=1 b=2  S3 (1) a=1 ,b=2 c=3 then a=2 , b=3
                                  //   S4 (2) a=2 b=3 c=5 then a=3 b=5 S5 (3) a=3 b=5 c=8 then a=5 b=8 .
        c=a+b;
        a=b;
        b=c;
    }

    return 0;




}
