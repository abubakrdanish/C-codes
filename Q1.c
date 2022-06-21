# C-codes
#include<stdio.h>
int main(){
	int d,m,y,diff,s;
	char nm;
	printf("Enter Day of first dose of vaccination: ");
	scanf("%i",&d);
	printf("Enter month of first dose of vaccinaton: ");
	scanf("%i",&m);
	printf("Enter Year of first dose of vaccination: ");
	scanf("%i",&y);
	printf("Enter Vaccination Name: ");
	scanf(" %c",&nm);
	
	if((m<0) || (m>12) || (d<0) || (d>31)){
		printf("\nInvalid Dates");
	}
	else{
		switch(nm){
			case 'F':
				diff=24;
				break;
			case 'M':
				diff=25;
				break;
			case 'S':
				diff=15;
				break;
			case 'V':
				diff=18;
				break;
			case 'P':
				diff=21;
				break;
			case 'A':
				diff=0;
				break;
			default:
				printf("Enter Correct Name: ");
				break;
										
		}
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 ||m==12){
			s=diff+d;
			if(s>31){
				d=s-31;
				
				if(m==12){
					y=y+1;
					m=0;
				}
				m=m+1;
			}
			
		}
		if(m==4 || m==6 || m==9 || m==11){
			s=diff+d;
			if(s>30){
				d=s-30;
				m=m+1;	
			}
		}
		if(m==2){
			s=diff+d;
			if(s>28){
				d=s-28;
				m=m+1;
			}
		}
	}
	printf("Please recieve the second dose of vaccination after ""%d/%d/%d"" from any nearby vaccination center.",d,m,y);
	
} 
