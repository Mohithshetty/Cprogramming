#include<stdio.h>
void main()
{
    int n,r,rev=0,temp;
    printf("Enter the digit");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    printf("Reverse of the digit is %d",rev);
    if(temp==rev)
    printf("Given number is palindrome");
    else
    printf("Given number is not palindrome");
}
