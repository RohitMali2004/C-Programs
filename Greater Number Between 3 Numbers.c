#include <stdio.h>
int main()

{

  int a, b,c ;

  printf("Enter the value of a = ");
  scanf("%d",&a);

  printf("Enter the value of b = \n");
  scanf("%d",&b);

  printf("Enter the value of c = \n");
  scanf("%d",&c);

  if(a>b && a>c)
    {
     printf("Greater Number=%d\n",a);
    }
    else if(b>a && b>c)
    {
      printf("Greater Number=%d\n",b);
    }
    else if(c>b && c>a )
    {
     printf("Greater Number=%d\n",c);
    } else
     return 0 ;

}
    output :
        Enter the value of a = 78
Enter the value of b =
97
Enter the value of c =
67
Greater Number=97

Process returned 0 (0x0)   execution time : 11.923 s
Press any key to continue.
