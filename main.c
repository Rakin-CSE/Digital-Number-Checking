#include <stdio.h>
#include <stdlib.h>3
#include<math.h>
//Prime Number
void prime (int a)
{
    int f=0,d;
    for(d=2;d<=a/2;d++)
    {
        if(a%d==0)
        {
            f++;
            break;
        }
    }
       if(f==0)
       {
        printf("%d is a Prime Number\n",a);
       }
       else
       {
        printf("%d is not a Prime Number\n",a);

       }
}
//Armstrong Number
void arm(int a)
{
    int r,sum=0,power,temp;
    temp=a;
    while (temp!= 0)
    {
        r=temp % 10;
        power =r*r*r;
        sum=sum + power;
        temp=temp/ 10;
    }
    if (sum==a)
    {
       printf("%d is a Armstrong Number\n",a);
    }
    else
    {
       printf("%d is not a Armstrong Number\n",a);
    }
}
//Strong Number
#include<stdio.h>
void strong (int a)
{
    int r,sum=0,t,f,i;
    for(i=a;i!=0;i=i/10)
    {
        r=i%10;
        f=1;
    for(t=1;t<=r;t++)
    {
        f=f*t;
    }
     sum=sum+f;
    }
    if(sum==a)
    {
        printf("%d is a Strong Number\n",a);
    }
    else
    {
        printf("%d is not a Strong Number\n",a);
    }
}
//Duck Number
void duck (int n)
{
    int i,f=0,r;
    for(i=n;i!=0;i=i/10)
    {
        r=i%10;
        if(r==0)
        {
            f++;
            break;
        }
    }
    if(f==1)
    {
        printf("%d is a Duck Number\n",n);
    }
    else
    {
        printf("%d is not a Duck Number\n",n);
    }
}
//Magic Number
void magic (int n)
{
    int r,sum=0,r1,sum1=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    while(sum>0)
    {
        r1=sum%10;
        sum1=sum1+r1;
        sum=sum/10;
    }
    if(sum1==1)
    {
        printf("%d is a Magic Number\n",n);
    }
    else
    {
        printf("%d is Not a Magic Number\n",n);
    }
}
//Sunny Number
void sunny (int x)
{
    float r;
    r=sqrt(x+1);
    if((int)(r)==r)
    {
        printf("%d is a Sunny Number\n",x);
    }
    else
    {
        printf("%d is a Not Sunny Number\n",x);
    }
}
//Adam Number
void adam (int a)
{
  int d,i,r,m,z,sum=0,sum1=0,r1;
  d=a*a;
  for(i=a;i!=0;i=i/10)
  {
      r=i%10;
      sum=sum*10+r;
  }
  m=sum*sum;
  for(z=m;z!=0;z=z/10)
  {
      r1=z%10;
      sum1=sum1*10+r1;
  }
  if(sum1==d)
  {
      printf("%d is a Adam Number\n",a);
  }
  else
  {
    printf("%d is not a Adam Number\n",a);
  }
}
//Automorphic Number
void automorphic(int n)
{
    int c,f=0;
    c=n*n;
    while(n>0)
    {
        if(n%10!=c%10)
        {
            f++;
            break;
        }
        n=n/10;
        c=c/10;
    }
    if(f==0)
    {
        printf("Automorphic Number\n");
    }
    else
    {
        printf("Not Automorphic Number\n");
    }
}
//Palindrome Number
void palindrome (int n)
{
  int i,r,sum=0;

  for(i=n;i!=0;i=i/10)
  {
      r=i%10;
      sum=sum*10+r;
  }
  if(sum==n)
  {
      printf("%d is a Palindrome Number\n",n);
  }
  else
  {
      printf("%d is Not a Palindrome Number\n",n);
  }
}
//strange Number
void strange (int n)
{
    int i,c,rem,div,f=0;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            rem=n%10;
            for(c=2;c<=rem-1;c++)
            {
                if(rem%c==0)
                {
                    f++;
                    break;
                }
            }
        }
    }
    if(f==0)
    {
        printf("%d is a strange number\n",n);
    }
    else
    {
        printf("%d is not a strange Number\n",n);
    }
}
int main()
{

    printf("\t\t\t\t\tWelcome to the Number Checker Machine\n");
    printf("\t\t\t\t\t-------------------------------------\n");
    printf("\n");
    printf("\n");
    int num,c;
    MENU:
    printf("Enter a number you want to check:\n");
    scanf("%d",&num);
    printf("\n");
    printf("\t\t\t\t\tPress 1 for checking Prime Number\n");
    printf("\t\t\t\t\tPress 2 for checking Armstrong Number\n");
    printf("\t\t\t\t\tPress 3 for checking Strong Number\n");
    printf("\t\t\t\t\tPress 4 for checking Duck Number\n");
    printf("\t\t\t\t\tPress 5 for checking Magic Number\n");
    printf("\t\t\t\t\tPress 6 for checking Sunny Number\n");
    printf("\t\t\t\t\tPress 7 for checking Adam Number\n");
    printf("\t\t\t\t\tPress 8 for checking Automorphic Number\n");
    printf("\t\t\t\t\tPress 9 for checking Palindrome Number\n");
    printf("\t\t\t\t\tPress 10 for checking Strange Number\n");
    RAKIN:
    printf("Enter any case you like:\n");
    scanf("%d",&c);
    switch(c)
    {

           case 1:
           prime(num);
           break;
           case 2:
           arm(num);
           break;
           case 3:
           strong(num);
           break;
           case 4:
           duck(num);
           break;
           case 5:
           magic(num);
           break;
           case 6:
           sunny(num);
           break;
           case 7:
           adam(num);
           break;
           case 8:
           automorphic(num);
           break;
           case 9:
           palindrome(num);
           break;
           case 10:
           strange(num);
           break;
           case 0:
            goto MENU;
           default:
           {
             printf("Invalid Number!!!");
           }

    }
    goto RAKIN;
    return 0;
}


