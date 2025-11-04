//Q25.Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    int a,b,result;
    char OP;
    printf("Enter Numbers :");
    scanf("%d %d",&a, &b);
    printf("Enter OP:+, -, *, /, %%");
    scanf(" %c",&OP);
    switch (OP)
    {
    case '+':
            result = a + b;
            printf("result:%d \n",result);
        break;
    case '-':
            result = a -b ;
            printf("result:%d \n",result);
        break;
    case '*':
             result = a * b;
             printf("result:%d \n",result);
             break;
    case '/' :
            if(b!=0){
                result= a/b;
                printf("result:%d \n",result);
            }else{
                printf("error");
            }
            break;

    case  '%':
            if(b!=0){
                result= a%b;
                printf("result:%d \n",result);
            }else{
                printf("error");
            }
            break;
    
    default:
          printf("Invalid input");

    }
    return 0;
}