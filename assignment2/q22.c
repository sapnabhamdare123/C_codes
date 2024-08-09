//a student will not be allowed to sit in an exam  his her attendence is less than 75 take following input from the user number of classes held number of classes attended and print percentage of class attended is the student allowed to sit in the exam or not.
#include<stdio.h>
int main()
{
int ch,ca,p;
printf("enter the number ch,ca");
scanf("%d %d",&ch,&ca);
p=ca/ch*100;
if(p>75)
{
	printf("allowo to sit in exam");
}
else
{
	printf("not allowo to sit in exam");
}
return 0;
}


		
		

