#include<conio.h>
#include<stdio.h>
#include<String.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

static int i=0;
int c;

char doc_folder[100];

struct web
{
	int pass;
	char name[30];
	char f_name[30],Aadhar[12],l_name[30],email[50],contact[10];
}w[9];

char name[30],date[15],invoice[30],l_name[30],l_pass[30],ch,pan[30],x;
int pass;

int n,i,a,b,mul,contact,d,m,y;

void display_menu();
void login(void);
void reg(void);
void Alturus();
void Xuv();
void Creta();
void i20();
void Benz250();
void Benz350();
void Nexon();
void Tiago();
void Amaze();
void Civic();
void Alturusbill();
void Xuvbill();
void Cretabill();
void i20bill();
void Benz250bill();
void Benz350bill();
void Nexonbill();
void Tiagobill();
void Amazebill();
void Civicbill();
void Rules();
//int date2;
int main()


{

		    int gd =DETECT, gm;
		    initgraph(&gd, &gm,"c:\\turboc3\\bgi");


	clrscr();


      //	textcolor(25);


			    setbkcolor(CYAN);
			    setcolor(RED);
				//setcolor(2);
       //	setfillstyle(SOLID_FILL,2);
       rectangle(50,50,getmaxx()-50,380);


	 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);


       outtextxy(100, 100, "SELF DRIVEN RENT CAR SYSTEM");
	setcolor(BLUE);
	outtextxy(100,130,"лллллллллллллллллллллллллллл");
	 setcolor(GREEN);
	outtextxy(100,200,"Press Enter to proceed...!!");
	if(getch()==13)


			     //closegraph();



	clrscr();
	XY:                      // setbkcolor(GREEN);

	   printf("\n\n\n\n\n\t\t\tWELCOME TO SELF DRIVEN  RENT CAR SYSTEM");
	printf("\n\t\t\tлллллллллллллллллллллллллллллллллллллллл");
	printf("\n\n\n\t\t\t1. REGISTER\t\t2. LOGIN\t\t3.EXIT");
	printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1: clrscr();

			reg();
			break;
		case 2: clrscr();

			login();
			break;
		case 3: clrscr();
			exit(0);
			       break;

		default: printf("\n\n\t\t\t\tNO MATCH FOUND");
			printf("\n\n\t\t\tPress Enter re-Enter the choice");
			if(getch()==13)
				 clrscr();
			goto XY;
	 }

	return 0;
}
void reg()
{
    FILE *fp;
    struct web ww;
    char x,username[30]; int flag=0,i;
    setbkcolor(BLUE);
    printf("\n\n\t\t\t\tWELCOME TO OUR REGISTERATION DESK");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    //for(i=0;i<100;i++)

    //{
    printf("\n\n\t\t\t\tEnter Document Name: ");
      fflush(stdin);
      gets(doc_folder);
      fp = fopen(doc_folder, "a+");

      printf("\n\n\t\t\t\t  Enter First Name:");
      scanf("\n\n\t\t\t\t%s",&ww.f_name);
      printf("\n\n\t\t\t\t  Enter Last Name:");
      scanf("\n\n\t\t\t\t%s",&ww.l_name);

      printf("\n\n\t\t\t\t  Enter Aadhar No.:");
      scanf("\n\n\t\t\t\t%s",&ww.Aadhar);

      if(strlen(ww.Aadhar) != 12)
      {
	printf("AADHAR FORMAT WRONG (12 DIGITS REQUIRED)... TRY AGAIN (Y/N)");
	while(1)
	{
		x = getch();
		if(x=='Y' || x=='y')
		{
			clrscr();
			reg();
		}
		else if(x=='n' || x=='N')
		{
			exit(0);
		}

		if(x=='Y' || x=='y' || x=='n' || x=='N')
		break;
	}
      }

      //printf("\n\n\t\t\t\t  Enter Pan No.:");
      //scanf("\n\n\t\t\t\t%s",&pan);
      printf("\n\n\t\t\t\t  Enter Contact No.:");
      scanf("\n\n\t\t\t\t%s",&ww.contact);

      if(strlen(ww.contact) != 10)
      {
	printf("PHONE NUMBER LENGTH SHOULD BE STRICTLY 10... TRY AGAIN (Y/N)");
	while(1)
	{
		x = getch();
		if(x=='Y' || x=='y')
		{
			clrscr();
			reg();
		}
		else if(x=='n' || x=='N')
		{
			exit(0);
		}

		if(x=='Y' || x=='y' || x=='n' || x=='N')
		break;
	}
      }

      printf("\n\n\t\t\t\t  Enter Email ID.:");
      scanf("\n\n\t\t\t\t%s",&ww.email);

      for(i=0;i<strlen(ww.email);i++)
      {
	if(ww.email[i] == (char)64)
		flag=1;
      }

      if(flag==0)
      {
	printf("EMAIL FORMAT WRONG (@ REQUIRED)... TRY AGAIN (Y/N)");
	while(1)
	{
		x = getch();
		if(x=='Y' || x=='y')
		{
			clrscr();
			reg();
		}
		else if(x=='n' || x=='N')
		{
			exit(0);
		}

		if(x=='Y' || x=='y' || x=='n' || x=='N')
		break;
	}
      }

      printf("\n\n\t\t\t\tENTER USERNAME: ");
      fflush(stdin);
      gets(username);
	while(!feof(fp))
	{
	  fread(&ww, sizeof(ww),1,fp);
	  if(strcmp(username,ww.name)==0)
	    {
	    printf("\n\n\t\t\tUSERNAME ALREADY EXISTS.\n\n");
	    clrscr();
	    reg();
	    }
	  else
	  {
		strcpy(ww.name, username);
		break;
	  }
	}
      printf("\n\n\t\t\t\tENTER PASSWORD(eg.123): ");
      /*while((c=getch())!=13)
	{
	  ww.pass[z]=c;
	  printf("%c",'*');
	  z++;
	}
	ww.pass[z+1]='\0';
	z=0;*/

      scanf("%d",&ww.pass);


      fwrite(&ww, sizeof(ww),1,fp);
      // fseek(fp, 0, SEEK_SET);
      fclose(fp);
      printf("\n\n\tPress enter if you agree with Username and Password");
      if((c=getch())==(char)13)
	{
	clrscr();
	printf("\n\n\t\tYou are successfully registered");
	printf("\n\n\t\tTry logging in with  your account?? \n\n\t\t");
	printf("> PRESS 1 FOR YES\n\n\t\t  > PRESS 2 FOR NO\n\n\t\t\t\t");
	scanf("%d",&n);
	switch(n)
	  {
	      case 1: clrscr();
		    login();
		    break;

	      case 2: clrscr();
		    printf("\n\n\n\t\t\t\t\tTHANK YOU FOR REGISTERING.");
		    break;
	  }
	}
	//break;
     // }
    getch();
}
void login()
{
      FILE *fp;
      struct web ww;
      char x,name[30];
      int pass;

      printf("\n\n\t\t\t\tWELCOME TO LOG IN DESK");
      printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^");
      //for(i=0; i<100; i++)
      //{
	printf("\n\n\t\t\t\tENTER YOUR DOCUMENT NAME: ");
	fflush(stdin);
	gets(doc_folder);
	fp = fopen(doc_folder,"r+");
	printf("\n\n\t\t\t\tENTER USERNAME: ");
	fflush(stdin);
	gets(name);
	printf("\n\n\t\t\t\tENTER PASSWORD: ");
	/*while((c=getch())!=(char)13)
	{
	  pass[z++]=c;
	  printf("%c",'*');
	}
	pass[++z]='\0';*/
	scanf("%d",&pass);

      while(!feof(fp))
	{
	fread(&ww,sizeof(ww),1,fp);
	//printf("%d",ww.pass);
	//getch();

	  if((strcmp(name,ww.name) == 0) && (ww.pass == pass))
	  {
	    clrscr();
	    fclose(fp);
	    printf("\n\n\n\t\t\tYOU ARE LOGGED IN SUCCESSFULLY");
	    break;

	  }
	else if(strcmp(name,ww.name) != 0 || (ww.pass == pass))
	  {
	  clrscr();
		if(strcmp(name,ww.name) != 0)
		printf("\n\n\n\t\t\tWRONG NAME!! Not ??.PLEASE TRY AGAIN");
		else if(ww.pass != pass)
		printf("\n\n\n\t\t\tWRONG PASSWORD!! Not ??.PLEASE TRY AGAIN");


	    printf("\n\t\t\tWanna try again\n");
	    printf("\t\t\t(y/n)");
	    if((c=getch()) == 'y')
	      login();
	      else if((c=getch()) == 'n'){
		fclose(fp);
		main();
		}
		else {
		       fclose(fp);
		       exit(0);
		       break;

		       }
	  }
      }
      system("cls");
      Rules();
      printf("\n\n\n\n\t\t\tDo You Agree With T&C ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
		exit(0);
	else if (x=='y' || x=='Y')
		break;
      }
      //break;
      //getch();

      display_menu();
//}
//closegraph();
 }

 void display_menu()
     {	 system("cls");
		      //setcolor(GREEN);
	printf("\n\n\t\t\t\tWELCOME TO CAR SELECTION PANEL :)\n");


	printf("\n\t\t\tSELECT AVAILABLE CAR COMPANY FROM BELOW LIST\n");

	 printf("\t\t\t1.MAHINDRA\n\t\t\t2.HYUNDAI\n\t\t\t3.MERCEDES\n\t\t\t4.TATA\n\t\t\t5.HONDA\n\t\t\t6.EXIT\n");

	   printf("\n\n\t\t\tENTER YOUR CHOICE FROM ABOVE LIST : ");
	   scanf("%d",&n);
	   system("cls");


	 switch(n)
	  {

	  case 1:
	  printf("\n\t\t\tYou Have Selected - Mahindra\n\n");
	   printf("\n\n\t\t\tWe Have 2 cars of Mahindra \n\n");
	   printf("\n\t\t\t\t1.Alturus \n\t\t\t\t 2.Xuv \n");
	   printf("\n\n\t\t\tENTER YOUR CHOICE FROM ABOVE LIST : ");
	   scanf("%d",&n);
	   system("cls");
	 // printf("Enter your choice:");

	  switch(n)
	  {
	  case 1:

	  Alturus();
	  break;
	  case 2:
	  Xuv();

	  break;
	  default:
	  printf("enter valid choice:");

	  }



	 break;
	  case 2 :

	  printf("\n\t\t\tYou Have Selected - Hyundai\n\n");
	   printf("\n\n\t\t\tWe Have 2 cars of Hyundai \n\n");
	   printf("\n\t\t\t\t1.Creta \n\t\t\t\t 2.i20 \n");
	   printf("\n\n\t\t\tENTER YOUR CHOICE FROM ABOVE LIST : ");
	   scanf("%d",&n);
	   system("cls");


	  switch(n)
	  {
	  case 1:

	  Creta();
	  break;
	  case 2:
	  i20();
	  break;
	  default:
	  printf("enter valid choice:");

	  }
	  break;


		  case 3 :

	  printf("\n\t\t\tYou Have Selected - Mercedes\n\n");
	   printf("\n\n\t\t\tWe Have 2 cars of Mercedes \n\n");
	   printf("\n\t\t\t\t1.Benz250 \n\t\t\t\t 2.Benz350 \n");
	   printf("\n\n\t\t\tENTER YOUR CHOICE FROM ABOVE LIST : ");
	   scanf("%d",&n);
	   system("cls");


	  switch(n)
	  {
	  case 1:

	  Benz250();
	  break;
	  case 2:
	  Benz350();
	  break;
	  default:
	  printf("enter valid choice:");

	  }
	  break;





		  case 4 :

	  printf("\n\t\t\tYou Have Selected - Tata\n\n");
	   printf("\n\n\t\t\tWe Have 2 cars of Tata \n\n");
	   printf("\n\t\t\t\t1.Nexon \n\t\t\t\t 2.Tiago \n");
	   printf("\n\n\t\t\tENTER YOUR CHOICE FROM ABOVE LIST : ");
	   scanf("%d",&n);
	   system("cls");


	  switch(n)
	  {
	  case 1:

	  Nexon();
	  break;
	  case 2:
	  Tiago();
	  break;
	  default:
	  printf("enter valid choice:");

	  }
	  break;


		  case 5 :

	  printf("\n\t\t\tYou Have Selected - Honda\n\n");
	   printf("\n\n\t\t\tWe Have 2 cars of Honda \n\n");
	   printf("\n\t\t\t\t1.Amaze \n\t\t\t\t 2.Civic \n");
	   printf("\n\n\t\t\tENTER YOUR CHOICE FROM ABOVE LIST : ");
	   scanf("%d",&n);
	   system("cls");


	  switch(n)
	  {
	  case 1:

	  Amaze();
	  break;
	  case 2:
	  Civic();
	  break;
	  default:
	  printf("enter valid choice:");

	  }
	   break;
	   case 6:
	  exit(0);

	   break;


	  default:
	 printf("Enter valid option :)");
	 }






getch();

}
 void Alturus()
	 {
	printf("\t\t----------*Car Details*------------\n\n");
	//printf("\t\t+===================================+\n");
	printf("\t\t   Car Name : Alturus G4 4WD  \n");
	printf("\t\t   Model No.: G4 4WD     	    \n");
       //	printf("\t\t   Age Limit: 18+  	    \n");
	printf("\t\t   Car Type : Autoatic  	    \n");
	printf("\t\t   Seat Ava : 5 Seater   	    \n");
	printf("\t\t   Car Color: Red   	    \n");
	printf("\t\t   Storage  : 7 Bag           \n");
	printf("\t\t   Mileage  : 120 km/hr       \n");
	printf("\t\t   Fare     : 2000 rs per day  \n");
	//printf("\t\t+===================================+\n");


	printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
	printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);
	//printf("Enter fare of selected car:");
	//scanf("%d",&a);
	a = 2000;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Alturusbill();

	      else if((c=getch()) == 'n'){
		main();

		}
	       else {
		      system("cls");
		       main();



     }
     }
     void Xuv()
     {
	printf("\t\t--------------*Car Details*-------------------\n\n");
	printf("\t\t   Car Name : XUV500 PLUS    \n");
	printf("\t\t   Model No.: XUV500 PLUS    \n");
       //	printf("\t\t   Age Limit: 18+            \n");
	printf("\t\t   Car Type : Manual         \n");
	printf("\t\t   Seat Ava : 9 Seater       \n");
	printf("\t\t   Car Color: White          \n");
	printf("\t\t   Storage  : 3 Bag          \n");
	printf("\t\t   Mileage  : 120 km/hr      \n");
	printf("\t\t   Fare     : 2500 rs per day\n\n");

	printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
	//printf("Enter Customer Name:");
	//scanf("%s",&name);
	//printf("Enter fare of selected car:");
	//scanf("%d",&a);
       printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);
	a = 2500;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Xuvbill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }
      /*	printf("\t\tRental Days : ");
	scanf("%d",&b);
	mul=a*b;
	printf("\t\tTotal Price :%d ",mul);  */

     }
     void Creta()
     {
     printf("\t\t----------------*Car Details*-----------------\n");
	printf("\t\tCar Name : Creta          	 \n");
	printf("\t\tModel No.: E    	 \n");
      //	printf("\t\tAge Limit: 18+  	         \n");
	printf("\t\tCar Type : manual  	 \n");
	printf("\t\tSeat Ava : 7 Seater   	 \n");
	printf("\t\tCar Color: blue   	 \n");
	printf("\t\tStorage  : 5 Bag           \n");
	printf("\t\tMileage  : 120 km/hr       \n");
	printf("\t\tFare     : 3500 rs per day \n");
		printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
       //	printf("Enter Customer Name:");
	//scanf("%s",&name);
	//printf("Enter fare of selected car:");
	//scanf("%d",&a);
	printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);

	a = 3500;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Cretabill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }

     }
     void i20()
     {
     printf("\t\t----------------*Car Details*-----------------\n");
	printf("\t\tCar Name : hyundai i20       \n");
	printf("\t\tModel No.: i20                \n");
     //	printf("\t\tAge Limit: 18+                \n");
	printf("\t\tCar Type : Manual             \n");
	printf("\t\tSeat Ava : 5 Seater           \n");
	printf("\t\tCar Color: White              \n");
	printf("\t\tStorage  : 3 Bag              \n");
	printf("\t\tMileage  : 110 km/hr          \n");
	printf("\t\tFare     : 3200 rs per day    \n");





		printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
	//printf("Enter Customer Name:");
       //	scanf("%s",&name);
	//printf("Enter fare of selected car:");
	//scanf("%d",&a);
	printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);

	a = 3200;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      i20bill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }
     }




void Benz250()
     {
	printf("\t\t--------------*Car Details*-------------------\n\n");
	printf("\t\t   Car Name : Benz250            \n");
	printf("\t\t   Model No.: 250d               \n");
      //	printf("\t\t||   Age Limit: 18+                ||\n");
	printf("\t\t   Car Type : Automatic          \n");
	printf("\t\t   Seat Ava : 4 Seater           \n");
	printf("\t\t   Car Color: Black              \n");
	printf("\t\t   Storage  : 3 Bag              \n");
	printf("\t\t   Mileage  : 120 km/hr          \n");
	printf("\t\t   Fare     : 3500 rs per day    \n\n");


		printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
	//printf("Enter Customer Name:");
	//scanf("%s",&name);
	//printf("Enter fare of selected car:");
	//scanf("%d",&a);
	printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);

	a = 3500;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Benz250bill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }

     }

void Benz350()
     {
	printf("\t\t--------------*Car Details*-------------------\n\n");
	printf("\t\t   Car Name : Benz350            \n");
	printf("\t\t   Model No.: 350d               \n");
      //	printf("\t\t||   Age Limit: 18+                ||\n");
	printf("\t\t   Car Type : Automatic          \n");
	printf("\t\t   Seat Ava : 4 Seater           \n");
	printf("\t\t   Car Color: White              \n");
	printf("\t\t   Storage  : 4 Bag              \n");
	printf("\t\t   Mileage  : 140 km/hr          \n");
	printf("\t\t   Fare     : 4000 rs per day    \n\n");


		printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
	//printf("Enter Customer Name:");
	//scanf("%s",&name);
	//printf("Enter fare of selected car:");
      //	scanf("%d",&a);
      printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);

      a = 4000;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Benz350bill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }

     }


void Nexon()
     {
	printf("\t\t--------------*Car Details*-------------------\n\n");
	printf("\t\t   Car Name : Tata Nexon         \n");
	printf("\t\t   Model No.: Nexon at           \n");
      //	printf("\t\t||   Age Limit: 18+                ||\n");
	printf("\t\t   Car Type : Manual             \n");
	printf("\t\t   Seat Ava : 5 Seater           \n");
	printf("\t\t   Car Color: Red                \n");
	printf("\t\t   Storage  : 3 Bag              \n");
	printf("\t\t   Mileage  : 100 km/hr          \n");
	printf("\t\t   Fare     : 3000 rs per day    \n\n");


		printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
       //	printf("Enter Customer Name:");
	//scanf("%s",&name);
       //	printf("Enter fare of selected car:");
       //	scanf("%d",&a);
       printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);

       a = 3000;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Nexonbill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }

     }


void Tiago()
     {
	printf("\t\t--------------*Car Details*-------------------\n\n");
	printf("\t\t   Car Name : Tata Tiago       \n");
	printf("\t\t   Model No.: Tiago            \n");
     //	printf("\t\t||   Age Limit: 18+              ||\n");
	printf("\t\t   Car Type : Manual           \n");
	printf("\t\t   Seat Ava : 5 Seater         \n");
	printf("\t\t   Car Color: White            \n");
	printf("\t\t   Storage  : 3 Bag            \n");
	printf("\t\t   Mileage  : 110 km/hr        \n");
	printf("\t\t   Fare     : 3000 rs per day  \n\n");


		printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
       //	printf("Enter Customer Name:");
	//scanf("%s",&name);
	//printf("Enter fare of selected car:");
	//scanf("%d",&a);
	printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);

	a = 3000;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Tiagobill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }

     }


void Amaze()
     {
	printf("\t\t--------------*Car Details*-------------------\n\n");
	printf("\t\t   Car Name : Honda Amaze  ||\n");
	printf("\t\t   Model No.: Amaze                 \n");
   //	printf("\t\t||   Age Limit: 18+                   ||\n");
	printf("\t\t   Car Type : Manual                \n");
	printf("\t\t   Seat Ava : 5 Seater              \n");
	printf("\t\t   Car Color: Red                   \n");
	printf("\t\t   Storage  : 3 Bag                 \n");
	printf("\t\t   Mileage  : 120 km/hr             \n");
	printf("\t\t   Fare     : 3000 rs per day       \n\n");

		printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
	//printf("Enter Customer Name:");
	//scanf("%s",&name);
       //	printf("Enter fare of selected car:");
	// scanf("%d",&a);
	printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);

	a = 3000;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Amazebill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }

     }


void Civic()
     {
	printf("\t\t--------------*Car Details*-------------------\n\n");
	printf("\t\t   Car Name : Honda Civic        \n");
	printf("\t\t   Model No.: Civic              \n");
	//printf("\t\t||   Age Limit: 18+                ||\n");
	printf("\t\t   Car Type : Manual             \n");
	printf("\t\t   Seat Ava : 5 Seater           \n");
	printf("\t\t   Car Color: White              \n");
	printf("\t\t   Storage  : 4 Bag              \n");
	printf("\t\t   Mileage  : 120 km/hr          \n");
	printf("\t\t   Fare     : 3200 rs per day    \n\n");
		printf("\n\n\tWanna Rent this car Please Enter details in below fields!!\n");
	printf("Enter Customer Invoice number:");
	scanf("%s",&invoice);
	printf("Enter Today Date in format DD-MM-YYYY:");
	scanf("%d%d%d",&d,&m,&y);
	//printf("Enter Customer Name:");
	//scanf("%s",&name);
       //	printf("Enter fare of selected car:");
       //	scanf("%d",&a);
       printf("Enter Customer First Name:");
	scanf("%s",&name);
	printf("Enter Customer Last  Name:");
	scanf("%s",l_name);

       a = 3200;
	printf("Enter rental days:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n\n\t Wanna Continue with this car Press y for YES or Press n for NO\n");
	   // printf("\n\t\t\t(y/n):");
	    if((c=getch()) == 'y')

	      Civicbill();

	      else if((c=getch()) == 'n'){
		login();

	       }
	       else {
		  system("cls");
		       login();



     }

     }

void Alturusbill()
{
//char x;
clrscr();
   //setbkcolor(GREEN);
   //setcolor(BLUE);
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                 \n",name,l_name);
	printf("\t\t   Car Name      : Alturus G4 4WD     \n");
	printf("\t\t   Model No.     : G4 4WD     	       \n");
       //	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Automatic  	       \n");
	printf("\t\t   Seat Ava      : 5 Seater   	       \n");
	printf("\t\t   Car Color     : Red   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 120 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");


      printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }

}


void Xuvbill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                \n",name,l_name);
	printf("\t\t   Car Name      : Xuv     \n");
	printf("\t\t   Model No.     : Xuv     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Automatic  	       \n");
	printf("\t\t   Seat Ava      : 5 Seater   	       \n");
	printf("\t\t   Car Color     : Red   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 120 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");




	       printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }



}

void Cretabill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                \n",name,l_name);
	printf("\t\t   Car Name      : Creta     \n");
	printf("\t\t   Model No.     : E     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Manual  	       \n");
	printf("\t\t   Seat Ava      : 7 Seater   	       \n");
	printf("\t\t   Car Color     : Blue   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 120 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");




	       printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }






}


void i20bill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                \n",name,l_name);
	printf("\t\t   Car Name      : hyundai i20     \n");
	printf("\t\t   Model No.     : i20     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : manual  	       \n");
	printf("\t\t   Seat Ava      : 5 Seater   	       \n");
	printf("\t\t   Car Color     : White   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 110 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");








	       printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }






}

void Benz250bill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                \n",name,l_name);
	printf("\t\t   Car Name      : Benz250     \n");
	printf("\t\t   Model No.     : 250d     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Automatic  	       \n");
	printf("\t\t   Seat Ava      : 4 Seater   	       \n");
	printf("\t\t   Car Color     : Black   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 120 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");




	 printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }




}
void Benz350bill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s               \n",name,l_name);
	printf("\t\t   Car Name      : Benz350     \n");
	printf("\t\t   Model No.     : 350d     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Automatic  	       \n");
	printf("\t\t   Seat Ava      : 4 Seater   	       \n");
	printf("\t\t   Car Color     : White   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 140 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");






	 printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }


}

void Nexonbill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                 \n",name,l_name);
	printf("\t\t   Car Name      : Tata Nexon     \n");
	printf("\t\t   Model No.     : Nexon at     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Manual  	       \n");
	printf("\t\t   Seat Ava      : 5 Seater   	       \n");
	printf("\t\t   Car Color     : Red   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 100 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");





	  printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }


}

void Tiagobill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                 \n",name,l_name);
	printf("\t\t   Car Name      : Tata Tiago      \n");
	printf("\t\t   Model No.     : Tiago     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Manual  	       \n");
	printf("\t\t   Seat Ava      : 5 Seater   	       \n");
	printf("\t\t   Car Color     : White   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 110 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");



	       printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }



}
void Amazebill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                 \n",name,l_name);
	printf("\t\t   Car Name      : Honda Amaze     \n");
	printf("\t\t   Model No.     : Amaze     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Manual  	       \n");
	printf("\t\t   Seat Ava      : 5 Seater   	       \n");
	printf("\t\t   Car Color     : Red   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 120 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");




	       printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }



}
void Civicbill()
{
clrscr();
	printf("\n\t\t-------*SELF DRIVEN RENT CAR*------\n");
	printf("\t\t-------*CUSTOMER INVOICE*------------\n");
	printf("\t\t+===================================+\n");
	printf("\t\t   Invoice No.   : %s               \n",invoice);
	printf("\t\t   Date          : %d-%d-%d         \n",d,m,y);
	printf("\t\t   Customer Name : %s %s                 \n",name,l_name);
	printf("\t\t   Car Name      : Honda Civic     \n");
	printf("\t\t   Model No.     : Civic     	       \n");
	printf("\t\t   Age Limit     : 18+  	       \n");
	printf("\t\t   Car Type      : Automatic  	       \n");
	printf("\t\t   Seat Ava      : 5 Seater   	       \n");
	printf("\t\t   Car Color     : White   	       \n");
       //printf("\t\t   Storage       : 7 Bag              \n");
	printf("\t\t   Mileage       : 120 km/hr          \n");
	printf("\t\t   Fare          : %d rs per day    \n",a);
	printf("\t\t   Rental days   : %d     \n",b);
	printf("\t\t   Total Fare    : %d                   \n ",mul);
	printf("\t\t+===================================+\n");
	printf("\t\t---*THANK YOU AND HAPPY JOURNEY*---\n\n");




	       printf("\n\n\n\n\tDo You wanna go Car Company selection or not ? (Y/N)");

      while(1)
      {
	x = getch();
	if(x == 'n' || x == 'N')
	{
		exit(0);
		break;
	}
	else if (x=='y' || x=='Y')
	{
		   display_menu();
		   break;
      }
 }



}

void Rules()
{
 printf("\n\n\t\t*Terms & Conditions*\n");
 printf("\n\n1.Eligibility Age.\n");
 printf("\n 2.If Vehicle Breakdown Anywhere That Case Self Driven Rent Car Not Responsible.\n");
 printf("\n 3.Time Start From Garage To Garage.\n");
 printf("\n 4.Toll Taxes,Parkings,State Taxes paid By Hirer.\n");
}