#include <stdio.h>
int main()
{
	int number1;
	int number2;
	int number3;
	printf("nhap so t1:");
	scanf("%d",&number1);
	printf("nhap so t2:");
	scanf("%d",&number2);
	printf("nhap so t3:");
	scanf("%d",&number3);
	int max = number1;
	int min = number1;
	if(max < number2){
	max = number2;}
	if(max < number3){
	max = number3;}
	if(min > number2){
	min = number2;}
	if(min > number3){
	min = number3;}
	printf("Max =:%d\n",max);
	printf("Min =:%d",min);
}