#include <stdio.h>
int main()
{
	float length,height;
	printf("Nhap chieu dai va chieu rong cua hinh chu nhat:");
	scanf("%f %f",&length,&height);
	float area = length*height;
	float perimeter = (length + height)*2;
	printf("Dien tich: %.1f va chu vi: %.1f",area,perimeter);
}