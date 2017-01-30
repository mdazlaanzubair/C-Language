# include <stdio.h>
void main(){
	float i,v,r;
	system("cls");
	printf("Enter Current: ");
	scanf("%f",&i);
	printf("Enter Resistance: ");
	scanf("%f",&r);
	v = i * r;
	printf("The Voltage is: %f",v);
	getch();
}