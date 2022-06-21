# C-codes
#include<stdio.h>
int main(){
	int num,a,b,c,d,e,s;
	printf("Enter A five digit number: ");
	scanf("%d",&num);
	if((num>10000)&&(num<99999)){
		
		
	
	a=num%10;
	b=(num%100)/10;
	c=(num%1000)/100;
	d=(num%10000)/1000;
	e=num/10000;
	
	s=a+b+c+d+e;
	printf("Sum = %d",s);
}
else{
	printf("Invalid Input");
}
}
