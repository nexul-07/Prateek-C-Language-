#include <stdio.h>

int main(){
int i=0;
char word[50];
printf("Enter a word: ");
scanf("%s",word);
while(word[i]!='\0')
{
    if(word[i]>='A' && word[i]<='Z')
    {
        printf("This is in UpperCase: %c \n",word[i]);
    }
    else if(word[i]>='a' && word[i]<='z')
    {
        printf("This is in LowerCase: %c \n",word[i]);
    }
    else{
printf("Invalid !!: %c \n");
    }
    i++;
}
    return 0;
}