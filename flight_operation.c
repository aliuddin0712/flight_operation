#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Kticket 60000
#define Iticket 80000
#define Lticket 100000
#define Pticket 70000
#define Mticket 65000
#define Sticket 55000
#define Fticket 50000
#define Qticket 75000
#define Rticket 80000
#define Tticket 77000
#define Gticket 120000
#define DGticket 45000

float laggage()
{
	int b,i,sum=0,add=0,total=0;
	printf("enter number of lugguage:");
	scanf("%d",&b);
	float arr[b];
	for(i=0;i<b;i++)
	{
		printf("weight of lugguage %d: in kg: ",i+1);
	    scanf("%f",&arr[i]);
	    if(arr[i]>40)
		sum+=2000;
		else
		add+=1500;
	}
	total+=sum+add;
	return total;
}

long day_month(int d,int m,int y){
	long month,arr[13];
	arr[1]=0;arr[2]=31;arr[3]=59;arr[4]=90;arr[5]=120;arr[6]=151;
	arr[7]=181;arr[9]=243;arr[10]=273;arr[11]=304;arr[12]=334;
	month=arr[m]+d;
	return month;
}

long day_year(int y1,int y2)
{
	long j,b=0;
	for(j=y1;j<y2;j++)
	{
		b+=365;
	}
	return b;
}

long dd(int d1,int m1,int y1,int d2,int m2,int y2){
	int differ;
	differ=day_month(d2,m2,y2)-day_month(d1,m1,y1);
	if(y1!=y2)
    {
    	if(y1<y2)
    	{
    		differ=differ+day_year(y1,y2);
    	}
	}
	return differ;
}

int diff(int dd1,int mm1,int yy1,int dd2,int mm2,int yy2)
{
	int chg;
	if(yy1<=yy2){
		if(yy1==yy2 && mm1>mm2){
			printf("Invalid date detected");
			exit(0);
		} else if (yy1==yy2 && mm1==mm2 && dd1>dd2){
			printf("Invalid date detected");
			exit(0);
		}
		
		 else{
			chg=dd(dd1,mm1,yy1,dd2,mm2,yy2);
			return chg;
		}
	}
	else{
		printf("Invalid date detected");
		exit(0);
	}
}
struct
{
	float breakfast_price;
	float lunch_price;
	float dinner_price;
	float snack_price;
	float drink_price;
	float sweet_price;
}total={ 5.99,6.99,8.99,3.99,1.99,2.99 };

int main()
{
	FILE *fp;
	int route,n,dd1,mm1,yy1,dd2,mm2,yy2,seat,choice=0,days,acc,a,differ;
    float panalty,lag;
    char opt,owner[100];
	double totalfood,tprice;
	
	printf("Two pathways of booking a flight:\n");
	printf("1) website\t2)agent\n= ");
	scanf("%d",&route);
	if(route==1)
	{
		printf("\nWELCOME TO PAKISTAN LOCAL AIRLINES (PLA) WEBSITE\n");
	printf("  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _\n\n");
	printf("Our flight operates in: \n\n1) Karachi, 2) Islamabad, 3) Lahore, 4) Peshawar,5) Multan\n\n 6) Sialkot, 7) Faisalabad, 8) Quetta, 9) Rahim-yar-khan\n\n 10) Turbat, 11) Gawadar 12) D.G khan\n\n");
	start:	
	printf("\n\nEnter the number your destination:");
	scanf("%d",&n);
	if(n>12 || n<1)
	goto start;
	
	printf("\n\nCurrent date: dd mm yy: ");
	scanf("%d %d %d",&dd1,&mm1,&yy1);
	printf("\nDeparture date: dd mm yy: ");
	scanf("%d %d %d",&dd2,&mm2,&yy2);
	differ=diff(dd1,mm1,yy1,dd2,mm2,yy2);
	if(differ>=30)
	{
		if(n==1)
		tprice=Kticket-(Kticket*0.1);
		if(n==2)
		tprice=Iticket-(Iticket*0.1);
		if(n==3)
		tprice=Lticket-(Lticket*0.1);
		if(n==4)
		tprice=Pticket-(Pticket*0.1);
		if(n==5)
		tprice=Mticket-(Mticket*0.1);
		if(n==6)
		tprice=Sticket-(Sticket*0.1);
		if(n==7)
		tprice=Fticket-(Fticket*0.1);
		if(n==8)
		tprice=Qticket-(Qticket*0.1);
		if(n==9)
		tprice=Rticket-(Rticket*0.1);
		if(n==10)
		tprice=Tticket-(Tticket*0.1);
		if(n==11)
		tprice=Gticket-(Gticket*0.1);
		if(n==12)
		tprice=DGticket-(DGticket*0.1);
	}
	if(differ>=7 && differ<30)
	{
		if(n==1)
		tprice=Kticket-(Kticket*0.05);
		if(n==2)
		tprice=Iticket-(Iticket*0.05);
		if(n==3)
		tprice=Lticket-(Lticket*0.05);
		if(n==4)
		tprice=Pticket-(Pticket*0.05);
		if(n==5)
		tprice=Mticket-(Mticket*0.05);
		if(n==6)
		tprice=Sticket-(Sticket*0.05);
		if(n==7)
		tprice=Fticket-(Fticket*0.05);
		if(n==8)
		tprice=Qticket-(Qticket*0.05);
		if(n==9)
		tprice=Rticket-(Rticket*0.05);
		if(n==10)
		tprice=Tticket-(Tticket*0.05);
		if(n==11)
		tprice=Gticket-(Gticket*0.05);
		if(n==12)
		tprice=DGticket-(DGticket*0.05);
	}
	if(differ<7)
	{
		if(n==1)
		tprice=Kticket;
		if(n==2)
		tprice=Iticket;
		if(n==3)
		tprice=Lticket;
		if(n==4)
		tprice=Pticket;
		if(n==5)
		tprice=Mticket;
		if(n==6)
		tprice=Sticket;
		if(n==7)
		tprice=Fticket;
		if(n==8)
		tprice=Qticket;
		if(n==9)
		tprice=Rticket;
		if(n==10)
		tprice=Tticket;
		if(n==11)
		tprice=Gticket;
		if(n==12)
		tprice=DGticket;
	}
	seat:
	printf("no. of seats: ");
	scanf("%d",&seat);
	if(seat>10)
	{
		printf("Seats are not available");
		goto seat;
	}
	lag= laggage();
	
	printf("Please select the meal you would like on your flight \n\n");
	printf("Breakfast- Traditional Pakistani breakfast \nLunch- Traditional Pakistani Lunch\ndinner - Traditional Pakistani dinner\nSnaks- Frenchfries or Chips\nDrinks- Pepsi/Coke/Dew/7up\nSweets- Traditional Pakistani sweets\n"); 
           
	do{
		printf("Menu: \n\n");
		printf("1. Breakfast   $%.2lf \n", total.breakfast_price);
		printf("2. lunch       $%.2lf \n", total.lunch_price);
		printf("3. dinner      $%.2lf \n", total.dinner_price);
		printf("4. Snaks       $%.2lf \n", total.snack_price);
		printf("5. Drinks      $%.2lf \n", total.drink_price);
		printf("6. Sweets      $%.2lf \n", total.sweet_price);
		printf("7. Exit\n\n");
		printf("Enter an item: ");
		scanf("%i", &choice);

		switch(choice){
		case 1:
			totalfood += total.breakfast_price;
			break;
		case 2:
			totalfood += total.lunch_price;
			break;
		case 3:
			totalfood += total.dinner_price;
			break;
		case 4:
			totalfood += total.snack_price;
			break;
		case 5:
			totalfood += total.drink_price;
			break;
		case 6:
			totalfood += total.sweet_price;
			break;
		case 7:
			printf("Thank you for ordering at PLA food service \n");
			break;
		default:
			printf("* Error:  This is not on the menu. \n");
			break;
		}
		printf("Total so far: $%.2lf\n\n", totalfood);
	} while (choice != 7);
	printf("Your order Total is $%.2lf \n\n", totalfood);
	
	printf("credit card informatoion\n Owner of the card:");
    scanf(" %s",&owner);
    printf("\nAccount number:");
    scanf("%d",&acc);
	
	printf("Do you want to cancel the flight (Y / N)");
	scanf(" %c",&opt);
	if(opt== 'Y' )
	{
		printf("days untill flight: ");
			scanf("%d",&days);
			if(days>=7)
			{
			panalty = 0.1*tprice;
				goto End1;
			}
			else if(days>=3 && days<7)
			{
			panalty = 0.2*tprice;
				goto End1;
			}
			else if(days>=1 && days<3)
			{
			panalty = 0.4*tprice;
				goto End1;
			}
		
	}
			
			if(opt=='N')
			{
				goto End;
			}
			else
			{
				printf("Incrrect input");
				exit(0);
			}
	End1:
		fp=fopen("ticket.txt","w");
		fprintf(fp,"You've cancelled your flight with the charge of %.2f penalty",panalty*seat);
		fclose(fp);
		exit(0);
	End:
		
	
			fp=fopen("ticket.txt","w");
	fprintf(fp,"Tickets' price: %.2lf",tprice*seat);
	fprintf(fp,"\nno: of seats: %d",seat);
	fprintf(fp,"\nCharge on lagguages: %.2f",lag);
	fprintf(fp,"\nFood price: %.2lf",totalfood);
	fprintf(fp,"\nOwner of crediticard: %s",owner);
	fclose(fp);
	
 };
    if(route==2)
    {
   	printf("\nWELCOME TO PAKISTAN LOCAL AIRLINES (PLA) AGENTS WEBSITE\n");
	printf("  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _\n\n");
	printf("Our flight operates in: \n\n1) Karachi, 2) Islamabad, 3) Lahore, 4) Peshawar,5) Multan\n\n 6) Sialkot, 7) Faisalabad, 8) Quetta, 9) Rahim-yar-khan\n\n 10) Turbat, 11) Gawadar 12) D.G khan\n\n");
	printf("FIRST AGENT:\n HI! I'M GIVING 5%% DISCOUNT AND 10%% DISCOUNT IF USER IS REGISTERING FLIGHT BEFORE A WEEK OR BEFORE A MONTH RESPECTIVELY.");
	printf("\nSECOND AGENT:\n \t\tHI! I'M GIVING 10%% DISCOUNT AND 20%% DISCOUNT IF USER IS REGISTERING FLIGHT BEFORE A WEEK OR BEFORE A MONTH RESPECTIVELY.");
	printf("\nTHIRD AGENT:\n\n\t     HI! I'M GIVING 10%% DISCOUNT AND 20%% DISCOUNT IF USER IS REGISTERING FLIGHT BEFORE A WEEK OR BEFORE A MONTH RESPECTIVELY + NO CHARGE OF LAGGAGES OF CUSTOMER.");
	
	start1:	
	printf("\n\nEnter the number your destination:");
	scanf("%d",&n);
	if(n>12 || n<1)
	goto start1;
	
	start2:
	printf("Agent 1 or Agent 2 or Agent 3: ");
	scanf("%d",&a);
	if(a<1 || a>3)
	goto start2;
	if(a==1)
	{
		printf("\n\nCurrent date: dd mm yy: ");
	    scanf("%d %d %d",&dd1,&mm1,&yy1);
    	printf("\nDeparture date: dd mm yy: ");
    	scanf("%d %d %d",&dd2,&mm2,&yy2);
    	differ=diff(dd1,mm1,yy1,dd2,mm2,yy2);
		if(differ>=30)
	{
		if(n==1)
		tprice=Kticket-(Kticket*0.1);
		if(n==2)
		tprice=Iticket-(Iticket*0.1);
		if(n==3)
		tprice=Lticket-(Lticket*0.1);
		if(n==4)
		tprice=Pticket-(Pticket*0.1);
		if(n==5)
		tprice=Mticket-(Mticket*0.1);
		if(n==6)
		tprice=Sticket-(Sticket*0.1);
		if(n==7)
		tprice=Fticket-(Fticket*0.1);
		if(n==8)
		tprice=Qticket-(Qticket*0.1);
		if(n==9)
		tprice=Rticket-(Rticket*0.1);
		if(n==10)
		tprice=Tticket-(Tticket*0.1);
		if(n==11)
		tprice=Gticket-(Gticket*0.1);
		if(n==12)
		tprice=DGticket-(DGticket*0.1);
	}
	    if(differ>=7 && differ<30)
	{
		if(n==1)
		tprice=Kticket-(Kticket*0.05);
		if(n==2)
		tprice=Iticket-(Iticket*0.05);
		if(n==3)
		tprice=Lticket-(Lticket*0.05);
		if(n==4)
		tprice=Pticket-(Pticket*0.05);
		if(n==5)
		tprice=Mticket-(Mticket*0.05);
		if(n==6)
		tprice=Sticket-(Sticket*0.05);
		if(n==7)
		tprice=Fticket-(Fticket*0.05);
		if(n==8)
		tprice=Qticket-(Qticket*0.05);
		if(n==9)
		tprice=Rticket-(Rticket*0.05);
		if(n==10)
		tprice=Tticket-(Tticket*0.05);
		if(n==11)
		tprice=Gticket-(Gticket*0.05);
		if(n==12)
		tprice=DGticket-(DGticket*0.05);
	}
	if(differ<7)
	{
		if(n==1)
		tprice=Kticket;
		if(n==2)
		tprice=Iticket;
		if(n==3)
		tprice=Lticket;
		if(n==4)
		tprice=Pticket;
		if(n==5)
		tprice=Mticket;
		if(n==6)
		tprice=Sticket;
		if(n==7)
		tprice=Fticket;
		if(n==8)
		tprice=Qticket;
		if(n==9)
		tprice=Rticket;
		if(n==10)
		tprice=Tticket;
		if(n==11)
		tprice=Gticket;
		if(n==12)
		tprice=DGticket;
	}
	seat1:
	printf("no. of seats: ");
	scanf("%d",&seat);
	if(seat>10)
	{
		printf("Seats are not available");
		goto seat1;
	}
	lag= laggage();
	
	printf("Please select the meal you would like on your flight \n\n");
	printf("Breakfast- Traditional Pakistani breakfast \nLunch- Traditional Pakistani Lunch\ndinner - Traditional Pakistani dinner\nSnaks- Frenchfries or Chips\nDrinks- Pepsi/Coke/Dew/7up\nSweets- Traditional Pakistani sweets\n"); 
           
	do{
		printf("Menu: \n\n");
		printf("1. Breakfast   $%.2lf \n", total.breakfast_price);
		printf("2. lunch       $%.2lf \n", total.lunch_price);
		printf("3. dinner      $%.2lf \n", total.dinner_price);
		printf("4. Snaks       $%.2lf \n", total.snack_price);
		printf("5. Drinks      $%.2lf \n", total.drink_price);
		printf("6. Sweets      $%.2lf \n", total.sweet_price);
		printf("7. Exit\n\n");
		printf("Enter an item: ");
		scanf("%i", &choice);

		switch(choice){
		case 1:
			totalfood += total.breakfast_price;
			break;
		case 2:
			totalfood += total.lunch_price;
			break;
		case 3:
			totalfood += total.dinner_price;
			break;
		case 4:
			totalfood += total.snack_price;
			break;
		case 5:
			totalfood += total.drink_price;
			break;
		case 6:
			totalfood += total.sweet_price;
			break;
		case 7:
			printf("Thank you for ordering at PLA food service \n");
			break;
		default:
			printf("* Error:  This is not on the menu. \n");
			break;
		}
		printf("Total so far: $%.2lf\n\n", totalfood);
	} while (choice != 7);
	printf("Your order Total is $%.2lf \n\n", totalfood);
	
	printf("credit card informatoion\n Owner of the card:");
    scanf(" %s",&owner);
    printf("\nAccount number:");
    scanf("%d",&acc);
	
	printf("Do you want to cancel the flight (Y/N): ");
    scanf(" %c",&opt);
    if(opt== 'Y' )
	{
		printf("days untill flight: ");
			scanf("%d",&days);
			if(days>=7)
			{
			panalty = 0.1*tprice;
			goto End2;
			}
			else if(days>=3 && days<7)
			{
			panalty = 0.2*tprice;
			goto End2;
			}
			else if(days>=1 && days<3)
			{
			panalty = 0.4*tprice;
			goto End2;
			}
			
	}
			
			if(opt=='N')
			{
				goto End3;
			}
			else
			{
				printf("Incrrect input");
				exit(0);
			}
			End2:
			fp=fopen("ticket.txt","w");	
		fprintf(fp,"You've cancelled your flight with the charge of %.2f penalty",panalty*seat);
		fclose(fp);
		exit(0);
	End3:
		
	
			fp=fopen("ticket.txt","w");
	fprintf(fp,"Tickets' price: %.2lf",tprice*seat);
	fprintf(fp,"\nno: of seats: %d",seat);
	fprintf(fp,"\nCharge on lagguages: %.2f",lag);
	fprintf(fp,"\nFood price: %.2lf",totalfood);
	fprintf(fp,"\nOwner of crediticard: %s",owner);
	fclose(fp);
     };
	if(a==2)
	{
		printf("\n\nCurrent date: dd mm yy: ");
	    scanf("%d %d %d",&dd1,&mm1,&yy1);
    	printf("\nDeparture date: dd mm yy: ");
    	scanf("%d %d %d",&dd2,&mm2,&yy2);
    	differ=diff(dd1,mm1,yy1,dd2,mm2,yy2);
		if(differ>=30)
	{
		if(n==1)
		tprice=Kticket-(Kticket*0.2);
		if(n==2)
		tprice=Iticket-(Iticket*0.2);
		if(n==3)
		tprice=Lticket-(Lticket*0.2);
		if(n==4)
		tprice=Pticket-(Pticket*0.2);
		if(n==5)
		tprice=Mticket-(Mticket*0.2);
		if(n==6)
		tprice=Sticket-(Sticket*0.2);
		if(n==7)
		tprice=Fticket-(Fticket*0.2);
		if(n==8)
		tprice=Qticket-(Qticket*0.2);
		if(n==9)
		tprice=Rticket-(Rticket*0.2);
		if(n==10)
		tprice=Tticket-(Tticket*0.2);
		if(n==11)
		tprice=Gticket-(Gticket*0.2);
		if(n==12)
		tprice=DGticket-(DGticket*0.2);
	}
	    if(differ>=7 && differ<30)
	{
		if(n==1)
		tprice=Kticket-(Kticket*0.1);
		if(n==2)
		tprice=Iticket-(Iticket*0.1);
		if(n==3)
		tprice=Lticket-(Lticket*0.1);
		if(n==4)
		tprice=Pticket-(Pticket*0.1);
		if(n==5)
		tprice=Mticket-(Mticket*0.1);
		if(n==6)
		tprice=Sticket-(Sticket*0.1);
		if(n==7)
		tprice=Fticket-(Fticket*0.1);
		if(n==8)
		tprice=Qticket-(Qticket*0.1);
		if(n==9)
		tprice=Rticket-(Rticket*0.1);
		if(n==10)
		tprice=Tticket-(Tticket*0.1);
		if(n==11)
		tprice=Gticket-(Gticket*0.1);
		if(n==12)
		tprice=DGticket-(DGticket*0.1);
	}
	if(differ<7)
	{
		if(n==1)
		tprice=Kticket;
		if(n==2)
		tprice=Iticket;
		if(n==3)
		tprice=Lticket;
		if(n==4)
		tprice=Pticket;
		if(n==5)
		tprice=Mticket;
		if(n==6)
		tprice=Sticket;
		if(n==7)
		tprice=Fticket;
		if(n==8)
		tprice=Qticket;
		if(n==9)
		tprice=Rticket;
		if(n==10)
		tprice=Tticket;
		if(n==11)
		tprice=Gticket;
		if(n==12)
		tprice=DGticket;
	}
	seat2:
	printf("no. of seats: ");
	scanf("%d",&seat);
	if(seat>10)
	{
		printf("Seats are not available");
		goto seat2;
	}
	lag= laggage();
	
	printf("Please select the meal you would like on your flight \n\n");
	printf("Breakfast- Traditional Pakistani breakfast \nLunch- Traditional Pakistani Lunch\ndinner - Traditional Pakistani dinner\nSnaks- Frenchfries or Chips\nDrinks- Pepsi/Coke/Dew/7up\nSweets- Traditional Pakistani sweets\n"); 
           
	do{
		printf("Menu: \n\n");
		printf("1. Breakfast   $%.2lf \n", total.breakfast_price);
		printf("2. lunch       $%.2lf \n", total.lunch_price);
		printf("3. dinner      $%.2lf \n", total.dinner_price);
		printf("4. Snaks       $%.2lf \n", total.snack_price);
		printf("5. Drinks      $%.2lf \n", total.drink_price);
		printf("6. Sweets      $%.2lf \n", total.sweet_price);
		printf("7. Exit\n\n");
		printf("Enter an item: ");
		scanf("%i", &choice);

		switch(choice){
		case 1:
			totalfood += total.breakfast_price;
			break;
		case 2:
			totalfood += total.lunch_price;
			break;
		case 3:
			totalfood += total.dinner_price;
			break;
		case 4:
			totalfood += total.snack_price;
			break;
		case 5:
			totalfood += total.drink_price;
			break;
		case 6:
			totalfood += total.sweet_price;
			break;
		case 7:
			printf("Thank you for ordering at PLA food service \n");
			break;
		default:
			printf("* Error:  This is not on the menu. \n");
			break;
		}
		printf("Total so far: $%.2lf\n\n", totalfood);
	} while (choice != 7);
	printf("Your order Total is $%.2lf \n\n", totalfood);
	
	printf("credit card informatoion\n Owner of the card:");
    scanf(" %s",&owner);
    printf("\nAccount number:");
    scanf("%d",&acc);
	
	printf("Do you want to cancel the flight (Y/N): ");
    scanf(" %c",&opt);
    if(opt== 'Y' )
	{
		printf("days untill flight: ");
			scanf("%d",&days);
			if(days>=7)
			{
			panalty = 0.1*tprice;
			goto End5;
			}
			else if(days>=3 && days<7)
			{
			panalty = 0.2*tprice;
			goto End5;
			}
			else if(days>=1 && days<3)
			{
			panalty = 0.4*tprice;
			goto End5;
			}
			
	}
			
			if(opt=='N')
			{
				goto End4;
			}
			else
			{
				printf("Incrrect input");
				exit(0);
			}
			End5:
				fp=fopen("ticket.txt","w");
		fprintf(fp,"You've cancelled your flight with the charge of %.2f penalty",panalty*seat);
		fclose(fp);
		exit(0);
	End4:
		
	
			fp=fopen("ticket.txt","w");
	fprintf(fp,"Tickets' price: %.2lf",tprice*seat);
	fprintf(fp,"\nno: of seats: %d",seat);
	fprintf(fp,"\nCharge on lagguages: %.2f",lag);
	fprintf(fp,"\nFood price: %.2lf",totalfood);
	fprintf(fp,"\nOwner of crediticard: %s",owner);
	fclose(fp);
 };
	if(a==3)
	{
		printf("\n\nCurrent date: dd mm yy: ");
	    scanf("%d %d %d",&dd1,&mm1,&yy1);
    	printf("\nDeparture date: dd mm yy: ");
    	scanf("%d %d %d",&dd2,&mm2,&yy2);
    	differ=diff(dd1,mm1,yy1,dd2,mm2,yy2);
		if(differ>=30)
	{
		if(n==1)
		tprice=Kticket-(Kticket*0.2);
		if(n==2)
		tprice=Iticket-(Iticket*0.2);
		if(n==3)
		tprice=Lticket-(Lticket*0.2);
		if(n==4)
		tprice=Pticket-(Pticket*0.2);
		if(n==5)
		tprice=Mticket-(Mticket*0.2);
		if(n==6)
		tprice=Sticket-(Sticket*0.2);
		if(n==7)
		tprice=Fticket-(Fticket*0.2);
		if(n==8)
		tprice=Qticket-(Qticket*0.2);
		if(n==9)
		tprice=Rticket-(Rticket*0.2);
		if(n==10)
		tprice=Tticket-(Tticket*0.2);
		if(n==11)
		tprice=Gticket-(Gticket*0.2);
		if(n==12)
		tprice=DGticket-(DGticket*0.2);
	}
	    if(differ>=7 && differ<30)
	{
		if(n==1)
		tprice=Kticket-(Kticket*0.1);
		if(n==2)
		tprice=Iticket-(Iticket*0.1);
		if(n==3)
		tprice=Lticket-(Lticket*0.1);
		if(n==4)
		tprice=Pticket-(Pticket*0.1);
		if(n==5)
		tprice=Mticket-(Mticket*0.1);
		if(n==6)
		tprice=Sticket-(Sticket*0.1);
		if(n==7)
		tprice=Fticket-(Fticket*0.1);
		if(n==8)
		tprice=Qticket-(Qticket*0.1);
		if(n==9)
		tprice=Rticket-(Rticket*0.1);
		if(n==10)
		tprice=Tticket-(Tticket*0.1);
		if(n==11)
		tprice=Gticket-(Gticket*0.1);
		if(n==12)
		tprice=DGticket-(DGticket*0.1);
	}
	if(differ<7)
	{
		if(n==1)
		tprice=Kticket;
		if(n==2)
		tprice=Iticket;
		if(n==3)
		tprice=Lticket;
		if(n==4)
		tprice=Pticket;
		if(n==5)
		tprice=Mticket;
		if(n==6)
		tprice=Sticket;
		if(n==7)
		tprice=Fticket;
		if(n==8)
		tprice=Qticket;
		if(n==9)
		tprice=Rticket;
		if(n==10)
		tprice=Tticket;
		if(n==11)
		tprice=Gticket;
		if(n==12)
		tprice=DGticket;
	}
	seat3:
	printf("no. of seats: ");
	scanf("%d",&seat);
	if(seat>10)
	{
		printf("Seats are not available");
		goto seat3;
	}
	printf("Enter the no.of lugguage:");
	scanf("%d",&lag);
	
	printf("Please select the meal you would like on your flight \n\n");
	printf("Breakfast- Traditional Pakistani breakfast \nLunch- Traditional Pakistani Lunch\ndinner - Traditional Pakistani dinner\nSnaks- Frenchfries or Chips\nDrinks- Pepsi/Coke/Dew/7up\nSweets- Traditional Pakistani sweets\n"); 
           
	do{
		printf("Menu: \n\n");
		printf("1. Breakfast   $%.2lf \n", total.breakfast_price);
		printf("2. lunch       $%.2lf \n", total.lunch_price);
		printf("3. dinner      $%.2lf \n", total.dinner_price);
		printf("4. Snaks       $%.2lf \n", total.snack_price);
		printf("5. Drinks      $%.2lf \n", total.drink_price);
		printf("6. Sweets      $%.2lf \n", total.sweet_price);
		printf("7. Exit\n\n");
		printf("Enter an item: ");
		scanf("%i", &choice);

		switch(choice){
		case 1:
			totalfood += total.breakfast_price;
			break;
		case 2:
			totalfood += total.lunch_price;
			break;
		case 3:
			totalfood += total.dinner_price;
			break;
		case 4:
			totalfood += total.snack_price;
			break;
		case 5:
			totalfood += total.drink_price;
			break;
		case 6:
			totalfood += total.sweet_price;
			break;
		case 7:
			printf("Thank you for ordering at PLA food service \n");
			break;
		default:
			printf("* Error:  This is not on the menu. \n");
			break;
		}
		printf("Total so far: $%.2lf\n\n", totalfood);
	} while (choice != 7);
	printf("Your order Total is $%.2lf \n\n", totalfood);
	
	printf("credit card informatoion\n Owner of the card:");
    scanf(" %s",&owner);
    printf("\nAccount number:");
    scanf("%d",&acc);
	
	printf("Do you want to cancel the flight (Y/N): ");
    scanf(" %c",&opt);
    if(opt== 'Y' )
	{
		printf("days untill flight: ");
			scanf("%d",&days);
			if(days>=7)
			{
			panalty = 0.1*tprice;
			goto End6;
			}
			else if(days>=3 && days<7)
			{
			panalty = 0.2*tprice;
			goto End6;
			}
			else if(days>=1 && days<3)
			{
			panalty = 0.4*tprice;
			goto End6;
			}
			
	}
			
			if(opt=='N')
			{
				goto End7;
			}
			else
			{
				printf("Incrrect input");
				exit(0);
			}
			End6:
				fp=fopen("ticket.txt","w");
		fprintf(fp,"You've cancelled your flight with the charge of %.2f penalty",panalty*seat);
		fclose(fp);
		exit(0);
	End7:
		
	
			fp=fopen("ticket.txt","w");
	fprintf(fp,"Tickets' price: %.2lf",tprice*seat);
	fprintf(fp,"\nno: of seats: %d",seat);
	fprintf(fp,"\nCharge on lagguages: %.2f",lag);
	fprintf(fp,"\nFood price: %.2lf",totalfood);
	fprintf(fp,"\nOwner of crediticard: %s",owner);
	fclose(fp);
 };
	}
   
}
