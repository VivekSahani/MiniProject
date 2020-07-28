#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(void)
{
float ms,g,kg,lb,t,i;
float inch,cm,km,ft,yd,mi,m;
float c,f,k;
float millisecound,s,minute,h,d,w;
float b,kb,mb,gb,tb;
int in,input,input1,input2,input3;
char ch;
while(1)
{
system("cls");
printf("************** WHAT WOULD YOU LIKE TO CONVERT **************\n\n\n\n");
printf("       WOULD YOU LIKE FOR MASS CONVERSION THEN PRESS M\n\n");
printf("       WOULD YOU LIKE FOR LENGTH CONVERSION THEN PRESS L\n\n");
printf("       WOULD YOU LIKE FOR TEMPRETURE CONVERSION THEN PRESS t(SMALL)\n\n");
printf("       WOULD YOU LIKE FOR TEMPRETURE CONVERSION THEN PRESS T(CAPITAL)\n\n");
printf("       WOULD YOU LIKE FOR DIGITAL CONVERSION THEN PRESS D\n\n");
printf("       PLEASE CHOOSE YOUR CHOICE\n\n");
printf("       DO YOU WANT TO EXIT  THEN PRESS ENTER\n");
scanf("%c",&ch);

//for(i=)

switch(ch)
{
case 'M':
case 'm':
while(1)
{
system("cls");
//for(i=0;i!=1;i++)
//if(i==in)
printf("************** WHAT WOULD YOU LIKE TO CONVERT **************\n");
printf("\t\t\t\t\t\n");

printf("PRESS 1 FOR MILLIGRAM(ms)\n\n PRESS 2 FOR GRAM(g)\n\n PRESS 3 FOR KILOGRAM\n\n PRESS 4 for POUND(lb)\n\n PRESS 5 FOR TON(t)\n");
//fflush("stdin");
scanf("%d",&in);
system("cls");
//i=1;
//while(i==1)
//{

if(in==1)
{
//i=0;
printf("INPUT DATA IN MILLIGRAM(ms)=");
scanf("%f",&ms);


ms=ms*1;
g=ms*0.001;
kg=ms*0.00001;
lb=ms*0.000002204622622;
t=ms*0.000000001;

printf("MILLIGRAM=%f ms\n",ms);
printf("GRAM=%f g\n",g);
printf("KILOGRAM=%f kg\n",kg);
printf("POUND=%f lb\n",lb);
printf("TON=%f t\n",t);
 }
 else
 if(in==2)
 {

 printf("INPUT DATA IN GRAM(g)=");

scanf("%f",&g);

 ms=g*1000;
 g=g*1;
 kg=g*0.001;
 lb=g*0.00220462;
 t=g*0.000001;

 printf("MILLGRAM=%f ms\n",ms);
 printf("GRAM=%f g\n",g);
 printf("KILOGRAM=%f kg\n",kg);
 printf("POUND=%f lb\n",lb);
 printf("TON=%f t\n",t);
 }
 else
 if(in==3)
 {

 printf("INPUT DATA IN KILOGRAM(kg)=");
 scanf("%f",&kg);

 ms=kg*1000000;
 g=1000*kg;
 kg=kg*1;
 lb=kg*2.205;
 t=0.0011023;


 printf("MILLGRAM=%f ms\n",ms);
 printf("GRAM=%f g\n",g);
 printf("KILOGRAM=%f kg\n",kg);
 printf("POUND=%f lb\n",lb);
 printf("TON=%f t\n",t);
 }
 else
 if(in==4)
 {

 printf("INPUT DATA IN POUND(lb)=");
 scanf("%f",&lb);
 ms=lb*453592.37;
 g=lb*453.592;
 kg=lb*0.453592;
 lb=lb*1;
 t=t*0.0005;


  printf("MILLGRAM=%f ms\n",ms);
 printf("GRAM=%f g\n",g);
 printf("KILOGRAM=%f kg\n",kg);
 printf("POUND=%f lb\n",lb);
 printf("TON=%f t\n",t);
 }
     else
     if(in==5)
  {
     printf("INPUT DATA IN TON(t)=");
     scanf("%f",&t);
     ms=907184740*t;
     g=907185*t;
     kg=907.185*t;
     lb=t*2000;
     t=t*1;

 printf("MILLGRAM=%f ms\n",ms);
 printf("GRAM=%f g\n",g);
 printf("KILOGRAM=%f kg\n",kg);
 printf("POUND=%f lb\n",lb);
 printf("TON=%f t\n",t);
 }
       break;




 case 'L':
case 'l':

system("cls");

printf("PRESS 1 IF LENGTH IS INCH\n\n");
printf("PRESS 2 IF LENGTH IS FEET\n\n");
printf("PRESS 3 IF LENGTH IS YARD\n\n");
printf("PRESS 4 IF LENGTH IS CENTIMETER\n\n");
printf("PRESS 5 IF LENGTH IS METER\n\n");
printf("PRESS 6 IF LENGTH IS KILOMETER\n\n");
printf("PRESS 7 IF LENGTH IS MILES \n\n");

scanf("%d",&input);

system("cls");
if(input==1)
{
printf("ENTER LENGTH IN INCH=");
 scanf("%f",&inch);
 mi=inch*0.0001893939;
 km=inch*0.0003048;
 m= inch*0.3048;
 cm=inch*30.48;
 yd=inch*0.333333;
 ft=inch*12;
 inch=inch*1;

 printf("MILE=%f mi\n",mi);
 printf("KILOMETER=%f km\n",km);
 printf("METER=%f m\n",m);
 printf("CENTIMETER=%f cm\n",cm);
 printf("YARD=%f yd\n",yd);
 printf("FEET=%f ft\n",ft);
 printf("INCH=%f inch\n",inch);
}
   else
   if(input==2)
   {

      printf("ENTER LENGTH IN FEET= ");
 scanf("%f",&ft);

 mi=ft*0.0001893939;
 km=ft*0.0003048;
 m=ft*0.3048;
 cm=ft*30.48;
 yd=ft*0.333333;
 ft=ft*1;
 inch=ft*12;

 printf("MILE=%f mi\n",mi);
 printf("KILOMETER=%f km\n",km);
 printf("METER=%f m\n",m);
 printf("CENTIMETER=%f cm\n",cm);
 printf("YARD=%f yd\n",yd);
 printf("FEET=%f ft\n",ft);
 printf("INCH=%f inch\n",inch);

  }
  else
  if(input==3)
  {


  printf("ENTER LENGTH IN YARD=");
scanf("%f",&yd);



mi=0.0005618818*yd;
km=0.0009144*yd;
m=0.9144*yd;
cm=91.44*yd;
yd=yd*1;
ft=3*yd;
inch=36*yd;



printf("MILE=%f mi\n",mi);
printf("KILOMETER=%f km\n",km);
printf("METER=%f m\n",m);
printf("CENTIMETER=%f cm\n",cm);
printf("YARD=%f yd\n",yd);
printf("FEET=%f ft\n",ft);
printf("INCH=%f inch\n",inch);
}
else
if(input==4)
{


printf("ENTER LENGTH IN CENTIMETER=");
scanf("%f",&cm);
mi=cm*0.0000062137;
km=cm*0.00001;
m=cm*0.01;
cm=cm*1;
yd=cm*0.0109361;
ft=cm*0.0328084;
inch=cm*0.393701;


 printf("MILE=%f mi\n",mi);
 printf("KILOMETER=%f km\n",km);
 printf("METER=%f m\n",m);
 printf("CENTIMETER=%f cm\n",cm);
 printf("YARD=%f yd\n",yd);
 printf("FEET=%f ft\n",ft);
 printf("INCH=%f inch\n",inch);
 }
 else
 if(input==5)
 {


 printf("ENTER LENGTH IN METER=");
scanf("%f",&m);


mi=m*0.000621371;
km=m*0.001;
m=m*1;
cm=m*100;
yd=m*1.09361;
ft=m*3.28084;
inch=m*39.371;

 printf("MILE=%f mi\n",mi);
 printf("KILOMETER=%f km\n",km);
 printf("METER=%f m\n",m);
 printf("CENTIMETER=%f cm\n",cm);
 printf("YARD=%f yd\n",yd);
 printf("FEET=%f ft\n",ft);
 printf("INCH=%f inch\n",inch);
 }
 else
 if(input==6)
 {
 printf("ENTER LENGTH IN KILOMETER=");
scanf("%f",&km);



m=km*1000;             //1km=1000m
ft=km*3280.84;       //1km=3280.84ft
in=km*39370.1;         //1km=39370.1"inch
cm=km*100000;          //1km=100000cm
yd=km*1093.61;         //1Km=1093.61 yd
mi=0.621371*km;        //1km=0.621371 mi
km=km;



printf("METER=%f m\n",m);
printf("FEET=%f ft\n",ft);
printf("INCH=%f inch\n",inch);
printf("CENTIMETER=%f cm\n",cm);
printf("YARD=%f yd\n",yd);
printf("MILE=%f mi\n",mi);
printf("KILOMETER=%f km\n",km);
}

else
if(input==7)
{



printf("ENTER LENGTH IN MILES=");
scanf("%f",&mi);

km=1.60934*mi;                               //1MILE=1.6 KILOMETER
ft= 5280*mi;                               //1MILE=5280 FEET
inch=mi*5280*12;                               //1MILE=63360 INCH
yd=1760*mi;                                  //1MILE=1760 YARD
cm=160934*mi;                                //1MILE=160934 CENTIMETER
m=1609.344*mi;                               //1MILE=1609.344 METER
mi=mi*1;                                   //1MI=1 MILE

printf("KILOMETER=%f mi\n",km);
printf("FEET=%f ft\n",ft);
printf("INCH=%f inch\n",inch);
printf("YARD=%f yd\n",yd);
printf("CENTIMETER=%f cm\n",cm);
printf("METER=%f  m\n",m);
printf("MILE=%f  mi\n",mi);
}
else
{
printf("INVAIID NUMBER,PLEASE PRESS 1 TO 7 ANY NUMBER\n");
}
break;


 case 't':
 system("cls");
printf("****************************WHAT DO YOU LIKE TO CONVERT*********************\n\n\n             PRESS 1 FOR CELICIUS \n\n                   2 FOR FAHRENHEIT \n\n                   3 FOR KELVIN.INPUT YOUR LIKE (C OR F OF K)\n\n");
scanf("%d",&input1);
system("cls");
if(input1==1)
{

printf("INPUT TEMPRETURE IN DEGREE CELCIUS=");
scanf("%f",&c);
f=(9.0/5.0)*c+32.0;
k=c+273;
printf("FAHRENHEIT=%f\n",f);
printf("KELVIN=%f\n",k);
}
else

if(input1==2)
{
printf("INPUT TEMPRETUR IN FAHRENHEIT=");
scanf("%f",&f);
c=((5*(f-32))/9);
k=((5*(f-32))/9)+273;
printf("CELCIUS=%f\n",c);
printf("KELVIN=%f\n",k);
}
else


if(input1==3)
{
  printf("INPUT TEMPRETURE IN KEVIN=");
  scanf("%f",&k);
  f=((k-273.15)*9/5)+32;
  c=k-273.15;
  printf("FAHRENHEIT=%f\n",f);
  printf("CELCIOUS=%f\n",c);
  }
  break;




case 'd':
case 'D':
system("cls");
printf("************************WHAT  DO YOU LIKE TO COVERT********************\n\n\n                  PRESS 1 FOR BYTE\n\n                  2 FOR KILOBYTE\n\n                  3 FOR MEGABYTE\n\n                  4 FOR GIGABYTE\n\n                  5 FOR TERABYTE\n\n");
scanf("%d",&input2);
system("cls");
if(input2==1)
{
printf("                 INPUT DATA IN BYTE=");
scanf("%f",&b);
b=b*1;
kb=b*0.001;
mb=b*0.000001;
gb=b*0.000000001;
tb=b*0.0000000000001;

printf("BYTE=%f B\n",b);
printf("KILOBYTE=%f KB \n",kb);
printf("MEGABYTE=%f MB\n",mb);
printf("GIGABYTE=%f GB\n",gb);
printf("TERABYTE=%f TB\n",tb);

}
else

 if(input2==2)
 {
printf("                 INPUT DATA IN KILOBYTE=");
scanf("%f",&kb);

b=kb*1000;
kb=kb*1;
mb=kb*0.001;
gb=kb*0.000001;
tb=kb*0.000000001;

printf("BYTE=%f B\n",b);
printf("KILOBYTE=%f KB\n",kb);
printf("MEGABYTE=%f MB\n",mb);
printf("GIGABYTE=%f GB\n",gb);
printf("TERABYTE=%f TB\n",tb);
 }
else
if(input2==3)
{
printf("                 INPUT DATA IN MEGABYTE=");
scanf("%f",&mb);
b=mb*1000000;
kb=mb*1000;
mb=mb*1;
gb=mb*0.001;
tb=mb*0.00001;

printf("BYTE=%f B\n",b);
printf("KILOBYTE=%f KB\n",kb);
printf("MEGABYTE=%f MB\n",mb);
printf("GIGABYTE=%f GB\n",gb);
printf("TERABYTE=%f TB\n",tb);
 }
else
if(input2==4)
{
printf("                 INPUT DATA IN GIGABYTE=");
scanf("%f",&gb);
b=gb*1000000000;
kb=gb*1000000;
mb=gb*1000;
gb=gb*1;
tb=gb*0.001;

printf("BYTE=%f B\n",b);
printf("KILOBYTE=%f KB\n",kb);
printf("MEGABYTE=%f MB\n",mb);
printf("GIGABYTE=%f GB\n",gb);
printf("TERABYTE=%f TB\n",tb);

}
else
if(input2==5)
{

 printf("                 INPUT DATA IN TERABYTE=");
 scanf("%f",&tb);

 b=tb*1000000000000;
 kb=tb*1000000000;
 mb=tb*1000000;
 gb=tb*1000;
 tb=tb*1;

printf("BYTE=%f B\n",b);
printf("KILOBYTE=%f KB\n",kb);
printf("MEGABYTE=%f MB\n",mb);
printf("GIGABYTE=%f GB\n",gb);
printf("TERABYTE=%f TB\n",tb);
}
break;

   case 'T':


	   system("cls");
printf("************************WHAT  DO YOU LIKE TO COVERT********************\n\n\n                  PRESS 1 FOR MILLISECOUND\n\n                  2 FOR SECOUND\n\n                  3 FOR MINUTE\n\n                  4 FOR HOUR\n\n                  5 FOR DAY\n\n                  6 FOR WEEK\n\n");
scanf("%d",&input3);
system("cls");

     if(input3==1)
     {
     printf("                 INPUT DATA IN MILLISECOUND=");
     scanf("%f",&ms);

     millisecound=ms*1;
     s=millisecound*0.001;
     minute=millisecound*0.0000166667;
     h=millisecound*0.000000277778;
     d=millisecound*0.0000000165344;
     w=millisecound*0.0000000115741;

   printf("MILLISECOUND=%f ms\n",millisecound);
printf("SECOUND=%f s\n",s);
printf("MINUTE=%f M\n",minute);
printf("HOUR=%f H\n",h);
printf("DAY=%f D\n",d);
printf("WEEK=%f W\n",w);
      }
else
   if(input3==2)
   {
     printf("                 INPUT DATA IN SECOUND=");
     scanf("%f",&s);
     millisecound=s*1000;
     s=s*1;
     minute=s*0.0166667;
     h=s*0.00027778;
     d=s*0.0000115741;
     w=s*0.00000165344;

	printf("MILLISECOUND=%f ms\n",millisecound);
printf("SECOUND=%f s\n",s);
printf("MINUTE=%f M\n",minute);
printf("HOUR=%f H\n",h);
printf("DAY=%f D\n",d);
printf("WEEK=%f W\n",w);

     }
     else
     if(input3==3)
     {
     printf("                 INPUT DATA IN MINUTE=");
     scanf("%f",&minute);

     millisecound=minute*60000;
     s=minute*60;
     minute=minute*1;
     h=minute*0.0166667;
     d=minute*0.000694444;
     w=minute*0.0000992063;

	printf("MILLISECOUND=%f ms\n",millisecound);
printf("SECOUND=%f s\n",s);
printf("MINUTE=%f M\n",minute);
printf("HOUR=%f H\n",h);
printf("DAY=%f D\n",d);
printf("WEEK=%f W\n",w);
     }

     else
     if(input3==4)
     {
     printf("                 INPUT DATA IN HOUR=");
    scanf("%f",&h);
    millisecound=h*360000;
    s=h*3600;
    minute=h*60;
    h=h*1;
    d=h*0.416667;
    w=h*0.00595238;


	printf("MILLISECOUND=%f ms\n",millisecound);
printf("SECOUND=%f s\n",s);
printf("MINUTE=%f M\n",minute);
printf("HOUR=%f H\n",h);
printf("DAY=%f D\n",d);
printf("WEEK=%f W\n",w);

	   }

	   else
	   if(input3==5)
	   {
	      printf("                 INPUT DATA IN DAY=");
	      scanf("%f",&d);
	      millisecound=d*86400000;
	      s=d*86400;
	      minute=1440*d;
	      h=24*d;
	      w=0.142857*d;
	       d=d*1;


	printf("MILLISECOUND=%f ms\n",millisecound);
printf("SECOUND=%f s\n",s);
printf("MINUTE=%f M\n",minute);
printf("HOUR=%f H\n",h);
printf("DAY=%f D\n",d);
printf("WEEK=%f W\n",w);

	 }
 else
 if(input3==6)
 {
   printf("                 INPUT DATA IN WEEK=");
   scanf("%f",&w);
   millisecound=w*604800000;
   s=w*604800;
   minute=w*10080;
   h=w*168;
   d=w*7;
   w=1*w;



	printf("MILLISECOUND=%f ms\n",millisecound);
printf("SECOUND=%f s\n",s);
printf("MINUTE=%f M\n",minute);
printf("HOUR=%f H\n",h);
printf("DAY=%f D\n",d);
printf("WEEK=%f W\n",w);

	  }
	  break;





default:
exit(0);

}
getch();
 }
 }}
