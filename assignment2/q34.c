//a teacher has divided her classroom into group of 5 based on their roll number the last roll number of each group has been elected as the leader of the group who will manage the tasks performed by the group writea program for the teacher to enter the roll number of the student and check if he she is a group leader or not.
#include<stdio.h>
int main()
{
int no;
printf("enter the number no");
scanf("%d",&no);
if(no%10==0)
{
	printf("she is group leader");
}
else 
{
	printf("she is not group leader");
}
return 0;
}

