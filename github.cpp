#include  <stdio.h>
#include  <string.h>
void menu ();
void close ();
void close1 ();
void menu1 ();
struct date {
    int year;
    int month;
    int date;
};
struct 
{
    char name [100];
    int age;
    char address [500];
    double phone;
    double aadhar;
    char citizen [100];
    char sex [100];
    char accounttype[100];
    float amount;
    int accountno;
    struct date dob;
    struct date deposit;
    struct date withdraw;
    
    
}ad,upd,check,rem,transaction,saw;
float intrest (float tim,float rate,float amount)
{
    float SI=(rate*tim*amount)/100;
    return (SI);

    }

    void add ()
    {
    FILE *f;
    char a [100];
    int n4,n5,n6=0,n7;
    f=fopen ("/storage/emulated/0/bank.txt","w");
    printf ("\n\t\tENTER A TODAY DATE\n");
    scanf ("\n%d/%d/%d",&ad.deposit.date,&ad.deposit.month,&ad.deposit.year);
    printf ("\n\t\tENTER THE ACCOUNT NUMBER\n");
  //  try:
    printf ("\nYOUR ACCOUNT NUMBER ONLY CONTAINS 4 NUMBERS\n");
    scanf ("\n%d",&check.accountno);
    while (check.accountno!=0)
    {
        check.accountno=check.accountno/10;
        n6++;
    }
    
    
     if (n6==4)
    {
    while (fscanf (f,"name=%s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d", &ad.name, &ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,&ad.accounttype,&ad.amount,&ad.accountno)!=EOF)
    {
        if (check.accountno==ad.accountno)
        {
            printf ("\nTHIS ACCOUNT NUMBER ALREADY USE!");
            printf ("\nPLEASE USE DIFFRENT NUMBER");
            printf ("\nYOU CONTINUE PRESS 1\t\tMENU PRESS 2\t\tEXIT PRESS 3");
            scanf ("%d",&n4);
       /*     if (n4==1)
            {
                goto try;
            }*/
            if (n4==2)
            {
                menu ();
            }
            if (n4==3)
            {
                //printf ("exit");
                    close ();
            }
        }
        }
        
        
            ad.accountno=check.accountno;
            printf ("\n\t\tENTER YOUR NAME\n");
            scanf ("\n%s",&ad.name);
            printf ("\n\t\tENTER YOUR DOB\n");
            scanf ("\n%d/%d/%d",&ad.dob.date,&ad.dob.month,&ad.dob.year);
            printf ("\n\t\tENTER YOUR AGE\n");
            scanf("\n%d",&ad.age);
            printf ("\n\t\tENTER YOUR ADDRESS\n");
            scanf ("\n%s",&ad.address);
            printf ("\n\t\tENTER YOUR PHONE NUMBER\n");
            scanf ("\n%lf",&ad.phone);
            printf ("\n\t\tENTER YOUR AADAR NUMBER\n");
            scanf ("\n%lf",&ad.aadhar);
            printf ("\n\t\tENTER YOUR CITIZENSHIP\n");
            scanf ("\n%s",&ad.citizen);
            printf ("\n\t\tENTER MALE OR FEMALE\n");
            scanf ("\n%s",&ad.sex);
        printf ("\n\t\tACCOUNT TYPE ONLY TYPE \n1.fixed1\n2.fixed\n3.fixed3\n4.savings\n5.current\n");
        scanf ("\n%s",&ad.accounttype);
            printf ("\n\t\tHOW MUCH MONEY YOU DEPOSIT MINIMUM 500rs\n");
            scanf ("\n%f",&ad.amount);
        printf ("\n\t\tREPEAT ENTER YOUR ACCOUNT NUMBER\n");
        scanf ("\n%d",&ad.accountno);
   
            if (ad.amount>500)
            {
            if (ad.accountno==check.accountno)
            {
           fprintf(f," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex,ad.accounttype,ad.amount,ad.accountno);
                printf ("\n\t\nACCOUNT IS SUCCESSFULLY CREATED");
            }
            }
            
 
            if (ad.amount <500)
            {
            
                printf ("\n\t\nSORRY YOU CAN'T CREATE ACCOUNT MIN AMOUNT 500rs");
                }
            
    if (ad.accountno!=check.accountno)
            {
        printf ("\n\t\nSORRY YOU CAN'T CREATE ACCOUNT ACCOUNT DID N'T MATCH\n");
    }
            printf ("\nYOU GO TO MENU PRESS 1\n");
            printf ("\nYOU WANT TO EXIT PRESS 2\n");
            scanf("\n%d",&n5);
            if (n5==1)
            {
                menu ();
            }
            if (n5==2)
            {
                //printf ("\nexit");
            close ();
            }
        }
    if((n6>4)||(n6<4))
    {
        printf ("\n\nACCOUNT NO SHOULD HAVE A 4 LETTERS\n");
        printf ("\n\t\tMENU PRESS 1\n");
        printf ("\n\t\tEXIT PRESS 2\n");
        scanf ("\n%d",&n7);
        if (n7==1)
        {
            menu ();
        }
        if (n7==2)
        {
            close ();
        }
    }
        
        fclose (f);
    }
void update ()
{
    FILE *o,*n;
    int n8,n9,n10;
    int check2=0;
   
    o=fopen ("/storage/emulated/0/bank.txt","r");
    n=fopen ("/storage/emulated/0/bank1.txt","w");
   // try1:
    printf ("\nENTER YOUR ACCOUNT NUMBER\n");
    scanf ("\n%d",&upd.accountno);
    
    while (fscanf (o," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone=  %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,&ad.accounttype, &ad.amount,&ad.accountno)!=EOF)
    {
        if (ad.accountno==upd.accountno)
        {
            check2=1;
            
        printf ("\nYOU WANT TO CHANGE YOUR NAME PRESS 1\n");
    printf ("\nYOU WANT TO CHANGE YOUR ADDRESS PRESS 2\n" );
    printf ("\nYOU WANT TO CHANGE YOUR PHONE NUMBER PRESS 3\n");
    printf("\nYOU WANT TO CHANGE YOUR AADHAR PRESS 4\n");
    printf ("\nYOU WANT TO CHANGE YOUR ACCOUNT NUMBER PRESS 5\n");
    scanf ("\n%d",&n8);
    if (n8==1)
    {
        printf ("\nENTER YOUR NEW NAME\n");
        scanf ("%s",&upd.name);
        fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",upd.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\nSAVED SUCCESSFULLY\n");
    }
        if (n8==2)
        {
            printf ("\nENTER YOUR NEW ADDRESS\n");
            scanf ("%s",&upd.address);
            fprintf (n,"name=%s Dob=%d/%d/%d Age=%d Address=%s phone=%lf Aadhar=%lf Citizen=%s Sex=%s \n accounttype= %s Amount=%f Account no=%d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,upd.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\nSAVED SUCCESSFULLY\n");
        }
        if (n8==3)
        {
            printf ("\nENTER YOUR NEW PHONE NUMBER\n");
            scanf ("\n%lf",&upd.phone);
            fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,upd.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\n\t\tSAVED SUCCESSFULLY\n");
        }
        if (n8==4)
        {
            printf ("\nENTER YOUR NEW AADHAR ID NUMBER\n");
            scanf ("%lf",&upd.aadhar);
            fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s  \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,upd.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\n\t\tSAVED SUCCESSFULLY\n");
        }
        if (n8==5)
        {
            printf ("\nENTER YOUR NEW ACCOUND NUMBER\n" );
            scanf ("%lf",&upd.accountno);
            fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype,  ad.amount,ad.accountno);
            printf ("\n\t\tSAVED SUCCESSFULLY\n");
        }
            else
            {
                fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            }
            }
        }
        fclose (o);
    fclose (n);
   remove ("bank.txt");
    rename ("bank1.txt","bank.txt");
        if (check2!=1)
        {
            printf ("\n\t\tRECORDS NOT FOUND\n" );
        printf("\nAGAIN TRY PRESS 1");
            printf ("\nGO TO MENU PRESS 2\n");
            printf ("\nGO TO EXIT PRESS 3\n");
        
            scanf ("\n%d",&n10);
            if (n10==2)
            {
                menu ();
            }
            if (n10==3)
            {
                //printf ("\nexit");
            close ();
            }
            if (n10==1)
        {
            update ();
       // goto try1;
    }
        }
        
        
    
    
    else
        {
           
            printf ("\n\t\tGO TO MENU PRESS 1\n");
            printf ("\n\t\tGO TO EXIT PRESS 2\n");
            scanf ("\n%d",&n9);
            if (n9==1)
            {
                menu ();
            }
            if (n9==2)
            {
                close ();
            }
        }
}
void view ()
{
    FILE *f;
    int check1=0;
    int n11,n12;
   clrscr ();
    f=fopen ("/storage/emulated/0/bank.c","r");
   // try2:
    printf ("\n\t\tENTER YOUR ACCOUNT NUMBER\n");
    scanf ("\n%d",&rem.accountno);
    while(fscanf (f," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,&ad.accounttype,ad.amount ,&ad.accountno)!=EOF)
    {

      
        if (ad.accountno==rem.accountno)
        {
            check1=1;
        printf ( " name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d", ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype,ad.amount ,ad.accountno );
            
            }
            
    }
    fclose (f);
    if (check1!=1)
    {
    printf ("\n\t\tNO RECORDS FOUND\n");

   printf ("\nAGAIN TRY PRESS 1\n");
    printf ("\nDO YOU WANT TO GO MENU PRESS 2\n");
    printf ("\nDO YOU WANT TO GO EXIT PRESS 3\n" );
    scanf ("\n%d",&n11);
        if (n11==1)
        {
            view ();
       // goto try2;
    }
    if (n11==2)
    {
        menu ();
    }
    if (n11==3)
    {
    close ();
            }
}
    else
{
        printf ("\n\t\tDO WANT GO MENU PRESS 1\n");
        printf ("\n\t\tDO WANT EXIT PRESS 2\n");
        scanf ("%d",&n12);
        if (n12==1)
        {
        menu ();
            
    }
        if (n12==2)
        {
            close ();
       // printf ("\nEXIT");
    }
    }
}
void transaction1 ()
{
    FILE *o,*n;
    int n14,n15,n13;
    int check3=0;
    o=fopen ("/storage/emulated/0/bank.txt","r");
    n=fopen ("/storage/emulated/0/bank1.txt","w");
    //try3:
    printf ("\n\t\tENTER THE ACCOUNT NUMBER\n");
    scanf ("\n%d",&transaction.accountno);
    while (fscanf(o," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,& ad.accounttype ,&ad.amount,&ad.accountno)!=EOF)
    {
        //if ( transaction.accountno==1 )
        if (ad.  accountno==transaction.accountno)
        {
            check3=1;
            printf ("\nMONEY DEPOSIT PRESS 1\n");
            printf ("\nMONEY WITHDRAW PRESS 2\n");
            printf ("\nBALANCE ENQUIRY PRESS 3\n");
            scanf ("\n%d",&n13);
            if (n13==1)
            {
                printf ("\nHOW MANY AMOUNT DEPOSIT");
                scanf ("%f",&transaction.amount);
                ad.amount=ad.amount+transaction.amount;
                fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
                printf ("\n\t\tAMOUNT SUCCESSFULLY DEPOSIT\n");
            }
            if (n13==2)
            {
            printf ("\n\t\tHOW MANY AMOUNT WITHDRAW");
                scanf ("\n%f",&transaction.amount);
                ad.amount=ad.amount-transaction.amount;
                fprintf (n," name= %s \n dob= %d/%d/%d \n dob= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
                printf ("\n\t\tAMOUNT SUCCESSFULLY WITHDRAW\n");
        }
            if (n13==3)
            {
                printf ("%f",ad.amount);
                printf ("\n\t\tTHIS IS YOUR MONEY ENJOY IT\n");
            }
            
        }
        
    }
        
    
    fclose (o);
    fclose (n);
    remove ("bank.txt");
    rename ("bank1.txt","bank.txt");
    if (check3!=1)
        {
            fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
        printf ("\n\t\tRECORS NOT FOUND\n");
        printf ("\nAGAIN TRY PRESS 1\n");
            printf ("\nGO MENU PRESS 2\n");
    printf ("\nGO TO EXIT PRESS 3\n");
            scanf ("%d",&n14);
        if (n14==1)
        {
           transaction1 ();
        }
            if (n14==2)
            {
            menu ();
                
        }
            if (n14==3)
            {
            close ();
           // printf ("\nEXIT");
        }
    }
        
    
    else
    {
    printf ("\n\t\tGO TO MENU PRESS 1\n");
        printf ("\n\t\tGO TO EXIT PRESS 2\n");
        scanf("\n%d",&n15);
        if (n15==1)
        {
        menu ();
    }
        if (n15==2)
        {
        close ();
    }
}

    }
void erase ()
{
    FILE *o,*n;
    int n15,n16;
    int check5;
    o=fopen ("/storage/emulated/0/bank.txt","r");
    n=fopen ("/storage/emulated/0/bank1.txt","w");
    //try5:
    printf ("\n\t\tENTER YOUR ACCOUNT NUMBER YOU GO DELETE YOUR ACCOUNT\n");
    scanf ("\n%d",&rem.accountno);
    getchar ();
    while (fscanf (o," name= %d \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,& ad.accounttype ,&ad.amount,&ad.accountno))
    {
   if (ad.accountno==rem.accountno)
        {
                       fprintf (n, " name= %d \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\n\t\tACCOUNT COULD N'T DELETED\n");
    
            }
            

   else
            {
        check5++;
        }
    }
    fclose (o);
    fclose (n);
    remove ("bank.txt");
    rename ("bank1.txt","bank.txt");
    if (check5==0)
    {
    printf ("\n\t\tACCOUNT COULD N'T DELETED\n");
        printf ("\n\t\tRECORD NOT FOUND!!!\n");
       // printf ("\nAGIN TRY PRESS 1\n");
printf ("\nAGAIN TRY PRESS 1\n");
    printf ("\nGO TO MENU PRESS 2\n");
    printf ("\nGO TO EXIT PRESS 3\n");
        scanf ("%d",&n15);
        
        if (n15==1)
        {
            erase ();
       // goto try5;
    }
    if (n15==2)
    {
        menu ();
    }
    if (n15==3)
    {
    close ();
            }
}
    if (check5>0)
    {
        printf ("\n\t\tACCOUNT SUCCESSFULY DELETED \n");
        printf ("\n\t\tGO TO MENU PRESS 1\n");
    printf ("\n\t\tGO TO EXIT PRESS 2\n");
        scanf ("%d",&n16);
    if (n16==1)
    {
        menu ();
    }
    if (n16==2)
    {
    close ();
            }

        }

    }
void see (void)
{
    FILE *o,*n;
    int n16;
    int tim;
    int rate;
    int o2;
    int Intr=0;
    int check6=0;
    o=fopen ("/storage/emulated/0/bank.txt","r");
    n=fopen ("/storage/emulated/0/bank1.txt","w");
    printf ("\n\t\tENTER YOUR ACCOUNT NUMBER\n");
    try6:
    scanf ("\n%d",&saw.accountno);
    while (fscanf (o,"name=%d\n dob=%d/%d/%d \nage=%d \naddress=%s \nphone=%lf \naadhar=%lf \ncitizen=%s\n sex=%s\n accounttype=%s \namount=%f\n accountno=%d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,& ad.accounttype ,&ad.amount,&ad.accountno ))
    {
        if (ad.accountno==saw.accountno)
        {
            check6=1;
            fprintf (n, " name= %d \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
        if (strcmp (ad.accounttype,"fixed1")==0)
            {
            tim=1.0;
                rate=9;
                Intr=intrest (tim,ad.amount,rate);
                printf ("\nTHIS IS YOUR INTREST\n");
                printf ("%f",Intr);
        }
            else if (strcmp (ad.accounttype,"fixed2")==0)
            {
            tim=2.0;
                rate=11;
                Intr=intrest (tim,ad.amount,rate);
                printf ("\nTHIS IS YOUR INTREST\n");
printf ("%f",Intr);
        }
            else if (strcmp (ad.accounttype,"fixed3")==0)
            {
            tim=3.0;
                rate=13;
                Intr=intrest (tim,ad.amount,rate);
                printf ("\nTHIS IS YOUR INTREST\n");
                printf ("%f",Intr);
                
        }
            else if (strcmp (ad.accounttype,"savings")==0)
            {
            rate=8;
                tim =(1.0/12.0);
                Intr=intrest (tim,ad.amount,rate);
                printf ("\nTHIS IS YOUR INTREST\n");
                printf ("%f",Intr);
        }
            else if (strcmp (ad.accounttype,"current")==0)
            {
            printf ("\n\t\tSORRY CURRENT FOR NO INTREST\n");
        }
            
        }
        }
    
        fclose (o);
        fclose (n);
    remove ("bank.txt");
    rename ("bank1.txt","bank.txt");
if (check6!=1)
            {
            printf ("\n\t\tWE CANN'T FIND YOUR ACCOUNT TYPE\n");
        printf ("\nAGIN TRY PRESS 1\n");
                printf ("\nGO TO MENU PRESS 2\n");
                printf ("\nGO TO EXIT PRESS 3\n");
                scanf ("%d",&n16);
        if (n16==1)
        {
        goto try6;
    }
                if (n16==2)
                {
                menu ();
            }
                if (n16==3)
                {
              //  printf ("\nEXIT\n");
                   close ();
            }
}
    else
    {
    printf ("\n\t\tGO TO MENU PRESS 1\n");
        printf ("\n\t\tGO TO CLOSE PRESS 2\n");
        scanf ("\n%d",&o2);
        if (o2==1)
        {
        menu ();
    }
        if (o2==2)
        {
            close ();
        }
}
    }
void add1 ()
    {
    FILE *f;
    char a [100];
    int n4,n5,n6=0,n7;
    f=fopen ("/storage/emulated/0/bank.txt","w");
    printf ("\n\t\tஇன்றைய காலத்தை பதிவு செய்ய DD/DM/YY\n");
    scanf ("\n%d/%d/%d",&ad.deposit.date,&ad.deposit.month,&ad.deposit.year);
    printf ("\n\t\tவங்கி எண் பதிவு செய்யவும்\n");
  //  try:
    printf ("\nவங்கி எண் 4 எண் இருக்க வேண்டும்\n");
    scanf ("\n%d",&check.accountno);
    while (check.accountno!=0)
    {
        check.accountno=check.accountno/10;
        n6++;
    }
    
    
     if (n6==4)
    {
    while (fscanf (f,"name=%s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d", &ad.name, &ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,&ad.accounttype,&ad.amount,&ad.accountno)!=EOF)
    {
        if (check.accountno==ad.accountno)
        {
            printf ("\nஇந்த எண் முன்னாடி பயன்படுத்தப்ட்டுள்ளது!");
            printf ("\nவேற எண் பதிவு செய்யவும்\n");
            printf ("\n\t\t நுழைவுக்கு செல்ல 2ஐ அழுத்தவும் \t\t\n வெளியில் செல்ல 3ஐ அழுத்தவும் ");
            scanf ("%d",&n4);
       /*     if (n4==1)
            {
                goto try;
            }*/
            if (n4==2)
            {
                menu1 ();
            }
            if (n4==3)
            {
                //printf ("exit");
                    close1 ();
            }
        }
        }
        
        
            ad.accountno=check.accountno;
            printf ("\n\t\tபெயரை பதிவு செய்யவும்\n");
            scanf ("\n%s",&ad.name);
            printf ("\n\t\tபிறப்பை பதிவு செய்யவும் DD/DM/YY\n");
            scanf ("\n%d/%d/%d",&ad.dob.date,&ad.dob.month,&ad.dob.year);
            printf ("\n\t\tவயதை பதிவு செய்யவும்\n");
            scanf("\n%d",&ad.age);
            printf ("\n\t\tஇடத்தை பதிவு செய்யவும்\n");
            scanf ("\n%s",&ad.address);
            printf ("\n\t\tதொலைபேசி எண் பதிவு செய்யவும்\n");
            scanf ("\n%lf",&ad.phone);
            printf ("\n\t\tஆதார் எண் பதிவு செய்யவும்\n");
            scanf ("\n%lf",&ad.aadhar);
            printf ("\n\t\tநாட்டை பதிவு செய்யவும்\n");
            scanf ("\n%s",&ad.citizen);
            printf ("\n\t\tஆண் அல்லது பெண்\n");
            scanf ("\n%s",&ad.sex);
        printf ("\n\t\tஎந்த வங்கி கணக்கு \n1.fixed1\n2.fixed\n3.fixed3\n4.savings\n5.current\n");
        scanf ("\n%s",&ad.accounttype);
            printf ("\n\t\tபணம் செலுத்த குறைநகுறைந்தபட்சம் 500ரு\n");
            scanf ("\n%f",&ad.amount);
        printf ("\n\t\tமீண்டும் வங்கி எண்ணை  பதிவு செய்யவும்\n");
        scanf ("\n%d",&ad.accountno);
   
            if (ad.amount>500)
            {
            if (ad.accountno==check.accountno)
            {
           fprintf(f," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex,ad.accounttype,ad.amount,ad.accountno);
                printf ("\n\t\nவங்கி கணக்கு தொடங்கப்பட்டது\n");
            }
            }
            
 
            if (ad.amount <500)
            {
            
                printf ("\nகுறைந்தபட்ச தொகை 500ரூ\n");
                }
            
    if (ad.accountno!=check.accountno)
            {
        printf ("\n\t\n வங்கி எண் பொருந்தவில்லை\n");
    }
            printf ("\n நுழைவுக்கு செல்ல 1ஐ அழுத்தவும் \n");
            printf ("\n வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
            scanf("\n%d",&n5);
            if (n5==1)
            {
                menu1 ();
            }
            if (n5==2)
            {
                //printf ("\nexit");
            close1 ();
            }
        }
    if((n6>4)||(n6<4))
    {
        printf ("\n\nவங்கி எண் 4 எண் இருக்க வேண்டும்\n");
        printf ("\n\t\t நுழைவுக்கு செல்ல 1ஐ அழுத்தவும் \n");
        printf ("\n\t\t வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
        scanf ("\n%d",&n7);
        if (n7==1)
        {
            menu1 ();
        }
        if (n7==2)
        {
            close1 ();
        }
    }
        
        fclose (f);
    }
void update1 ()
{
    FILE *o,*n;
    int n8,n9,n10;
    int check2=0;
   
    o=fopen ("/storage/emulated/0/bank.txt","r");
    n=fopen ("/storage/emulated/0/bank1.txt","w");
   // try1:
    printf ("\nவங்கி எண் பதிவு செய்ய \n");
    scanf ("\n%d",&upd.accountno);
    
    while (fscanf (o," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone=  %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,&ad.accounttype, &ad.amount,&ad.accountno)!=EOF)
    {
        if (ad.accountno==upd.accountno)
        {
            check2=1;
            
        printf ("\nபெயர் மாற்ற 1ஐ அழுத்தவும் \n");
    printf ("\nஇடம் மாற்ற 2ஐ அழுத்தவும் \n" );
    printf ("\nதொலைபேசி எண்ணை மாற்ற 3ஐ அழுத்தவும் \n");
    printf("\nஆதார் எண் மாற்ற 4ஐ அழுத்தவும் \n");
    printf ("\nவங்கிஎண் மாற்ற 5ஐ அழுத்தவும் \n");
    scanf ("\n%d",&n8);
    if (n8==1)
    {
        printf ("\nபுதிய பெயர் பதிவு செய்ய\n");
        scanf ("%s",&upd.name);
        fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",upd.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\nn சேகரித்து ப்பட்டது\n");
    }
        if (n8==2)
        {
            printf ("\nபுதிய விவரத்தை பதிவு செய்ய\n");
            scanf ("%s",&upd.address);
            fprintf (n,"name=%s Dob=%d/%d/%d Age=%d Address=%s phone=%lf Aadhar=%lf Citizen=%s Sex=%s \n accounttype= %s Amount=%f Account no=%d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,upd.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\nசேகரிக்கப்பட்டது\n");
        }
        if (n8==3)
        {
            printf ("\n புதிய தொலைபேசி எண்ணை பதிவு செய்ய \n");
            scanf ("\n%lf",&upd.phone);
            fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,upd.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\n\t\tசேகரிக்கப்பட்டது\n");
        }
        if (n8==4)
        {
            printf ("\nபுதிய ஆதார் எண்ணை பதிவு செய்ய\n");
            scanf ("%lf",&upd.aadhar);
            fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s  \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,upd.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\n\t\tசேகரிக்கப்பட்டது\n");
        }
        if (n8==5)
        {
            printf ("\nபுதிய வங்கி  எண்ணை பதிவு செய்ய \n" );
            scanf ("%lf",&upd.accountno);
            fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype,  ad.amount,ad.accountno);
            printf ("\n\t\tசேகரிக்கப்பட்டது\n");
        }
            else
            {
                fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            }
            }
        }
        fclose (o);
    fclose (n);
   remove ("bank.txt");
    rename ("bank1.txt","bank.txt");
        if (check2!=1)
        {
            printf ("\n\t\t எங்களால் உங்கள் விவரங்களை காண இயலவில்லை \n" );
        printf("\n மீண்டும் பதிவிட 1ஐ அழுத்தவும்\n ");
            printf ("\nநுழைவுக்கு செல்ல 2ஐ அழுத்தவும் \n");
            printf ("\nவெளியில் செல்ல 3ஐ அழுத்தவும் \n");
        
            scanf ("\n%d",&n10);
            if (n10==2)
            {
                menu ();
            }
            if (n10==3)
            {
                //printf ("\nexit");
            close ();
            }
            if (n10==1)
        {
            update ();
       // goto try1;
    }
        }
        
        
    
    
    else
        {
           
            printf ("\n\t\t நுழைவுக்கு செல்ல 1ஐ அழுத்தவும் \n");
            printf ("\n\t\t வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
            scanf ("\n%d",&n9);
            if (n9==1)
            {
                menu1 ();
            }
            if (n9==2)
            {
                close1 ();
            }
        }
}
void view1()
{
    FILE *f;
    int check1=0;
    int n11,n12;
   clrscr ();
    f=fopen ("/storage/emulated/0/bank.c","r");
   // try2:
    printf ("\n\t\tவங்கி எண்ணை பதிவு செய்யவும்\n");
    scanf ("\n%d",&rem.accountno);
    while(fscanf (f," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,&ad.accounttype,ad.amount ,&ad.accountno)!=EOF)
    {

      
        if (ad.accountno==rem.accountno)
        {
            check1=1;
        printf ( " name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d", ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype,ad.amount ,ad.accountno );
            
            }
            
    }
    fclose (f);
    if (check1!=1)
    {
    printf ("\n\t\t எங்களால் உங்கள் விவரங்களை காண இயலவில்லை \n");

   printf ("\n மீண்டும் பதிவிட 1ஐ அழுத்தவும் \n");
    printf ("\nநுழைவுக்கு செல்ல 2ஐ அழுத்தவும் \n");
    printf ("\n வெளியில் செல்ல 3ஐ அழுத்தவும் \n" );
    scanf ("\n%d",&n11);
        if (n11==1)
        {
            view1 ();
       // goto try2;
    }
    if (n11==2)
    {
        menu1 ();
    }
    if (n11==3)
    {
    close1 ();
            }
}
    else
{
        printf ("\n\t\t நுழைவுக்கு செல்ல 1ஐ அழுத்தவும் \n");
        printf ("\n\t\t வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
        scanf ("%d",&n12);
        if (n12==1)
        {
        menu1 ();
            
    }
        if (n12==2)
        {
       close1 ();
    }
    }
}
void transaction2 ()
{
    FILE *o,*n;
    int n14,n15,n13;
    int check3=0;
    o=fopen ("/storage/emulated/0/bank.txt","r");
    n=fopen ("/storage/emulated/0/bank1.txt","w");
    //try3:
    printf ("\n\t\tவங்கி எண் பதிவு செய்யவும்\n");
    scanf ("\n%d",&transaction.accountno);
    while (fscanf(o," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,& ad.accounttype ,&ad.amount,&ad.accountno)!=EOF)
    {
        //if ( transaction.accountno==1 )
        if (ad.  accountno==transaction.accountno)
        {
            check3=1;
            printf ("\nபணம் பதிவிட 1ஐ அழுத்தவும் \n");
            printf ("\nபணம் எடஎடுக்2ஐ அழுத்தவும் \n");
            printf ("\nபணம் பார்க்க 3ஐ அழுத்தவும் \n");
            scanf ("\n%d",&n13);
            if (n13==1)
            {
                printf ("\n எவ்வளவு பணம் பதிவு செய்ய ");
                scanf ("%f",&transaction.amount);
                ad.amount=ad.amount+transaction.amount;
                fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
                printf ("\n\t\t பணம் பதிவு செய்யப்பட்டுள்ளது \n");
            }
            if (n13==2)
            {
            printf ("\n\t\tஎவ்வளவு பணம்  எடுக்க ");
                scanf ("\n%f",&transaction.amount);
                ad.amount=ad.amount-transaction.amount;
                fprintf (n," name= %s \n dob= %d/%d/%d \n dob= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
                printf ("\n\t\tபணம் எடுக்கப்பட்டது\n");
        }
            if (n13==3)
            {
                printf ("%f",ad.amount);
                printf ("\n\t\tஇது தான் உங்கள் பணம்\n");
            }
            
        }
        
    }
        
    
    fclose (o);
    fclose (n);
    remove ("bank.txt");
    rename ("bank1.txt","bank.txt");
    if (check3!=1)
        {
            fprintf (n," name= %s \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
        printf ("\n\t\t எங்களால் உங்கள் விவரங்களை காண இயலவில்லை \n");
        printf ("\n மீண்டும் பதிவிட 1ஐ அழுத்தவும் \n");
            printf ("\n நுழைவுக்கு செல்ல 2ஐ அழுத்தவும் \n");
    printf ("\n வெளியில் செல்ல 3ஐ அழுத்தவும் \n");
            scanf ("%d",&n14);
        if (n14==1)
        {
           transaction1 ();
        }
            if (n14==2)
            {
            menu ();
                
        }
            if (n14==3)
            {
            close1 ();
        }
    }
        
    
    else
    {
    printf ("\n\t\t நுழைவுக்கு செல்ல 1ஐ அழுத்தவும் \n");
        printf ("\n\t\t வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
        scanf("\n%d",&n15);
        if (n15==1)
        {
        menu1 ();
    }
        if (n15==2)
        {
      //  printf ("\nexit");
            close1 ();
    }
}

    }
void erase1 ()
{
    FILE *o,*n;
    int n15,n16;
    int check5;
    o=fopen ("/storage/emulated/0/bank.txt","r");
    n=fopen ("/storage/emulated/0/bank1.txt","w");
    //try5:
    printf ("\n\t\t உங்கள் வங்கி  எண்ணை பதிவு செய்யவும்\n");
    scanf ("\n%d",&rem.accountno);
    getchar ();
    while (fscanf (o," name= %d \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,& ad.accounttype ,&ad.amount,&ad.accountno))
    {
   if (ad.accountno==rem.accountno)
        {
                       fprintf (n, " name= %d \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
            printf ("\n\t\t உங்கள் கணக்கு நீக்கம் செய்யசெய்யவில்லை \n");
    
            }
            

   else
            {
        check5++;
        }
    }
    fclose (o);
    fclose (n);
    remove ("bank.txt");
    rename ("bank1.txt","bank.txt");
    if (check5==0)
    {
    printf ("\n\t\tஉங்கள் கணக்கு நீக்கம் செய்யவில்லை \n");
        printf ("\n\t\tஎங்களால் உங்கள் விவரங்களை காண இயலவில்லை !!!\n");
       // printf ("\nAGIN TRY PRESS 1\n");
printf ("\n மீண்டும் பதிவிட 1ஐ அழுத்தவும் \n");
    printf ("\n நுழைவுக்கு செல்ல 2ஐ அழுத்தவும் \n");
    printf ("\n வெளியில் செல்ல 3ஐ அழுத்தவும் \n");
        scanf ("%d",&n15);
        
        if (n15==1)
        {
            erase1 ();
       // goto try5;
    }
    if (n15==2)
    {
        menu1 ();
    }
    if (n15==3)
    {
    close1 ();
            }
}
    if (check5>0)
    {
        printf ("\n\t\t உங்கள் கணக்கு நீக்கப்பட்டது  \n");
        printf ("\n\t\t நுழைவுக்கு செல்ல 1ஐ அழுத்தவும் \n");
    printf ("\n\t\t வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
        scanf ("%d",&n16);
    if (n16==1)
    {
        menu1 ();
    }
    if (n16==2)
    {
    close1 ();
            }

        }

    }
void see1 (void)
{
    FILE *o,*n;
    int n16;
    int tim;
    int rate;
    int o2;
    int Intr=0;
    int check6=0;
    o=fopen ("/storage/emulated/0/bank.txt","r");
    n=fopen ("/storage/emulated/0/bank1.txt","w");
    printf ("\n\t\tt உங்கள் வங்கி எண்ணை பதிவு செய்யவும்\n");
    try6:
    scanf ("\n%d",&saw.accountno);
    while (fscanf (o,"name=%d\n dob=%d/%d/%d \nage=%d \naddress=%s \nphone=%lf \naadhar=%lf \ncitizen=%s\n sex=%s\n accounttype=%s \namount=%f\n accountno=%d",&ad.name,&ad.dob.date,&ad.dob.month,&ad.dob.year,&ad.age,&ad.address,&ad.phone,&ad.aadhar,&ad.citizen,&ad.sex,& ad.accounttype ,&ad.amount,&ad.accountno ))
    {
        if (ad.accountno==saw.accountno)
        {
            check6=1;
            fprintf (n, " name= %d \n dob= %d/%d/%d \nage= %d \naddress= %s \nphone= %lf \naadhar= %lf \ncitizen= %s \n sex= %s \n accounttype= %s \namount= %f \n accountno= %d",ad.name,ad.dob.date,ad.dob.month,ad.dob.year,ad.age,ad.address,ad.phone,ad.aadhar,ad.citizen,ad.sex, ad.accounttype ,ad.amount,ad.accountno);
        if (strcmp (ad.accounttype,"fixed1")==0)
            {
            tim=1.0;
                rate=9;
                Intr=intrest (tim,ad.amount,rate);
                printf ("\n இது தான் உங்கள் வட்டி \n");
                printf ("%f",Intr);
        }
            else if (strcmp (ad.accounttype,"fixed2")==0)
            {
            tim=2.0;
                rate=11;
                Intr=intrest (tim,ad.amount,rate);
                printf ("\nஇது தான் உங்கள் வட்டி \n");
printf ("%f",Intr);
        }
            else if (strcmp (ad.accounttype,"fixed3")==0)
            {
            tim=3.0;
                rate=13;
                Intr=intrest (tim,ad.amount,rate);
                printf ("\nஇது தான் உங்கள் வட்டி \n");
                printf ("%f",Intr);
                
        }
            else if (strcmp (ad.accounttype,"savings")==0)
            {
            rate=8;
                tim =(1.0/12.0);
                Intr=intrest (tim,ad.amount,rate);
                printf ("\nஇது தான் உங்கள் வட்டி\n");
                printf ("%f",Intr);
        }
            else if (strcmp (ad.accounttype,"current")==0)
            {
            printf ("\n\t\tஉங்களுக்கு வட்டி கிடையாது \n");
        }
        }
        }
    
        fclose (o);
        fclose (n);
    remove ("bank.txt");
    rename ("bank1.txt","bank.txt");
if (check6!=1)
            {
            printf ("\n\t\tஎங்களால் உங்கள் விவரங்களை காண இயலவில்லை \n");
        printf ("\n மீண்டும் பதிவிட 1ஐ அழுத்தவும் \n");
                printf ("\n நுழைவுககு செல்ல 2ஐ அழுத்தவும் \n");
                printf ("\n வெளியில் செல்ல 3ஐ அழுத்தவும் \n");
                scanf ("%d",&n16);
        if (n16==1)
        {
        goto try6;
    }
                if (n16==2)
                {
                menu ();
            }
                if (n16==3)
                {
              //  printf ("\nEXIT\n");
                   close ();
            }
}
    else
    {
    printf ("\n\t\tநுழைவுக்கு செல்ல 1ஐ அழுத்தவும்\n");
        printf ("\n\t\t வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
        scanf ("\n%d",&o2);
        if (o2==1)
        {
        menu1 ();
    }
        if (o2==2)
        {
            close1 ();
        }
}
    }
void close ()
{
    printf ("\n\n\n\t\tTHIS SOFTWARE WAS CREATED BY D.KALEESWARAN 2018\n");

    }
void close1 ()
{
printf ("\n\n\n\t\tஇந்த மென்பொருளை உருவாக்கியவர் து.காளீஸ்வரன்");
 }
void menu ()
{
    int n4;
    printf ("\n\t\t\tWELCOME TO THE BANK MANAGEMENT SYSTEM\n");
    printf ("\nCREAT ACCOUNT PRESS 1\n");
    printf ("\nUPDATE YOUR ACCOUNT DETAILS PRESS 2\n");
    printf ("\nVIEW YOUR DETAILS PRESS 3\n");
    printf ("\nMONEY TRANSACTION PRESS 4\n");
    printf ("\nERASE YOUR ACCOUNT PRESS 5\n");
    printf ("\nCHECK HOW MUCH INTREST YOU HAVE PRESS 6\n");
    printf ("\nDO YOU WANT TO CLOSE PRESS 7\n");
    scanf ("\n%d",&n4);
    switch(n4)
    {
        case 1:
        add ();
        break;
        case 2:
        update ();
        break;
        case 3:
        view ();
        break;
        case 4:
        transaction1 ();
        break;
        case 5:
        erase ();
        break;
        case 6:
        see ();
        break;
        case 7:
        close ();
    break;
    }
}
void menu1 ()
{
    int p1;
    printf ("\n\t\t\tவணக்கம் இது உங்கள் வங்கி\n");
    printf ("\nபுதிய கணக்கை ஆரம்பிக்க 1ஐ அழுத்தவும்  \n");
    printf ("\nவிவரங்களை திருத்தம��� செய்ய 2ஐ அழுத்தவும் \n");
    printf ("\nவிவரங்களை காண 3ஐ அழுத்தவும்\n");
    printf ("\nபணம் செலுத்த மற்றும் எடுக்க 4ஐ அழுத்தவும் \n");
    printf ("\nகணக்கை அழிக்க 5ஐ அழுத்தவும்\n");
    printf ("\nவட்டியின் நிலை காண 6 அழுத்தவும் \n");
    printf ("\n வெளியில் செல்ல 7ஐ அழுத்தவும் \n");
    scanf ("\n%d",&p1);
    switch(p1)
    {
        case 1:
        add1 ();
        break;
        case 2:
        update1 ();
        break;
        case 3:
        view1 ();
        break;
        case 4:
        transaction2 ();
        break;
        case 5:
        erase1 ();
        break;
        case 6:
        see1 ();
        break;
        case 7:
        close1 ();
    break;
    }
}
int main()
{
    
    char spassword [50]="kaleeswaranstaff";
    char spassword1 [50];
    char cpassword [50]="kaleeswarancou";
    char cpassword1 [50];
    int n,n1,n2,n3,n4;
    int o1,o3,o4,o5;
    int n25,n32;
    yes1:
    yes:
    printf ("\n\t\tENGLISH PRESS 1\n");
    printf ("\n\t\tதமிழுக்கு  2ஐ அழுத்தவும்\n");
    
   
    scanf ("\n\t\t%d",&o3);
    if (o3==1)
    {
    printf ("\n\t\t\tYOU ARE A STAFF PRESS 1\n");
    printf ("\n\t\t\tYOU ARE A COUSTMER PRESS 2\n");
    printf ("\nSTAFF YOU HAVE ALREADY  ACCOUNT DEFAULT PASSWORD:kaleeswaranstaff\n");
    printf ("\nCOUSTMER YOU HAVE ALREADY ACCOUNT DEFAULT PASSWORD:kaleeswarancou\n");
    printf ("\n\n\n\t\t\tYOU DON'T HAVE A ACCOUNT PRESS 3\n");
    scanf ("\n%d",&n);
   
    if (n==1)
    {
        printf ("\n\t\t\nSTAFF LOGIN");
        printf ("\n\t\t\nENTER YOU PASSWORD");
        getchar ();
        printf ("\n");
        gets (spassword1);
        n1=strcmp (spassword,spassword1);
        if (n1==0)
        {
            printf ("\n\n\tYOUR PASSWORD CORRECT LOADING PLEASE WAIT......");
                printf ("\nTHIS OPTION IS NOT AVALIBLE AT THIS TYPE\n");
                printf ("\nYOU GO TO CLOSE PRESS 1");
            printf ("\nYOU GO TO MAIN PRESS 2");
            scanf ("\n%d",&n25);
            if (n25==1)
            {
                close ();
            }
            if (n25==2)
            {
                main ();
            }
        }
        else
        {
            printf ("\n\n\tYOU PASSWORD IS IN CORRECT");
            printf ("\nYOU GO TO CLOSE PRESS 1");
            printf ("\nYOU GO TO MAIN PRESS 2");
            scanf ("\n%d",&n3);
            if (n3==1)
            {
                close();
            }
            if (n3==2)
            {
                main ();
            }
            
        }
    }
 
    if (n==2)
    {
        printf ("\nCOUTEMER LOGIN");
        printf ("\nENTER YOUR PASSWORD");
        clrscr ();
        printf ("\n");
        getchar ();
        gets (cpassword1);
        n2=strcmp(cpassword,cpassword1);
        if (n2==0)
        {
            printf ("\nYOUR PASSWORD IS CORRECT LOADING PLEASE WAIT....");
            menu ();
        }
        else
        {
            printf("\nYOUR PASSWORD IS IN CORRECT");
            printf ("\nYOU GO TO CLOSE PRESS 1");
            printf ("\nYOU GO TO MAIN PRESS 2");
            scanf ("\%d",&n4);
            if (n4==1)
            {
                close ();
            }
            if (n4==2)
            {
                main ();
            }
           
        }
        
    }
    if (n==3)
    {
        menu ();
    }
    else
{
    printf ("\n\t\t SORRY WE CAN'T ALLOWED YOU!!!\t");
        printf ("\nGO TO MAIN PRESS 1\n");
        printf ("\n\nGO TO EXIT PRESS 2\n");
        scanf ("\n%d",&o1);
        if (o1==1)
        {
        main ();
    }
        if (o1==2)
        {
            close ();
        }
}
        }
    if (o3==2)
    {
        printf ("\n\t\t\tபணிபுரிபவர் என்றால் 1ஐ அழுத்தவும்\n");
    printf ("\n\t\t\t வாடிக்கையாளர்கள் என்றால் 2ஐ அழுத்தவும் \n");
    printf ("\n பணிபுரிபவர் முன்பே கணக்கு வைத்திருந்தால் பாஸ்வேர்டு :kaleeswaranstaff\n");
    printf ("\n வடிக்கையாளர்கள் முன்பே கணக்கு வைத்திருந்தால் பாஸ்வேர்டு :kaleeswarancou\n");
    printf ("\n\n\n\t\t\tகணக்கு இல்லை என்றால் 3ஐ அழுத்தவும்\n");
    scanf ("\n%d",&n);
   
    if (n==1)
    {
        printf ("\n\t\t\nபணிபுரிபவர் நுழைவு");
        printf ("\n\t\t\nபாஸ்வேர்டை பதிவிடவும்");
        getchar ();
        printf ("\n");
        gets (spassword1);
        n1=strcmp (spassword,spassword1);
        if (n1==0)
        {
            printf ("\n\n\t உங்கள் பாஸ்வேர்ட் சரியானது உள்நுழைகிறது காத்திருக்கவும்.... ");
                printf ("\nஇப்பொழுது இங்கு இல்லை");
                printf ("\nமீண்டும் பதிவிட 1ஐ அழுத்தவும் ");
            printf ("\n வெளியில் செல்ல 2ஐ அழுத்தவும் ");
            scanf ("\n%d",&n32);
            if (n32==1)
            {
                main();
            }
            if (n32==2)
            {
                close1 ();
            }
                
        }
        else
        {
            printf ("\n\n\t உங்கள் பாஸ்வேர்ட் தவறானது ");
            printf ("\nமீண்டும் பதிவிட 1ஐ அழுத்தவும் ");
            printf ("\n வெளியில் செல்ல 2ஐ அழுத்தவும் ");
            scanf ("\n%d",&n3);
            if (n3==1)
            {
                main();
            }
            if (n3==2)
            {
                close1 ();
            }
            
        }
    }
 
    if (n==2)
    {
        printf ("\n வாடிக்கையாளர்கள் நுழைவு\n");
        printf ("\n பாஸ்வேர்டை பதிவிடவும்\n ");
        clrscr ();
        printf ("\n");
        getchar ();
        gets (cpassword1);
        n2=strcmp(cpassword,cpassword1);
        if (n2==0)
        {
            printf ("\nஉங்கள் பாஸ்வேர்ட் சரியானது உள்நுழைகிறது காத்திருக்கவும்....");
            menu1 ();
        }
        else
        {
            printf("\nஉங்கள் பாஸ்வேர்ட் தவறானது");
            printf ("\nவெளியில் செல்ல 1ஐ அழுத்தவும்");
            printf ("\n மீண்டும் பதிவிட 2ஐ அழுத்தவும் ");
            scanf ("\%d",&n4);
            if (n4==1)
            {
                close1 ();
            }
            if (n4==2)
            {
                main ();
            }
           
        }
        
    }
       if (n==3)
        {
        menu1 ();
    }
   
    else
{
    printf ("\n\t\t நாங்கள் உங்களை உள்நுழைய விட முடியாது!!!\t");
        printf ("\n\n மீண்டும் பதிவிட 1ஐ அழுத்தவும் \n");
        printf ("\n\n வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
        scanf ("\n%d",&o1);
        if (o1==1)
        {
        main ();
    }
        if (o1==2)
        {
            close1 ();
        }
}
        
   
       /*cen:
        printf ("\n மீண்டும் பதிவிட 1ஐ அழுத்தவும் \n");
        printf ("\n வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
        scanf ("\n%d",&o4);
        if (o4==1)
        {
            goto yes;
        }
        if (o4==2)
        {
        close ();
    }
        else
    {
        printf ("\nசரியானதை அழுத்தவும்\n");
            goto cen;
    }*/
}
    else
    {
    printf ("\n சரியானதை அழுத்தவும் ");
        printf ("\n மீண்டும் பதிவிட 1ஐ அழுத்தவும் \n");
        printf ("\n வெளியில் செல்ல 2ஐ அழுத்தவும் \n");
        scanf ("\n%d",&o5);
        if (o5==1)
        {
            goto yes1;
        }
        if (o5==2)
        {
        close1 ();
        
}
        }
    }



    
    

