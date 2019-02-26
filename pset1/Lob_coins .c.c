//Laouali Ousmane Bachir
#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    int k=1;
    int i=0;
    int acount;
    do{
        acount=get_int("type acount :");
    }
    while(acount<0);

    while(acount>=a)
    {
        acount=acount-a;
        i++;
    }
    while(acount>=b)
    {
        acount=acount-b;
        i++;
    }
    while(acount>=c)
    {
        acount=acount-c;
        i++;
    }
    while(acount>=d)
    {
        acount=acount-d;
        i++;
    }
    while(acount>=e)
    {
        acount=acount-e;
        i++;
    }
    while(acount>=f)
    {
        acount=acount-f;
        i++;
    }
    while(acount>=g)
    {
        acount=acount-g;
        i++;
    }
    while(acount>=h)
    {
        acount=acount-h;
        i++;
    }
    while(acount>=k)
    {
        acount=acount-k;
        i++;
    }

    printf("Minimum coins is : %i \n",i);
}
