//Byte Destuffing
#include<stdio.h>
#include<string.h>


int main(){
    char bit[50];
    char stuff[50];
    int count=0;
    int i=0,j=0;

    printf("Input Data: ");
    scanf("%s",bit);

    for(i=0;i<strlen(bit);i++){
        if(bit[i]=='#' || bit[i]=='$')
            stuff[i++]='#';
        stuff[j++]=bit[i];
    }

    stuff[j]='\0';
    printf("Byte Array : ");
    printf("%s\r\n",bit);

    printf("Stuffed Array: ");
    printf("%s\r\n",stuff);

    return 0;
}