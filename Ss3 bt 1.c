#include <stdio.h>
int main(){
	float r;
	float PI=3.14;
	printf ("nhap ban kinh: ");
	scanf ("%f",&r);
	float area= r*r*PI ;
	float perimeter= r*2*PI ;
	printf ("dien tich hinh tron la:%.2f\n",area);
	printf ("chu vi hinh tron la:%.2f",perimeter);
}