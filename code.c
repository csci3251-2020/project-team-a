/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Your C code here
# include<stdio.h>

int main()
{
    int x;
  printf("Hello World!\n");
  while(1)
  {
      printf("Please input a number(0-9):");
      scanf("%d", &x);
      if(x<0 || x>9)
      {
        printf("invalid number! Please enter again.\n");
        continue;
      }
      break;
  }
  if(x==0)
    printf("%d is 0000 in binary", x);
  else if(x==1)
    printf("%d is 0001 in binary", x);
  else if(x==2)
    printf("%d is 0010 in binary", x);
  else if(x==3)
    printf("%d is 0011 in binary", x);
  else if(x==4)
    printf("%d is 0100 in binary", x);
  else if(x==5)
    printf("%d is 0101 in binary", x);
  else if(x==6)
    printf("%d is 0110 in binary", x);
  else if(x==7)
    printf("%d is 0111 in binary", x);
  else if(x==8)
    printf("%d is 1000 in binary", x);
  else if(x==9)
    printf("%d is 1001 in binary", x);
  return 0;
}
gcc code.c -o code; ./code
