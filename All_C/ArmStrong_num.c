// My Code

#include<stdio.h>
int main()
{
    int num,cc=0,ans=0,n,r;
    printf("Enter the number \n");
    scanf("%d",&num);
    n=num;
    cc = countt(n);
    while(n>0)
    {
        //Main code to split the number and then make it to power() form
        r = n%10; // To get the number from End
        ans = ans+power(r,cc);
        n = n/10; // To get the next number from End
    }
    if(ans == num)
    {
        printf("Yes, %d is an Armstrong number",num);
    }
    else
    {
        printf("No, %d is not an Armstrong number",num);
    }

}
int countt(int n)
{
    int cc=0;
    while(n>0)
    {
        n = n/10;
        cc++;
    }
    return cc;
}
int power(int base, int expo)
{
    int val = 1;
    for(int i=0; i<expo; i++)
    {
        val = val*base;
    }
    return val;
}