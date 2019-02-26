//Laouali Ousmane Bachir
#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int sum=0;
    //input creditcard
    long long creditcard;

    do
    {
       creditcard = get_long_long("type your creditcard number:");
    }
    while(creditcard<0);
    //verify the length
    int count=0;
    //count the number of digit
    long long number=creditcard;
    while(number>0)
    {
    number=number/10;
    count++;
    }
    //creditcard has between 13-15 depending on type.
    if (count==13 && count==15 && count==16)
    {
        printf("invalid card number\n");
    }
    //creditcard digit initialize
    //starting with the last number
    int digit [count];
    for(int i=0; i<count; i++)
    {
        digit[i]=creditcard%10;
        creditcard=creditcard/10;
    }
    //take the other digits
    int odigit[count];
    for (int i=0; i<count; i++)
    {
        odigit[i]=digit[i];
    }
    //multiply per2
    for(int i=0; i<count; i+=2)
    {
        digit[i]=digit[i]*2;
    }
    //cheksum
    //calcul all the digits
    for(int i=0; i<count; i++)
    {
        sum=sum+digit[i]%10+digit[i]/10%10;
    }

    if(sum%10==0)
    {
        //check the type of the card
        //visa
        if(count==16 &&odigit[14]==4 && sum%10==0)
        {
            printf("valid visa\n");
        }
        //amex
        if(count==15 && odigit[14]==3 && sum/10==0 && (odigit[13]==4 ||odigit[13]==7))
        {
            printf("valid amex\n");
        }
        //mastercard
        if(count==16 && odigit[15]==5 && (odigit[14]==1 || odigit[14]==2 || odigit[14]==3 || odigit[14]==4 || odigit[14]==5) && sum/10==0 )
        {
            printf("valid mastercard\n");
        }

        }
    }

}

