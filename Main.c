#include <stdio.h>
#include <string.h>


struct medicines{
	char med[30];
	int quantity;
	int price;
	struct medicines *ptr_m;
};

typedef struct medicines med;

struct prescription{
	int invoice_number;
	char customer_name[30];
	int customer_ph_number;
	char ref_doctor_name[30];
	struct prescription *ptr;
	struct medicines *medi;
};

typedef struct prescription pres;


med *head_m, *temp_m, *curr_m;
pres *head, *temp, *curr;
invoice = 10001;

int main()
{
	int chc,i,remed;
	while(1){
		printf("                        ::Welcome to ABC Med Store::\n\n");
		printf("1.Entry\n2.See\n3.Exit\nEnter your choice : ");scanf("%d",&chc);
		switch(chc){
			case 1:{
				system("CLS");
				temp=(struct prescription *)malloc(sizeof(pres));
				temp->invoice_number=invoice;
				invoice++;
				printf("Enter Customer\'s name : ");fflush(stdin);gets(temp->customer_name);
				printf("Enter Customer\'s phone number : ");scanf("%d",&temp->customer_ph_number);
				printf("Enter Reference Doctor\'s Name : ");fflush(stdin);gets(temp->ref_doctor_name);
				temp->ptr=NULL;
				if(invoice==10002)
				{
					head=temp;
					curr=temp;
				}
				else{
					curr->ptr=temp;
					curr=temp;
				}
				i=1;
				reentrymed :
				temp_m=(struct medicines *)malloc(sizeof(med));
				printf("Enter Medicine\'s name : ");fflush(stdin);gets(temp_m->med);
				printf("Enter Quantity : ");scanf("%d",&temp_m->quantity);
				printf("Enter Price : ");scanf("%d",&temp_m->price);
				if(i==1)
				{
					head_m=temp_m;
					curr_m=temp_m;
					temp->medi = head_m;
				}
				else{
					curr_m->ptr_m=temp_m;
					curr_m=temp_m;
				}
				printf("Do you want to add another medicine (y or n) : ");fflush(stdin);scanf("%c",&remed);
				if((remed=='y')||(remed=='Y')){
					i++;goto reentrymed;}
				break;
			}
		}
		break;
	}
	return 0;
}
