#include<stdio.h>
void main()
{
    int n;

    scanf("%d",&n);

    n=n-1;
    if(n%2==0)
    {
    	printf("%d",n);
	}
	else
	{
		n=n+1;
		printf("%d",n);
	}

    return 0;

}
