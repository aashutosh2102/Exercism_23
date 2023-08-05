#include "armstrong_numbers.h"
// #include<math.h>

bool is_armstrong_number(int candidate){
    int num,rem,ans=0,count=0,num2;
    num=candidate;    
    num2=candidate;
    while(num>0)
    {
        num = num/10;
        count++;
    }
    // count = countt(num);
    while(num2>0)
    {
        rem = num2%10;
        int val=1;
        for(int i=0;i<count;i++)
        {
            val *= rem;
        }
        ans = ans + val;
        num2 = num2/10;
    }
    if(ans==candidate)
    {
        return true;
    }
    else
    {
        return false;
    }
}





#ifndef ARMSTRONG_NUMBERS_H
#define ARMSTRONG_NUMBERS_H
#include <stdbool.h>
bool is_armstrong_number(int candidate);
#endif


/*
// My Code

#include<stdio.h>
int main()
{
    int i,cc=0,j;
}
*/