#include<stdio.h>
int main(){
	int thousandDigit, hundredDigit, dozenDigit, unitDigit;
	printf("thousandDigit=");
	scanf("%d",&thousandDigit);
	printf("hundredDigit=");
	scanf("%d",&hundredDigit);
	printf("dozenDigit=");
	scanf("%d",&dozenDigit);
	printf("unitDigit=");
	scanf("%d",&unitDigit);
	int sum=thousandDigit+hundredDigit+dozenDigit+unitDigit;
	printf("sum=%d\n",sum);
	printf("Chuoi dao nguoc=%d%d%d%d",unitDigit,dozenDigit,hundredDigit,thousandDigit);
}