#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<dos.h>
#include<ctype.h>
#include<time.h>
#define MAX 50
#define LONG 1000


int menu(void);
void mainmenu(void);
void password(void) ;
void date();
void reg();
void dryclean(void);
void price_list(void);
void dryclean(void);
void option(void);
void admin(void);
void tsvaga(void);
void bhadhara(void);
void cash();
void collect();
void client();


struct reg
{
     char name[100];
     char surname[100];
     char gender[6];
     long int phonenumber[LONG];
     char email[100];
     long int num[100];

}g;

struct clothes
{
     int sno;
     char name[MAX];
     float price;
}v;


struct client
{
 char name[MAX];
 char sname[MAX];
 long int pnum[50];

}c;

int main()
{
    system("color A");
    date();
    mainmenu();
    getch();
    system("cls");
    menu();

    return 0;
}
void mainmenu()
{   printf("\n\n\n");
    printf("\t\t\###########################CLOTHING STORE############################\n");
    printf("\n\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\t\t  __________________________________________________________________ \n");
    printf("\t\t |                                                                  |  \n");
    printf("\t\t |                              TOWERNTER                           |  \n");
    printf("\t\t |                             DRY CLEANERS                         |  \n");
    printf("\t\t |__________________________________________________________________|  \n");
    printf("\t\t ___________________________________________________________________\n");
    printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    option();
}
int menu(void)

{
    int i;


    date();
    printf("\n\n\t\t\t_________________________________________________\n");
    printf("\n\t\t\t\tSELECT ONE OF THE FOLLOWING OPTIONS\n");
    printf("\t\t\t_________________________________________________\n\n");
    printf("\t\t\t\t1)Price lists\n\n");
    printf("\t\t\t\t2)Search items we dryclean here\n\n\t\t\t\t");
    printf("3)To return to the previous menu\n\n\t\t\t\t");
    printf("4)About the programme\n\t\t\t\t");
    scanf("%d",&i);
    switch(i)
    {

    case 1:
        system("cls");
        date();
        price_list();
        break;
    case 2:
        system("cls");
        date();
        tsvaga();
        getch();
        break;

    case 3:
        system("cls");
        date();
        mainmenu();
        option();
        break;

    case 4:
        system("cls");
        date();
        system("color 5B");
        printf("\n\nTHE PROGRAMME WAS DESIGNED BY : Towernter\n\t\t\t\t\n\t\t\t\t\n\t\t\t\t\n\nTHE PROGRAMME IS A C DRYCLEANING SYSTEM.");
        getch();
        break;
    default :
        system("cls");
        date();
        printf("\n\n\t\t\t\*******error invalid option!!!*******\n\t\t\tenter any key to return to the main menu\n\n\a");
        getch();
        system("cls");
        mainmenu();
        menu();
        break;
    }
}

 void date()
{
	time_t now;
	time (&now);
	printf("%s",ctime(&now));
}

void tsvaga(void)
 {
   date();
   FILE *fi,*fy;
   char a,m;
   char i_name[40];
   int iF=0,j=1;

   fi=fopen("cloths.dat","rb+");
   if(fi==NULL)
 {
   fi=fopen("cloths.dat","wb+");
   if(fi==NULL)
 {
    puts("\n Cannot open file");
    exit(1);
 }}
 system("color A");
      system("cls");
      a='Y';
      while(a=='Y'||a=='y')
 {
       printf("\nEnter name of item to search: ");
       scanf("%s",i_name);
       rewind(fi);
       while(fread(&v,sizeof(v),1,fi)==1)
 {
       if(strcmp(v.name,i_name)==0)
 {
       printf("\nName of the Item: ");
       puts(v.name);
       printf("\nPrice of drycleaning %s is: %.2f each",v.name,v.price);
 }

 {
       printf("\n_____________________________________________________");
       printf("\nSearch another clothe type(Y/N): ");
       fflush(stdin);
       a=getche();
       break;
  }}
 }}
 void collect()
 {
     FILE *f,*y;
   char a;
   char c_name[40];
   char c_sname[40];
   int iF=0,j=1,m;


   f=fopen("clients.dat","rb+");
   if(f==NULL)
 {
   f=fopen("clients.dat","wb+");
   if(f==NULL)
 {
    puts("\n Cannot open file");
    exit(1);
 }
 }
system("color A");
      system("cls");
      date();
      a='Y';
      while(a=='Y'||a=='y')
 {
      printf("\nEnter name of client: \n");
      scanf("%s",c_name);
      printf("Enter surname\n");
      scanf("%s",c_sname);
      y=fopen("delete.dat","wb+");
      rewind(f);
      while(fread(&c,sizeof(c),1,f)==1)
 {
      if((strcmp(c.name,c_name)&&strcmp(c.sname,c_sname))!=0)
      fwrite(&c,sizeof(c),1,f);
      else
      printf("\nclient %s %s has collectect successifuly.",c_name,c_sname);
 }

      fclose(f);
      fclose(y);
      remove("clients.dat");
      rename("delete.dat","clients.dat");
      f=fopen("clients.dat","rb+");
      printf("\n-----------------------------------------------\n");
      printf("\nAnyone to collect?(Y/N): ");
      fflush(stdin);
      a=getche();
      break;

 }
 }
  void reg()
  {
   FILE *f,*y;
   char a;
   char c_name[40];
   char c_sname[40];
   int iF=0,j=1,m;


   f=fopen("clients.dat","rb+");
   if(f==NULL)
 {
   f=fopen("clients.dat","wb+");
   if(f==NULL)
 {
    puts("\n Cannot open file");
    exit(1);
 }
 }
 system("color A");
    system("cls");
    date();
    fseek(f,0,SEEK_END);
    a='Y';
    while(a=='Y'||a=='y')
 {
     x:
     printf("\n\t\xB3\xB3\xB3\xB3\xB3 ENTER CLIENT'S DETAILS \xB3\xB3\xB3\xB3\xB3");
     printf("\n\n\nEnter Name:      ");
     scanf("%s",c_name);
     rewind(f);
       if(strcmp(c.name,c_name)==0)
 {
    iF=1;
    printf("\n\t");
    goto x;
 }
    if(iF==0||fread(&c,sizeof(c),1,f)==0)
 {
      fseek (f,0,SEEK_END);
      strcpy(c.name,c_name);
      fflush(stdin);
      printf("\nEnter Surname:      ");
      scanf("%s",c_sname);
      strcpy(c.sname,c_sname);
      printf("\nEnter phone number: ");
      scanf("%d",c.pnum);
      fwrite(&c,sizeof(c),2,f);
      printf("\n\npress enter to make payments");
      fflush(stdin);
      a=getche();
      fclose(f);

  }}}
  void client()
  {
    FILE *f,*y;
   char a;
   char c_name[40];
   int iF=0,j=1,m;


   f=fopen("clients.dat","rb+");
   if(f==NULL)
 {
   f=fopen("clients.dat","ab+");
   if(f==NULL)
 {
    puts("\n Cannot open file");
    exit(1);
 }
 }
 system("color A");
       system("cls");
       date();
       printf("\n\nNAME\t\t\t\tSURNAME\t\t\t\tPHONE NUMBER\n");
       rewind(f);
       fread(&c,sizeof(c),2,f);
       while(fread(&c,sizeof(c),2,f)==1)
 {
       printf("%s\t\t\t\t%s\t\t\t\t%d\n",c.name,c.sname,c.pnum);
       printf("________________________________________________________________________________________________\n");
       j++;
 }
       printf("\n\n\n\n\n\n\n\t\tPRESS ENTER TO RETURN TO MENU....");
       getch();
       fclose(f);




  }

  void bhadhara(void)
  {

      system("cls");
      date();
      cash();
      getch();
  }

  void cash()
  {


   FILE *fi,*fy;
   char a,m;
   char i_name[40];
   int iF=0,j=1,cnum;
   float amount=v.price*cnum;

   fi=fopen("cloths.dat","rb+");
   if(fi==NULL)
 {
   fi=fopen("cloths.dat","wb+");
   if(fi==NULL)
 {
    puts("\n Cannot open file");
    exit(1);
 }}
 system("color A");
      system("cls");
      date();
      a='Y';
      while(a=='Y'||a=='y')
 {
       printf("\nEnter type of clothes: ");
       scanf("%s",i_name);
       rewind(fi);
       while(fread(&v,sizeof(v),1,fi)==1)
 {
       if(strcmp(v.name,i_name)==0)
 {

       printf("\nHow many are they:  ");
       scanf("%d",&cnum);
       printf("\nTotal price of drycleaning %s is: $%.2f ",v.name,(v.price*cnum));
 }

 {
       printf("\n\nDyclean other clothes(Y/N): ");
       fflush(stdin);
       a=getche();
       break;
 }
 }
 }
 }

void dryclean(void)
{
    int z;
    printf("\n\n\t=================SELECT ONE OF THE FOLLOWING OPTIONS============\n\n");
    printf("\t\t\t\t1)INSTANT DRYCLEANING\n\n");
    printf("\t\t\t\t2)NORMAL DRYCLEANING \n\n");
    scanf("%d",&z);
    switch(z)
    {
    case 1:
        date();
        bhadhara();
        break;
    case 2:
        date();
         reg();
         bhadhara();
         getch();
        break;
    default :
        break;
    }



}
void price_list(void)
{
   date();
   FILE *fi,*fy;
   char a,m;
   char i_name[40];
   int iF=0,j=1;

   fi=fopen("cloths.dat","rb+");
   if(fi==NULL)
 {
   fi=fopen("cloths.dat","wb+");
   if(fi==NULL)
 {
    puts("\n Cannot open file");
    exit(1);
 }}

system("color A");
       system("cls");
       printf("CLOTHE TYPE\t\t\t\tPRICE EACH($)\n");
       printf("__________________________________________________________\n");
       rewind(fi);
       while(fread(&v,sizeof(v),1,fi)==1)
 {
       printf("%s\t\t\t\t\t%.2f\n",v.name,v.price);

       j++;
 }
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\tPRESS ENTER TO RETURN TO MENU....");
       getch();


}
void option(void)
{
    int t,r;
    printf("\t\t\t\t   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB3SELECT\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
    printf("\t\t\t\t\t    1.ADMIN\n\n\t\t\t\t\t    2.CLIENT\t\t\t\t\t\n");
    printf("\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n\t\t\t\t\t\t");
    scanf("%d",&r);
    switch(r)
   {

case 1:
    system("cls");
    password();
    admin();

    break;
    getch();
case 2:
    system("cls");
    menu();
    getch();
    break;
default:
    printf("*********************wrong input*****************!!!\n\a");
    printf("press enter to return to the main menu\n");
    getch();
    system("cls");
    date();
    mainmenu();
    option();
    getch();
    break;
   }
}
void password(void)
{
    system("COLOR A");
    char buffer[256] = {0};
    char password[] = "dryclean";
    char c;
    int pos = 0;

    time_t mytime;
    mytime = time(NULL);
    printf(ctime(&mytime));



    printf("\n\n\n\n\n\n\n\t\tENTER PASSWORD: ");
    do {
        c = getch();

        if( isprint(c) )
        {
            buffer[ pos++ ] = c;
            printf("%c", '*');
        }
        else if( c == 8 && pos )
        {
            buffer[ pos-- ] = '\0';
            printf("%s", "\b \b");
        }
    } while( c != 13 );

    if( !strcmp(buffer, password) )
    {
	system("cls");
	time_t mytime;
		mytime = time(NULL);
		printf(ctime(&mytime));



	printf("\n%s\n", "PASSWORD CORRECT");
        printf("\n\n\t\t\tLOGING IN...");
        Sleep(1000);
        system("cls");

    }
        else
    {
    	printf("\n%s\n\a", "INCORRECT PASSWORD!\n\a");
    	printf("exiting...");
    	getch();
        exit(1);
    }
 }

void admin(void)
 {
   FILE *fi,*fy;
   char a;
   char i_name[40];
   int iF=0,j=1,m;


   fi=fopen("cloths.dat","rb+");
   if(fi==NULL)
 {
   fi=fopen("cloths.dat","wb+");
   if(fi==NULL)
 {
    puts("\n Cannot open file");
    exit(1);
 }
 }

 while(1)
 {

    system("cls");
    date();
    printf("\t_______________________________________________");
    printf("\n\t\tSELECT ONE OF THE FOLLOWING OPTIONS\n");
    printf("\t_______________________________________________\n");
    printf("\n\n\t\t1)Add new type of clothe\n\t\t");
    printf("\n\n\t\t2)Modify existing type\n\t\t");
    printf("\n\n\t\t3)To search the clothes we dryclean\n\t\t");
    printf("\n\n\t\t4)List of clothes types and prices\n\t\t");
    printf("\n\n\t\t5)Remove clothes from dryclean list\n\t\t");
    printf("\n\n\t\t6)Dryclean clients clothes\n\t\t");
    printf("\n\n\t\t7)Check clients who have not make collections\n\t\t");
    printf("\n\n\t\t8)collections\n\t\t");



    fflush(stdin);
    scanf("%d",&m);

    switch(m)
 {

 case 1:
    system("color A");
    system("cls");
    date();
    fseek(fi,0,SEEK_END);
    a='Y';
    while(a=='Y'||a=='y')
 {
     x:
     printf("\n\n\nEnter type of clothes: ");
     scanf("%s",i_name);
     rewind(fi);
     while(fread(&v,sizeof(v),1,fi)==1)
 {

     if(strcmp(v.name,i_name)==0)
 {
    iF=1;
    printf("\n\t\tthe clothe type you entered is already being offered");
    goto x;
 }
 }
    if(iF==0||fread(&v,sizeof(v),1,fi)==0)
 {
      fseek (fi,0,SEEK_END);
      strcpy(v.name,i_name);
      fflush(stdin);
      printf("\nEnter the price of each clothe: ");
      scanf("%f",&v.price);
      printf("\nWe are now drycleaning %s ",v.name);

      fwrite(&v,sizeof(v),1,fi);
      printf("\n______________________________________________________");
      printf("\nWant to add another clothe type(Y/N): ");
      fflush(stdin);
      a=getche();
 }
 }
      break;
 case 2:
      system("color A");
      system("cls");
      date();
      a='Y';
      while(a=='Y'||a=='y')
 {
      printf("\nEnter type of clothe to modify: ");
      scanf("%s",i_name);
      rewind(fi);
      while(fread(&v,sizeof(v),1,fi)==1)
 {
      if(strcmp(v.name,i_name)==0)
 {
      fflush(stdin);
      printf("\nEnter the new name of the clothe: ");
      gets(v.name);
      printf("\nEnter the new price of One Item: ");
      scanf("%f",&v.price);
      printf("\nThe clothe type %s has been modified to %s",&i_name,v.name);

      fseek(fi,-sizeof(v),SEEK_CUR);
      fwrite(&v,sizeof(v),1,fi);
      break;
 }
 }
      printf("\n___________________________________________________");
      printf("\nModify another record ?(Y/N): ");
      fflush(stdin);
      a=getche();
 }
      break;

 case 3:
      system("color A");
      system("cls");
      date();
      a='Y';
      while(a=='Y'||a=='y')
 {
       printf("\nEnter name of item to search: ");
       gets(i_name);
       rewind(fi);
       while(fread(&v,sizeof(v),1,fi)==1)
 {
       if(strcmp(v.name,i_name)==0)
 {
       printf("\nName of the Item: ");
       puts(v.name);
       printf("\nPrice of drycleaning %s is: %.2f each",v.name,v.price);
 }
 }
       printf("\n_____________________________________________________");
       printf("\nSearch another clothe type(Y/N): ");
       fflush(stdin);
       a=getche();
 }
       break;

 case 4:
     system("color A");
       system("cls");
       date();
       printf("CLOTHE TYPE\t\t\t\tPRICE EACH($)\n");
       printf("__________________________________________________________\n");
       rewind(fi);
       while(fread(&v,sizeof(v),1,fi)==1)
 {
       printf("%s\t\t\t\t\t%.2f\n",v.name,v.price);
       j++;
 }
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tPRESS ENTER TO RETURN TO MENU....");
       getch();

       break;

 case 5:
      system("color A");
      system("cls");
      date();
      a='Y';
      while(a=='Y'||a=='y')
 {
      printf("\nEnter the type of clothe you want to remove from the dryclean list: \n");
      scanf("%s",i_name);
      fy=fopen("delete.dat","wb+");
      rewind(fi);
      while(fread(&v,sizeof(v),1,fi)==1)
 {
      if(strcmp(v.name,i_name)!=0)
      fwrite(&v,sizeof(v),1,fy);
      else
      printf("\nThe clothe type %s is no longer being drycleaned here.",i_name);
 }

      fclose(fi);
      fclose(fy);
      remove("cloths.dat");
      rename("delete.dat","cloths.dat");
      fi=fopen("cloths.dat","rb+");
      printf("\n-----------------------------------------------\n");
      printf("\nWant to remove another?(Y/N): ");
      fflush(stdin);
      a=getche();
      break;

}
 case 6:
     system("cls");
     date();
     dryclean();
     system("cls");
    break;
 case 7:
     system("cls");
     date();
     client();
     getch();
    break;
 case 8:
     system("cls");
     date();
     collect();
     getch();
    break;
 default :
    system("cls");
    mainmenu();
    menu();
    break;










 }}}













































