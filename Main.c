#include <stdio.h>

struct prescription{
	int invoice_number;
	char customer_name[30];
	int customer_ph_number;
	char ref_doctor_name[30];
	char med1[30];int quantity1;int price1;
	char med2[30];int quantity2;int price2;
	char med3[30];int quantity3;int price3;
	char med4[30];int quantity4;int price4;
	char med5[30];int quantity5;int price5;
	char med6[30];int quantity6;int price6;
	char med7[30];int quantity7;int price7;
	char med8[30];int quantity8;int price8;
	char med9[30];int quantity9;int price9;
	char med10[30];int quantity10;int price10;
};

typedef struct prescription pres;

pres *head, *temp, *curr;
invoice = 10001;

int main()
{
	int chc;
	while(1){
		printf("                        ::Welcome to ABC Med Store::\n\n");
		system("CLS");
		printf("1.Entry\n2.See\n3.Exit\nEnter your choice : ");scanf("%d",&chc);
		
		break;
	}
	return 0;
}
