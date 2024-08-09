//construct a flowchahrt to calculate the percrntage obtained in the above question
#include <stdio.h>
int main()
{
float total,sum,per;
printf("Enter total marks and marks obtained ");
scanf("%f %f",&total,&sum);
per=sum/total*100;
printf("%f",per);
return 0;
}
