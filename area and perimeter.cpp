#include<stdio.h>
int main ()
{
	int r,a,b;
	float pie,ar1,per1,ar2,per2;
	printf("enter radius");
	scanf("%d",&r);
	printf("enter values of a,b");
	scanf("%d%d",&a,&b);
	pie=3.14;
	ar1=pie*r*r;
	per1=2*pie*r*r;
	printf("area of circle is %d",ar1);
	printf("perimeter of circle is %d",per1);
	ar2=a*b;
	per2=2*(a+b);
	printf("area of rectangle is %d ",ar2);
	printf("perimeter of rectangle is %d",per2);
	printf("over");
	return 0;
}
