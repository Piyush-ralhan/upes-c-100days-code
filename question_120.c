// Q120: Write a program to take a string input. Change it to sentence case.

#include<stdio.h>

int main()
{
    char str[100];
    int i=0;

    printf("Enter the string:");
    fgets(str,100,stdin);

    while(str[i] != '\0')
    {
        if(i==0)
        {
            if(str[i]>=97 && str[i]<=122)
            {
                printf("%c",str[i]-32);
            }
            else 
            {
                printf("%c",str[i]);
            }
        }
        else if(str[i-1] == ' ' )
        {
            if(str[i]>=97 && str[i]<=122)
            {
                printf("%c",str[i]-32);
            }
            else 
            {
                printf("%c",str[i]);
            }
        }
        else 
        {
            printf("%c",str[i]);
        }
        i++;
    }

    return 0;
}

