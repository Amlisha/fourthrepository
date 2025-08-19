#include<stdio.h>
#include<string.h>

int main()
{

    char bit[50],destuff[50];
    int i=0,j=0,count=0;

    printf("Enter the bit sequence");
    scanf("%s",bit);
    //for loop to check the bits
    for(i=0;i<strlen(bit);i++){
        if(bit[i]=='0')
            count=0;
        else if(bit[i]=='1')
            count++;
        destuff[j++]=bit[i];

        if(count==5){
            destuff[i++]='1';
            count=0;
        }

    }
    destuff[j]='\0';
    printf("The bit array is:");
    printf("%s\r\n",bit);
    printf("The destuffed bit array is:");
    printf("%s\r\n",destuff);

    return 0;


}