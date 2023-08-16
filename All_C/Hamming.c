/*
Calculate the Hamming Distance between two DNA strands.

Your body is made up of cells that contain DNA. Those cells regularly wear out and need replacing, which they achieve by dividing into daughter cells. In fact, the average human body experiences about 10 quadrillion cell divisions in a lifetime!

When cells divide, their DNA replicates too. Sometimes during this process mistakes happen and single pieces of DNA get encoded with the incorrect information. If we compare two strands of DNA and count the differences between them we can see how many mistakes occurred. This is known as the "Hamming Distance".

We read DNA using the letters C,A,G and T. Two strands might look like this:

GAGCCTACTAACGGGAT
CATCGTAATGACGGCCT
^ ^ ^  ^ ^    ^^

They have 7 differences, and therefore the Hamming Distance is 7.

The Hamming Distance is useful for lots of things in science, not just biology, so it's a nice phrase to be familiar with :)
*/

#include<stdio.h>
#include <stdbool.h>
#include<string.h>

int hamming(const char *str1, const char *str2) // Solution 1
{
    int count = 0;
    if(!str1 || !str2)
    {
        return -1;
    }
    for(; *str1 && *str2; str1++, str2++)
    {
        if(*str1 != *str2)
        {
            count++;
        }
    }
    return (*str1 || *str2) ? -1 : count;
}

int main()
{
    int answer;
    char str1[100], str2[100];
    printf("Provide the String 1 >_<\n");
    scanf(" %[^\n]",str1);
    printf("Provide the String 2 >_<\n");
    scanf(" %[^\n]",str2);
    answer = hamming(str1, str2);
    printf("The Hamming Distance is %d",answer);
}
