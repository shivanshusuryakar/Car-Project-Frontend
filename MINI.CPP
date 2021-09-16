/*
This project is originally created by : shivanshusurya192@gmail.com ©
It consists of a login and home screen of the portal created for the project on "Car purchasing" using graphics in CPP
*/
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<string.h>

void main()
{
char str[10],tk;
int gd=DETECT,gm,msrtime=0;
initgraph(&gd,&gm,"c://TC//bgi");
//LOGO
setcolor(CYAN);
settextstyle(GOTHIC_FONT,HORIZ_DIR,9);
outtextxy((getmaxx()/2)-210,(getmaxy()/2)-230,"ABS");

for(int i=8;i>2;i--)
{

     if(i==8)
     { setcolor(RED);
       settextstyle(GOTHIC_FONT,HORIZ_DIR,i);
	outtextxy((getmaxx()/2)+5,(getmaxy()/2)-220,"M");

     }
     if(i==7)
     {setcolor(YELLOW);
     settextstyle(GOTHIC_FONT,HORIZ_DIR,i);
     outtextxy((getmaxx()/2)+70,(getmaxy()/2)-220,"o");

     }if(i==6)
     {setcolor(GREEN);
     settextstyle(GOTHIC_FONT,HORIZ_DIR,i);
     outtextxy((getmaxx()/2)+100,(getmaxy()/2)-220,"t");

     }if(i==5)
     {setcolor(LIGHTCYAN);
     settextstyle(GOTHIC_FONT,HORIZ_DIR,i);
     outtextxy((getmaxx()/2)+125,(getmaxy()/2)-220,"o");

     }if(i==4)
     {setcolor(LIGHTBLUE);
     settextstyle(GOTHIC_FONT,HORIZ_DIR,i);
     outtextxy((getmaxx()/2)+155,(getmaxy()/2)-220,"r");

     }
     if(i==3)
     {setcolor(LIGHTGREEN);
      settextstyle(GOTHIC_FONT,HORIZ_DIR,i);
     outtextxy((getmaxx()/2)+170,(getmaxy()/2)-220,"s");

     }
}
//TAGLINE
 setcolor(WHITE);
 settextstyle(SMALL_FONT,HORIZ_DIR,4);
 outtextxy((getmaxx()/2)-120,(getmaxy()/2)-120,"..The Relentless Pursuit of Perfection..");
 setcolor(LIGHTMAGENTA);
 outtextxy((getmaxx()/2)-175,(getmaxy()/2)-100,"We Provide you High Tech Performance at Low Tech Rate$");
 cout<<"\n\n\n\n\n\n\n\n\n\n";

 for(int start=0;start<40;start++)
 {
 cout<<"";
 }
 cout<<endl;




 cout<<"\t\t\t\t     LOGIN:\n\t\t  1.Admin \t\t\t  2.Visitor\r";
 char dec=getch();
 if(dec=='1')
 {
  cout<<"\t\t\t\t\t\t\t\t\t\t\r";
  setcolor(BLUE);
  rectangle(getmaxx()/2-180,getmaxy()/2-10,getmaxx()/2+170,getmaxy()/2+30);
  rectangle(getmaxx()/2-180,getmaxy()/2-10,getmaxx()/2+170,getmaxy()/2+200);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
  outtextxy(getmaxx()/2-110,getmaxy()/2-10," ADMIN LOGIN");
  setcolor(LIGHTGRAY);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
  outtextxy(getmaxx()/2-130,getmaxy()/2+60,"     ENTER YOUR ID");
  outtextxy(getmaxx()/2-180,getmaxy()/2+90,"-------------------------");
  login:
  msrtime++;
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  for(int j=0;j<7;j++)
  {
  tk=getch();
  str[j]=tk;
  outtextxy(getmaxx()/2-(75-(j*20)),getmaxy()/2+150,"*");
  }
  int ret1=strcmp(str,"1841048");
  int ret2=strcmp(str,"1841048");
  int ret3=strcmp(str,"1841048");
  if(!ret1||!ret2||!ret3)
  {
   setcolor(GREEN);
   settextstyle(SMALL_FONT,HORIZ_DIR,5);
   outtextxy(getmaxx()/2-110,getmaxy()/2-33,"Admin Logged in Successfully");
   delay(1000);
   cleardevice();
   //access to admin functions
   //body
   // © : shivanshusurya192@gmail.com
  }
  else
  {
   if(msrtime==5)
   {
    setcolor(BLACK);
    rectangle(getmaxx()/2-180,getmaxy()/2-10,getmaxx()/2+170,getmaxy()/2+30);
    rectangle(getmaxx()/2-180,getmaxy()/2-10,getmaxx()/2+170,getmaxy()/2+200);
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
    outtextxy(getmaxx()/2-110,getmaxy()/2-10," ADMIN LOGIN");
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
    outtextxy(getmaxx()/2-130,getmaxy()/2+60,"     ENTER YOUR ID");
    outtextxy(getmaxx()/2-180,getmaxy()/2+90,"-------------------------");
    settextstyle(SMALL_FONT,HORIZ_DIR,5);
    outtextxy(getmaxx()/2-135,getmaxy()/2-33,"Sorry! Unable to Recognize,Try Again");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    for(j=0;j<7;j++)
    {
    outtextxy(getmaxx()/2-(75-(j*20)),getmaxy()/2+150,"*");
    }
    setcolor(LIGHTRED);
    settextstyle(SMALL_FONT,HORIZ_DIR,6);
    outtextxy(getmaxx()/2-135,getmaxy()/2-20,"Seems like You're not the Admin");
    outtextxy(getmaxx()/2-135,getmaxy()/2,"Let me take you to Visitor Login");
    delay(3000);
    setcolor(BLACK);
    outtextxy(getmaxx()/2-135,getmaxy()/2-20,"Seems like You're not the Admin");
    outtextxy(getmaxx()/2-135,getmaxy()/2,"Let me take you to Visitor Login");
    goto visitor_login;
   }
    setcolor(RED);
    rectangle(getmaxx()/2-180,getmaxy()/2-10,getmaxx()/2+170,getmaxy()/2+30);
    rectangle(getmaxx()/2-180,getmaxy()/2-10,getmaxx()/2+170,getmaxy()/2+200);
    setcolor(RED);
    settextstyle(SMALL_FONT,HORIZ_DIR,5);
    outtextxy(getmaxx()/2-135,getmaxy()/2-33,"Sorry! Unable to Recognize,Try Again");
    delay(2000);
    setcolor(BLACK);
    settextstyle(SMALL_FONT,HORIZ_DIR,5);
    outtextxy(getmaxx()/2-135,getmaxy()/2-33,"Sorry! Unable to Recognize,Try Again");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    for(j=0;j<7;j++)
    {
    outtextxy(getmaxx()/2-(75-(j*20)),getmaxy()/2+150,"*");
    }
    delay(2000);
    setcolor(LIGHTGRAY);
    goto login;
  }


 }
 if(dec=='2')
 {
  cout<<"\t\t\t\t\t\t\t\t\t\t\r";
  visitor_login:
  setcolor(YELLOW);
  rectangle(getmaxx()/2-180,getmaxy()/2-10,getmaxx()/2+170,getmaxy()/2+30);
  rectangle(getmaxx()/2-180,getmaxy()/2-10,getmaxx()/2+170,getmaxy()/2+200);
  setcolor(RED);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
  outtextxy(getmaxx()/2-110,getmaxy()/2-10,"VISITOR LOGIN");
  setcolor(LIGHTGRAY);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
  outtextxy(getmaxx()/2-130,getmaxy()/2+60,"     ENTER YOUR ID");
  outtextxy(getmaxx()/2-180,getmaxy()/2+90,"-------------------------");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  for(int j=0;j<7;j++)
  {
  tk=getch();
  outtextxy(getmaxx()/2-(75-(j*20)),getmaxy()/2+150,"*");
  }
  setcolor(GREEN);
  settextstyle(SMALL_FONT,HORIZ_DIR,5);
  outtextxy(getmaxx()/2-110,getmaxy()/2-33,"Visitor Logged in Successfully");
  delay(1000);
  cleardevice();
  //access to visitor functions
  //body
  }
// cleardevice();




getch();
}


// © : shivanshusurya192@gmail.com
