//Laouali Ousmane Bachir
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{


    if(argc==2)
    {
        int k=atoi(argv[1]);
          string p = get_string("write your text or message:");
if(k<=0){
    printf("invalid\n");
    return 0;
}
    for(int i=0;i<strlen(p);i++)
    {
        if(isalpha(p[i])){
            if(isupper(p[i])){
            printf("%c",(((p[i]-65)+ k)%26)+65);

        }
        if(islower(p[i]))
        {
            printf("%c",(((p[i]-97)+k)%26) +97);
        }
}
    else
    {
        printf("%c",p[i]);
    }
    }
    }
    else{
        printf("is not valid");
        return 0;
    }

}
