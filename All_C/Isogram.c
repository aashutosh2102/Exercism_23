#include<stdio.h>
#include <stdbool.h>
#include<string.h>

/*
// A double loop aproach
bool isogram(const char *str)
{
    //return true;
    int i,j,len;
    len = strlen(str);
    if(len == 1 || str[0] == '\0')
    {
        return true;
    }
    if(str == NULL)
    {
        return false;
    }
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(str[i]=="-" || str[i]==" ") continue;
            if(str[j]=="-" || str[j]==" ") continue;
            if(str[i] == str[j])
            {
                if(str[i] == "-")
                {
                    continue;
                }
                if(str[i] == " ")
                {
                    continue;
                }
                return false;
            }
            if((str[j] - str[i] == -32) || (str[j] - str[i] == 32))
            {
                return false;
            }
        }
    }
    return true;
}
*/

bool isogram(const char str[])
{
    //return true;
    int len,i,j;
    char cChar;
    int count[26] = {0};
    len = strlen(str);
    // Edge Cases from here
    if(!str)
    {
        return false; //If no string found.
    }
    if(strlen(str)==1)
    {
        return true;
    }
    // Edge cases till here
    for(i=0;i<len;i++)
    {
        cChar = str[i] >= 'A' && str[i] <= 'Z' ? str[i] + 32 : str[i]; // Converting the string to lowercase
        if(cChar >= 'a' && cChar <= 'z')
        {
            if(count[cChar - 'a'] > 0)
            {
                return false;
            }
            count[cChar-'a']++;
        }
    }
    return true;
}


int main()
{
    char str[100];
    printf("Provide the String >_<\n");
    scanf("%[^\n]",str);
    if(isogram(str))
    {
        printf("Yes, it's an Isogram");
    }
    else
    {
        printf("No, it's not an Isogram");
    }
    printf("\nThe length is %d",strlen(str));
}

