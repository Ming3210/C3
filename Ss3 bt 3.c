#include <stdio.h>
int main()
{
	float toan;
	float van;
	float anh;
	printf("Nhap diem toan:");
	scanf("%f",&toan);
	printf("nhap diem van:");
	scanf("%f",&van);
	printf("nhap diem anh:");
	scanf("%f",&anh);
	float tong = toan + van + anh;
	float average = tong/3;
	printf("tong 3 mon la:%.2f",tong);
	printf("trung binh 3 mon la:%2.f",average);
}