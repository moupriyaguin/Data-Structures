#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    printf("Enter some lines:\n");
    scanf("%[^\n]s",a);

    int length = strlen(a);
    
    int word=0,lines=0,characters=0;

    
    for(int i=0;i<=length;i++)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            word++;
        }
        else if(a[i]=='.')
        {
            lines++;
        }
        else if(a[i]!=' '||a[i]!='.'||a[i]!='\0')
        {
            characters++;
        }
    }
    printf("Number of :\n");
    printf("Words = %d\nLines = %d\nCharacters = %d",word,lines,characters);
    return 0;
}