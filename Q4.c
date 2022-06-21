#include<stdio.h>
int main(){
	int c;
	char f,jf,z,zf,a,af,m,mf,i,i_f;
	printf("Have you offered Fajr Prayer: \n");
	scanf(" %c",&f);
	if(f=='N'){
		printf("Salah is better than sleep \n");
		
	}
	else{
	
	printf("Was the Fajr Offered with Jammat: \n");
	scanf(" %c",&jf);
	if(jf=='N'){
		printf("Jammat enhances the darajat of Salah by 27 times.\n");
	}
	else{
		c=c+1;
	}
	}
	printf("Have you offered Zuhar Prayer: \n");
	scanf(" %c",&z);
	if(f=='N'){
		printf("Prayer is the pillar of the religion; he who abandons it demolishes his religion\n");
		
		
	}
	else{
	
	printf("Was the Zuhar Offered with Jammat: \n");
	scanf(" %c",&zf);
	if(jf=='N'){
		printf("Jammat enhances the darajat of Salah by 27 times.\n");
	}
	else{
		c=c+1;
	}
	}
	printf("Have you offered Asar Prayer: \n");
	scanf(" %c",&a);
	if(a=='N'){
		printf("Prayer is the pillar of the religion; he who abandons it demolishes his religion\n");
		
		
	}
	else{
	
	printf("Was the Asr Offered with Jammat: \n");
	scanf(" %c",&af);
	if(af=='N'){
		printf("Jammat enhances the darajat of Salah by 27 times.\n");
	}
	else{
		c=c+1;
	}
	}
	printf("Have you offered Maghrib Prayer: \n");
	scanf(" %c",&m);
	if(m=='N'){
		printf("Prayer is the pillar of the religion; he who abandons it demolishes his religion\n");
		
		
	}
	else{
	
	printf("Was the Maghrib Offered with Jammat: \n");
	scanf(" %c",&mf);
	if(mf=='N'){
		printf("Jammat enhances the darajat of Salah by 27 times.\n");
	}
	else{
		c=c+1;
	}
	}
	printf("Have you offered Isha Prayer: \n");
	scanf(" %c",&i);
	if(i=='N'){
		printf("Prayer is the pillar of the religion; he who abandons it demolishes his religion\n");
		
		
	}
	else{
	
	printf("Was the Isha Offered with Jammat: \n");
	scanf(" %c",&i_f);
	if(i_f=='N'){
		printf("Jammat enhances the darajat of Salah by 27 times.\n");
	}
	else{
		c=c+1;
	}
	}
	if(c==5){
		printf("Alhamdulillah, You had a blessed day.\n");	
	}

}
