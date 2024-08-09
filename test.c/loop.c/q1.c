//prime number sum.
#include<stdio.h>
int main()
{
int s=0,i,j,p,n;
printf("enter the number n");
scanf("%d",&n);
for(int i=0; i<=n; i++)
{
	p=0;
	for(int j=1; j<=i; j++)
	{
		if(i%j==0)
		{
			p=p+1;
		}
	}
	if(p==2)
	{
		s=s+i;
	}
	
}
printf("%d",s);
return 0;
}
/*
 int s = 0, i, j, p, n;

    printf("Enter the number n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        p = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                p++;
            }
        }
        if (p == 2) {
            s += i;
        }
    }

    printf("Sum of prime numbers up to %d: %d\n", n, s);
    
    return 0;
}
*/
