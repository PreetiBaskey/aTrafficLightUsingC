/********   This is a program showing Traffic-singles and its Work   ********/

	    /*********   And is made with TurboC   *********/

		    /******   Hope You like it   ******/



#include"graphics.h"
#include"conio.h"
#include"stdio.h"

void main()
{
	int gd=DETECT,gm,colour;
	initgraph(&gd,&gm,"C:\\TC\\bgi");


	circle(300,100,10);
	circle(320,100,10);
	circle(340,100,10);

	setcolor(8);                   //Line_Outside_The _Circles
	rectangle(288,85,352,115);
	rectangle(287,84,353,116);
	rectangle(286,83,354,117);

	setcolor(WHITE);

	setfillstyle(1,8);                 //Stick
	rectangle(270,83,288,387);
	floodfill(273,86,WHITE);


	setcolor(WHITE);
	setfillstyle(1,8);                 //Base_Of_Stick
	rectangle(230,388,330,425);
	floodfill(232,390,WHITE);

	printf("ENter Your Colour [1/2/3] :- ");
	scanf("%d",&colour);

	switch(colour)
	{
		case 1:
			circle(300,100,10);
			circle(320,100,10);
			circle(340,100,10);

			setcolor(WHITE);
			setfillstyle(1,RED);
			circle(300,100,10);
			floodfill(300,100,WHITE);
			circle(320,100,10);
			circle(340,100,10);

			break;

		case 2:
			circle(300,100,10);
			circle(320,100,10);
			circle(340,100,10);

			setcolor(WHITE);
			setfillstyle(1,YELLOW);
			circle(320,100,10);
			floodfill(320,100,WHITE);
			circle(300,100,10);
			circle(340,100,10);
			break;
		case 3:
			circle(300,100,10);
			circle(320,100,10);
			circle(340,100,10);

			setcolor(WHITE);
			setfillstyle(1,GREEN);
			circle(340,100,10);
			floodfill(340,100,WHITE);
			circle(300,100,10);
			circle(320,100,10);
			break;
		default:
			delay(1500);
			cleardevice();
			settextstyle(1,0,7);
			outtextxy(100,100,"You Are Not");
			outtextxy(180,250,"In Road");
			delay(2000);
			return;
	}

	delay(1000);
	gotoxy(60,25);
	printf("Wait a moment.....");


	delay(3000);
	cleardevice();
	if(colour==1)
	{
		setcolor(RED);
		settextstyle(1,0,7);
		outtextxy(20,170,"Oops..!!..Traffice Jam");

	}
	if(colour==2)
	{
		setcolor(YELLOW);
		settextstyle(1,0,9);
		outtextxy(80,170,"Be Alert..!!");
	}
	if(colour==3)
	{
		setcolor(GREEN);
		settextstyle(1,0,7);
		outtextxy(10,170,"You Can Go Now..!!");
	}

	getch();
}



