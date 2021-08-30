#include<stdio.h>
int flcm(int a, int b)  
{
    
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        flcm(a,b);
        return temp;
    }
}

int main()
{

    int a, b, lcm;
    printf("Enter First number:");
	scanf("%d",&a);
	printf("Enter Second Number ");
	scanf("%d",&b);
	lcm = flcm(a,b);    
    printf("\n LCM of %d and %d is: %d ", a, b, lcm);
    return 0;
}


