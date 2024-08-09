// the grades in a certain class are determined by coursework and written examination both components of the assessment carry a maximum of 50 points.1) a students must score a total of 45 or more in order to pass  2) a total grade of 44 is moderated to 45 3) each component must be passed with a minimum of 20 pint  4) if a studnt score 45 or more but does not achieve the minimum grade in one component he is give a technical fail of 44 which is not modrerated tp 45   print whetther student has  passed  or faoled and also the score total.
#include <stdio.h>
int main()
{
int cm, wm,t;
printf("enter the number cm wm");
scanf("%d %d",&cm,&wm);
t=cm+wm;
if(t>45){
if(cm>20){
if(wm>20){
printf("pass");
}
else {
printf("fail");
}
}
}
else if(t==44){
t=45;
printf("moder");
}
else if(t>45 && cm<20)
{
printf("technical fail");
}
else{
printf("fail");
}
return 0;
}

 
