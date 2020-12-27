******************************************************************************************************************************************************************
Project Name: Codefever 
Software Used: Turbo C++ 4.0 
Developer: Aparna Naik
******************************************************************************************************************************************************************

#include<iostream.h>
#include<math.h>
#include<stdio.h>
#include<constrea.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
const double pi=3.14159;

void graph() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    line(getmaxx()/2,0,getmaxx()/2,getmaxy());
    line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
    outtextxy((getmaxx()/2)+5,(getmaxy()/2)+5,"O");
    outtextxy((getmaxx()/2)+5,0,"Y");
    outtextxy(625,(getmaxy()/2)+5,"X");
}

void move() {
    int sd=DETECT,sm;
    initgraph(&sd,&sm,"c://tc//bgi");
    settextstyle(4,0,7);
    settextjustify(1,1);

    for(int i=getmaxx()-15;i>290;i--) {
        for(int j=0;j<=15;j+=10) {
            setcolor(i);
            outtextxy(i,(getmaxy()/2),"System Of Forces");
            line(0,(getmaxy()/2)+35,getmaxx(),(getmaxy()/2)+35);
            setfillstyle(SOLID_FILL,i);
            circle(i-275,getmaxy()/2-25,15);
            circle(i+275,getmaxy()/2-25,15);
            floodfill(i-280,getmaxy()/2-28,i);
            floodfill(i+280,getmaxy()/2-28,i);
            line(i-275,getmaxy()/2-10,i-285,getmaxy()/2+20);
            line(i-285,getmaxy()/2+20,i-300+j,getmaxy()/2+35);
            line(i-285,getmaxy()/2+20,i-270-j,getmaxy()/2+35);
            line(i-280,getmaxy()/2+10,i-255,getmaxy()/2+5);
            line(i-280,getmaxy()/2+10,i-255,getmaxy()/2);
            line(i+275,getmaxy()/2-10,i+285,getmaxy()/2+20);
            line(i+285,getmaxy()/2+20,i+300-j,getmaxy()/2+35);
            line(i+285,getmaxy()/2+20,i+270+j,getmaxy()/2+35);
            line(i+280,getmaxy()/2+10,i+255,getmaxy()/2+5);
            line(i+280,getmaxy()/2+10,i+255,getmaxy()/2);
            sound(((i+5)%10)*1000);
            delay(15);
            setcolor(getbkcolor());
            outtextxy(i,(getmaxy()/2),"System Of Forces");
            setfillstyle(SOLID_FILL,i);
            circle(i-275,getmaxy()/2-25,15);
            circle(i+275,getmaxy()/2-25,15);
            floodfill(i-280,getmaxy()/2-28,i);
            floodfill(i+280,getmaxy()/2-28,i);
            line(i-275,getmaxy()/2-10,i-285,getmaxy()/2+20);
            line(i-285,getmaxy()/2+20,i-300+j,getmaxy()/2+35);
            line(i-285,getmaxy()/2+20,i-270-j,getmaxy()/2+35);
            line(i-280,getmaxy()/2+10,i-255,getmaxy()/2+5);
            line(i-280,getmaxy()/2+10,i-255,getmaxy()/2);
            line(i+275,getmaxy()/2-10,i+285,getmaxy()/2+20);
            line(i+285,getmaxy()/2+20,i+300-j,getmaxy()/2+35);
            line(i+285,getmaxy()/2+20,i+270+j,getmaxy()/2+35);
            line(i+280,getmaxy()/2+10,i+255,getmaxy()/2+5);
            line(i+280,getmaxy()/2+10,i+255,getmaxy()/2);
            nosound();
        } 
     }
    getch();
    closegraph();
}

void codefever() {
      int cd=DETECT,cg;
      initgraph(&cd,&cg,"c://tc//bgi");
      settextstyle(3,0,8);
      setcolor(11);
      outtextxy(getmaxx()/2-150,getmaxy()/2-90,"CodeFever");
      settextstyle(3,0,4);
      setcolor(4);
      outtextxy(getmaxx()/2-40,getmaxy()/2+25,"presents....");
      setfillstyle(SOLID_FILL,YELLOW);
      setcolor(YELLOW);
      circle(60,200,50);
      floodfill(50,180,YELLOW);
      setcolor(8);
      setfillstyle(SOLID_FILL,8);
      line(38,247,82,247);
      line(38,247,38,270);
      line(82,247,82,270);
      line(38,270,82,270);
      floodfill(50,250,8);
      arc(60,200,250,300,50);
      arc(60,268,180,360,12);
      floodfill(55,277,8);
      line(55,247,40,213);
      line(68,247,77,213);
      arc(50,213,0,180,10);
      arc(68,213,0,180,10);
      getch();
      closegraph();
}

//Main Function
int main() {
	clrscr();
	codefever();
	move();
	textcolor(13);
	gotoxy(30,1);
	cprintf("System of Forces");
	textcolor(6);
	cout<<"\n";
	constream cout;
	cout<<setclr(500);
	cprintf("This program will help you to find the resultant of system of forces.");
	cout<<"\n\n";

	char digit,direction;
	int num;
	int magnitude;
	textcolor(14);
	cprintf("Press 1 if the forces are collinear.");
	cout<<"\n";
	textcolor(11);
	cprintf("Press 2 if the forces are concurrent.");
	cout<<"\n";
	textcolor(10);
	cprintf("Press 3 if the forces are non-concurrent.");
	cout<<"\n";
	textcolor(12);
	cprintf("Press 4 if the forces are parallel.");
	cout<<"\n";
	textcolor(9);
	cprintf("Kindly enter a number:");
	cin>>digit;
	cout<<"\n";
	
  switch(digit)
	{
		case '1': {
            textcolor(14);
            cprintf("The given forces are collinear.");
            cout<<"\n";
            cprintf("Enter the number of forces: ");
            cin>>num;
            cout<<"\n";
            static double FX=0;
            double angle;
            cprintf("\nEnter the magnitudes of forces in Newton(N).");
            cout<<"\n";
            cprintf("Enter angle as '0' degrees for positive X-axis direction and '180' degrees for negative X-axis direction");
            cout<<"\n";
            textcolor(3);
            cprintf("Calculations: ");
            cout<<"\n";
            for(int i=0;i<num;i++)
            {
                textcolor(3);
                cprintf("F=");
                cin>>magnitude;
                cprintf("Theta=");
                cin>>angle;
                if(angle==0||angle==180)
                {
                double radians=angle*pi/180;
                double fx=magnitude*cos(radians);
                cprintf("Value of fx is: ");
                cout<<fx<<endl;
                if((FX+fx)==0)
                FX=0;
                else
                FX=FX+fx;
                }
                else
                {
                textcolor(RED);
                cprintf("Please enter angle 0 or 180");
                cout<<"\n";
                --i;
                }
            }
            cout<<"\n";
              textcolor(14);
              cprintf("The resultant of the collinear system of forces is:");
              cout<<FX<<"N"<<"\n";
              constream cout;
              cout<<setclr(500);
              cout<<"Congratulations!! You have saved 55 seconds!!";
              getch();
              graph();
              char msg[100];
              double Fx;
              if(FX<0)
              Fx=fabs((FX));
              if(FX==0)
              {
              setcolor(YELLOW);
              line(getmaxx()/2,getmaxy()/2,getmaxx()/2,getmaxy()/2);
              sprintf(msg,"R=%5.2lf N",FX);
              outtextxy(325,(getmaxy()/2)-15,msg);
              }
              
              if(FX>0) {
                    setcolor(YELLOW);
                    line(getmaxx()/2,getmaxy()/2,500,getmaxy()/2);
                    setfillstyle(SOLID_FILL,YELLOW);
                    line(500,getmaxy()/2,490,(getmaxy()/2)-10);
                    line(500,getmaxy()/2,490,(getmaxy()/2)+10);
                    line(490,(getmaxy()/2)-10,490,(getmaxy()/2)+10);
                    floodfill(495,(getmaxy()/2)-3,YELLOW);
                    floodfill(492,(getmaxy()/2)+3,YELLOW);
                    sprintf(msg,"R=%5.2lf N",FX);
                    outtextxy(400,(getmaxy()/2)-15,msg);
              }
              if(FX<0) {
                    setcolor(YELLOW);
                    line(getmaxx()/2,getmaxy()/2,125,getmaxy()/2);
                    setfillstyle(SOLID_FILL,YELLOW);
                    line(125,getmaxy()/2,135,(getmaxy()/2)-10);
                    line(125,getmaxy()/2,135,(getmaxy()/2)+10);
                    line(135,(getmaxy()/2)-10,135,(getmaxy()/2)+10);
                    floodfill(133,(getmaxy()/2)-3,YELLOW);
                    floodfill(133,(getmaxy()/2)+3,YELLOW);
                    sprintf(msg,"R=%5.2lf N",Fx);
                    outtextxy(145,(getmaxy()/2)-15,msg);
              }
           getch();
           closegraph();
         }
              break;
	       case '2':
                    textcolor(11);
                    cprintf("The given forces are concurrent.");
                    cout<<"\n";
                    char alphabet;
                    textcolor(6);
                    cprintf("Press a if the angle of inclinations are known.");
                    cout<<"\n";
                    textcolor(15);
                    cprintf("Press b if the co-ordinates of the forces are known.");
                    cout<<"\n";
                    textcolor(2);
                    cprintf("Press c if there are only 2 forces acting on the system.");
                    cin>>alphabet;
                    switch(alphabet)
                    {
                      case 'a':{
                         cout<<"\n";
                         textcolor(6);
                         cprintf("Consider all the forces to be pull type of forces.");
                         cout<<"\n";
                         cprintf("Enter the number of forces: ");
                         cin>>num;
                         float fx,fy,resultant;
                         static double FX=0,FY=0;
                         for(int i=0;i<num;i++) {
                            double magnitude;
                            textcolor(11);
                            cprintf("Enter magnitude is: ");
                            cin>>magnitude;
                            double radians,degrees;
                            cprintf("Angle with respect to positive X-axis is: ");
                            cin>>degrees;
                            radians=degrees*pi/180;
                            fx=magnitude*cos(radians);
                            fy=magnitude*sin(radians);
                            FX=FX+fx;
                            FY=FY+fy;
                        }
                        textcolor(11);
                        cprintf("FX is:");
                        cout<<FX<<"N"<<endl;
                        cprintf("FY is:");
                        cout<<FY<<"N"<<endl;
                        float r=(FX)*(FX)+(FY)*(FY);
                        resultant=sqrt(r);
                        cout<<"\n";
                        textcolor(6);
                        cprintf("Resultant of the concurrent system of forces is: ");
                        cout<<resultant<<"N";
                        cout<<"\n";
                        cprintf("The angle of the resultant force wrt positive X-axis is: ");
                        double theta,thetaR,thetaD;
                        thetaR=atan(fabs(FY/FX));
                        theta=thetaR*180/pi;
                        cprintf("theta=");
                        cout<<theta<<endl;
                        if(FX>0 && FY>0)
                        cprintf("The resultant lies in the first quadrant");
                        else if(FX<0 && FY>0)
                        {
                          cprintf("The resultant lies in the second quadrant");
                          cout<<"\n";
                        }
                        else if(FX<0 && FY<0)
                        {
                          cprintf("The resultant lies in the third quadrant");
                          cout<<"\n";
                        }
                        else if(FX>0 && FY<0)
                        {
                          cprintf("The resultant lies in the fourth quadrant");
                          cout<<"\n";
                        }
                        cout<<endl;
                        constream cout;
                        cout<<setclr(500);
                        cout<<"Congratulations!! You have saved 4 minutes 30 seconds!!";
                        getch();
                        if(FX>0&&FY>0)
                        {
                            graph();
                            setcolor(11);
                            if(FX<10||FY<10)
                            {
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX*100),(getmaxy()/2)-(FY*100));
                            }
                            if(FX<100||FY<100)
                            {
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX*10),(getmaxy()/2)-(FY*10));
                             }
                            else
                            {
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX/10),(getmaxy()/2)-(FY/10));

                            }
                            setcolor(WHITE);
                            char msg[100];
                            sprintf(msg,"R=%5.2lf N",resultant);
                            outtextxy((getmaxx()/2)+FX+10,(getmaxy()/2)-FY-70,msg);
                            arc(getmaxx()/2,getmaxy()/2,0,theta,40);
                            sprintf(msg,"%3.2lf",theta);
                            outtextxy((getmaxx()/2)+50,(getmaxy()/2)-10,msg);
                        }
                             if(FX<0 && FY>0)
                             {
                            graph();
                            setcolor(11);
                            if(FX>(-10)||FY<10)
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX*100)-50,(getmaxy()/2)-(FY*100));
                            if(FX>(-100)||FY<100)
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX*10)-50,(getmaxy()/2)-(FY*10));
                            else
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX/10)-50,(getmaxy()/2)-(FY/10));
                            setcolor(WHITE);
                            char msg[100];
                            sprintf(msg,"R=%5.2lf N",resultant);
                            outtextxy((getmaxx()/2)+FX-50,(getmaxy()/2)-FY-70,msg);
                            arc(getmaxx()/2,getmaxy()/2,180-theta,180,40);
                            sprintf(msg,"%3.2lf",theta);
                            outtextxy((getmaxx()/2)-100,(getmaxy()/2)-10,msg);
                            }
                         if(FX<0 && FY<0)
                            {
                            graph();
                            setcolor(11);
                            if(FX>(-10)||FY>(-10))
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX*100),(getmaxy()/2)-(FY*100));
                            if(FX>(-100)||FY>(-100))
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX*10),(getmaxy()/2)-(FY*10));
                            else
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX/10),(getmaxy()/2)-(FY/10));
                            setcolor(WHITE);
                            char msg[100];
                            sprintf(msg,"R=%5.2lf N",resultant);
                            outtextxy((getmaxx()/2)+FX-50,(getmaxy()/2)-FY+70,msg);
                            arc(getmaxx()/2,getmaxy()/2,180,180+theta,40);
                            sprintf(msg,"%3.2lf",theta);
                            outtextxy((getmaxx()/2)-100,(getmaxy()/2)+10,msg);
                            }

                            if(FX>0 && FY<0)
                            {
                            graph();
                            setcolor(11);
                            if(FX<10||FY>(-10))
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX*100),(getmaxy()/2)-(FY*100));
                            if(FX<100||FY>(-100))
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX*10),(getmaxy()/2)-(FY*10));
                            else
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX/10),(getmaxy()/2)+(FY/10));
                            setcolor(WHITE);
                            char msg[100];
                            sprintf(msg,"R=%5.2lf N",resultant);
                            outtextxy((getmaxx()/2)+FX+10,(getmaxy()/2)-FY+70,msg);
                            arc(getmaxx()/2,getmaxy()/2,0-theta,0,40);
                            sprintf(msg,"%3.2lf",theta);
                            outtextxy((getmaxx()/2)+50,(getmaxy()/2)+10,msg);
                             }
                             getch();
                             closegraph();
                           }
                      break;
                      case 'b':{
                           textcolor(15);
                           double fx1=0,fy1=0,FX1=0,FY1=0,r1,resultant1;
                           cout<<"\n";
                           cprintf("Consider all type of forces to be pull type of forces.");
                           cout<<"\n";
                           cprintf("All forces should have same initial coordinates");
                           int num;
                           cout<<"\n";
                           cprintf("Enter the number of forces: ");
                           cin>>num;
                           textcolor(11);
                           cprintf("Calculations:");
                           cout<<"\n";
                           for(int i=0;i<num;i++)
                           {
                          textcolor(11);
                          int x1,x2,y1,y2;

                          cprintf("Please enter the first X: ");
                          cin>>x1;
                          cprintf("Please enter the first Y: ");
                          cin>>y1;
                          cout<<"Co-ordinates are: ("<<x1<<","<<y1<<")";
                          cout<<"\n";
                          cprintf("Please enter the second X: ");
                          cin>>x2;
                          cprintf("Please enter the second Y: ");
                          cin>>y2;
                          cout<<"Co-ordinates are: ("<<x2<<","<<y2<<")";
                          double theta,thetam,m1,m2;
                          m1=abs(y2-y1);
                          m2=abs(x2-x1);
                          if(x2>=0&&y2>=0)
                          {
                          if(m2==0)
                          thetam=pi/2;
                          else
                          thetam=atan(m1/m2);
                          }
                          if(x2<0&&y2>=0)
                          thetam=pi-(atan(m1/m2));
                          if(x2<=0&&y2<=0)
                          {
                          if(m2==0)
                          thetam=pi+(pi/2);
                          else
                          thetam=pi+atan(m1/m2);
                          }
                          if(x2>0&&y2<=0)
                          thetam=(2*pi)-(atan(m1/m2));
                          theta=thetam*180/pi;
                          int magnitude;
                          double radians;
                          cout<<"\n";
                          cprintf("Magnitude is: ");
                          cin>>magnitude;
                          cout<<"\n";
                          cprintf("Angle of inclination is: ");
                          cout<<theta;
                          fx1=magnitude*cos(thetam);
                          fy1=magnitude*sin(thetam);
                          cout<<"\n";
                          cprintf("fx=");
                          cout<<fx1;
                          cout<<"\n";
                          cprintf("fy=");
                          cout<<fy1;
                          FX1=FX1+fx1;
                          FY1=FY1+fy1;
                          cout<<"\n";
                        }
                        cout<<endl;
                        textcolor(15);
                        cprintf("FX= ");
                        cout<<FX1<<"N"<<endl;
                        cprintf("FY= ");
                        cout<<FY1<<"N"<<endl;
                        r1=(FX1)*(FX1)+(FY1)*(FY1);
                        resultant1=sqrt(r1);
                        cprintf("Resultant of the given system of forces is: ");
                        cout<<resultant1<<"N";
                        cout<<"\n";
                        cprintf("The angle of the resultant force wrt positive X-axis is: ");
                        double thetaFIN,thetaR,thetaD;
                        thetaR=atan(abs(FY1/FX1));
                        thetaFIN=thetaR*180/pi;
                        cout<<thetaFIN;
                        constream cout;
                        cout<<setclr(500);
                        cout<< "\nCongratulations!! You have saved 6 minutes 5 seconds!!";
                        getch();
                               if(FX1>0&&FY1>0)
                        {
                            graph();
                            setcolor(11);
                            if(FX1<10||FY1<10)
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1*100),(getmaxy()/2)-(FY1*100));
                            if(FX1<100||FY1<100)
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1*10),(getmaxy()/2)-(FY1*10));
                            else
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1/10),(getmaxy()/2)-(FY1/10));
                            setcolor(WHITE);
                            char msg[100];
                            sprintf(msg,"R=%5.2lf N",resultant1);
                            outtextxy((getmaxx()/2)+FX1+10,(getmaxy()/2)-FY1-70,msg);
                            arc(getmaxx()/2,getmaxy()/2,0,thetaFIN,40);
                            sprintf(msg,"%3.2lf",thetaFIN);
                            outtextxy((getmaxx()/2)+50,(getmaxy()/2)-10,msg);
                        }
                             if(FX1<0 && FY1>0)
                             {
                            graph();
                            setcolor(11);
                            if(FX1>(-10)||FY1<10)
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1*100)-50,(getmaxy()/2)-(FY1*100));
                            if(FX1>(-100)||FY1<100)
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1*10)-50,(getmaxy()/2)-(FY1*10));
                            else
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1/10)-50,(getmaxy()/2)-(FY1/10));
                            setcolor(WHITE);
                            char msg[100];
                            sprintf(msg,"R=%5.2lf N",resultant1);
                            outtextxy((getmaxx()/2)+FX1-50,(getmaxy()/2)-FY1-70,msg);
                            arc(getmaxx()/2,getmaxy()/2,180-thetaFIN,180,40);
                            sprintf(msg,"%3.2lf",thetaFIN);
                            outtextxy((getmaxx()/2)-100,(getmaxy()/2)-10,msg);
                            }
                         if(FX1<0 && FY1<0)
                            {
                            graph();
                            setcolor(11);
                            if(FX1>(-10)||FY1>(-10))
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1*100),(getmaxy()/2)-(FY1*100));
                            if(FX1>(-100)||FY1>(-100))
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1*10),(getmaxy()/2)-(FY1*10));
                            else
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1/10),(getmaxy()/2)-(FY1/10));
                            setcolor(WHITE);
                            char msg[100];
                            sprintf(msg,"R=%5.2lf N",resultant1);
                            outtextxy((getmaxx()/2)+FX1-50,(getmaxy()/2)-FY1+70,msg);
                            arc(getmaxx()/2,getmaxy()/2,180,180+thetaFIN,40);
                            sprintf(msg,"%3.2lf",thetaFIN);
                            outtextxy((getmaxx()/2)-100,(getmaxy()/2)+10,msg);
                            }

                            if(FX1>0 && FY1<0)
                            {
                            graph();
                            setcolor(11);
                            if(FX1<10||FY1>(-10))
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1*100),(getmaxy()/2)-(FY1*100));
                            if(FX1<100||FY1>(-100))
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1*10),(getmaxy()/2)-(FY1*10));
                            else
                            line(getmaxx()/2,getmaxy()/2,(getmaxx()/2)+(FX1/10),(getmaxy()/2)+(FY1/10));
                            setcolor(WHITE);
                            char msg[100];
                            sprintf(msg,"R=%5.2lf N",resultant1);
                            outtextxy((getmaxx()/2)+FX1+10,(getmaxy()/2)-FY1+70,msg);
                            arc(getmaxx()/2,getmaxy()/2,0-thetaFIN,0,40);
                            sprintf(msg,"%3.2lf",thetaFIN);
                            outtextxy((getmaxx()/2)+50,(getmaxy()/2)+10,msg);
                             }
                             getch();
                             closegraph();



                      }
                      break;
				    case 'c': {					
                      textcolor(2);
                      cprintf("We use parallelogram law of forces.");
                      cout<<"\n\n";
                      textcolor(11);
                      cprintf("Calculations:");
                      cout<<"\n";
                      double P,Q,R,theta,Resultant;
                      cprintf("The magnitudes are: ");
                      cout<<"\n";
                      cin>>P>>Q;
                      cprintf("The angle between the two forces: ");
                      cout<<"\n";
                      cin>>theta;
                      double fx,fy,alpha,rads;
                      textcolor(2);
                      cprintf("\nThe resultant is: ");
                      double radians=theta*pi/180;
                      fx=Q*cos(radians);
                      fy=Q*sin(radians);
                      double m=P*P+Q*Q+(2*P*Q*cos(radians));
                      Resultant=sqrt(m);
                      cout<<Resultant<<"N";
                      alpha=atan((Q*sin(radians))/(P+Q*cos(radians)));
                      rads=alpha*180/pi;
                      cout<<"\n";
                      cprintf("The angle of resultant with respect to positive X-axis in degrees is: ");
                      cout<<rads;
                      constream cout;
                      cout<<setclr(500);
                      cout<<"\nCongratulations!! You have saved 3 minutes 35 seconds";
                      getch();
                      int ld=DETECT,lg;
                      initgraph(&ld,&lg,"c:\\tc\\bgi");
                      char msg[100];
                      setfillstyle(SOLID_FILL,WHITE);
                      line(200,300,500,300);
                      line(500,300,490,290);
                      line(500,300,490,310);
                      line(490,290,490,310);
                      floodfill(492,294,WHITE);
                      floodfill(492,301,WHITE);
                      sprintf(msg,"P=%5.2lf N",P);
                      outtextxy(350,310,msg);
                      arc(200,300,0,theta,30);
                      sprintf(msg,"%3.2lf",theta);
                      outtextxy(220,240,msg);
                      line(200,300,200+fx,120-fy);
                      setfillstyle(SOLID_FILL,WHITE);
                      line(200+fx,120-fy,210+fx,130-fy);
                      line(200+fx,120-fy,190+fx,130-fy);
                      line(190+fx,130-fy,210+fx,130-fy);
                      floodfill(207+fx,128-fy,WHITE);
                      floodfill(196+fx,126-fy,WHITE);
                      sprintf(msg,"Q=%5.2lf N",Q);
                      outtextxy(100+fx,140-fy,msg);
                      line(210+fx,120-fy,510+fx,120-fy);
                      line(510+fx,120-fy,500,300);
                      setcolor(11);
                      line(200,300,510+fx,120-fy);
                      setfillstyle(SOLID_FILL,11);
                      line(510+fx,120-fy,500+fx,135-fy);
                      line(510+fx,120-fy,480+fx,131-fy);
                      line(480+fx,131-fy,500+fx,135-fy);
                      floodfill(498+fx,125-fy,11);
                      floodfill(501+fx,133-fy,11);
                      floodfill(499+fx,132-fy,11);
                      sprintf(msg,"R=%5.2lf N",Resultant);
                      outtextxy(380+fx,155-fy,msg);
                      arc(200,300,0,rads,20);
                      sprintf(msg,"%3.2lf",rads);
                      outtextxy(235,285,msg);
                      getch();
                      closegraph();
                   }
                   break;
                      default:{
                         cout<<"Not a valid alphabet";
                         }
                         break;
                      }
              case '3': {
                  int num,number;
                  double length,dist=0,angle,Wm,fric,friction;
                  textcolor(10);
                  cout<<"\n";
                  cprintf("The given forces are non-concurrent.");
                  cout<<"\n";
                  cprintf("Assumptions: ");
                  cout<<"\n";
                  cprintf("Here we are considering non-concurrent forces of system specially on ladder case.");
                  cout<<"\n";
                  cprintf("Weight of the ladder acts at the center of the ladder and in the downward direction only.");
                  cout<<"\n";
                  cprintf("We assume the frictional force(if present) between wall and the ladder always acts in the upward direction.");
                  cout<<"\n";
                  cprintf("We assume the frictional force(if present) between floor and the ladder always acts on the left side of the coordinate axes.");
                  cout<<"\n";
                  cprintf("The reaction force acts on the right hand side(perpendicular) at the top of the ladder.");
                  cout<<"\n";
                  cprintf("The reaction force acts in the upward direction(perpendicular) at the bottom of the ladder.");
                  cout<<"\n";
                  cprintf("Consider the ladder to be in limiting equilibrium");
                  cout<<"\n\n";
                  textcolor(9);
                  cprintf("Please enter the length of the ladder in m:");
                  cin>>length;
                  cout<<"\n";
                  cprintf("Please enter the angle betweeen floor and ladder(<90):");
                  cin>>angle;
                  double radians=angle*pi/180;
                  cout<<"\n";
                  cprintf("Enter 1 if the floor is rough else enter 2:");
                  cin>>num;
                  if(num==1)
                  {
                  cout<<"\n";
                  cprintf("Co-efficient of friction between floor and ladder (uf): ");
                  cin>>fric;
                  }
                  else
                  {
                  cout<<"\n";
                  cprintf("Co-efficient of friction between floor and ladder (uf): ");
                  fric=0;
                  cout<<fric;
                  }
                  textcolor(5);
                  cout<<"\n";
                  cprintf("Co-efficient of friction between wall and ladder (uw): ");
                  friction=0;
                  cout<<friction;
                  double Rf,Rw,Fw,Ff,Wl;
                  cout<<"\n";
                  cprintf("Weight of the man in N: ");
                  cin>>Wm;
                  if(Wm==0)
                  { cout<<endl;
                    textcolor(RED);
                    cprintf("Man does not climb ladder");
                    cout<<"\n";
                    cprintf("Please enter weight of man:");
                    cin>>Wm;
                  }
                  textcolor(5);
                  cprintf("Weight of the laddder in N: ");
                  cin>>Wl;
                  if(Wl==0)
                  { cout<<"\n";
                    textcolor(RED);
                    cprintf("Weight of ladder cannot be zero");
                    cout<<"\n";
                    textcolor(5);
                    cprintf("Please enter weight of ladder:");
                    cin>>Wl;
                  }
                  cout<<"\n";
                  cprintf("Fw=uw*Rw");
                  cout<<"\n";
                  cprintf("Fw=");
                  Fw=friction*Rw;
                  cout<<Fw;
                  cprintf("N");
                  cout<<"\n\n";
                  textcolor(11);
                  cprintf("Calculations:");
                  cout<<"\n";
                  cprintf("According to conditions of equilibrium");
                  cout<<"\n";
                  cprintf("Fy=0");
                  cout<<"\n";
                  cprintf("Wl-Fw+Wm-Rf=0");
                  Rf=(-Fw+Wl+Wm);
                  cout<<"\n";
                  cprintf("Rf=");
                  cout<<Rf;
                  cprintf("N");
                  cout<<"\n";
                  cprintf("Ff=uf*Rf");
                  cout<<"\n";
                  Ff=fric*Rf;
                  cprintf("Ff=");
                  cout<<Ff;
                  cprintf("N");
                  cout<<"\n\n";
                  cprintf("Fx=0");
                  cout<<"\n";
                  cprintf("Rw=Ff");
                  cout<<"\n";
                  cprintf("Rw=");
                  Rw=Ff;
                  cout<<Rw;
                  cprintf("N");
                  cout<<"\n\n";
                  cprintf("Moment above B point MB=0");
                    double A=Rw*(length*sin(radians));
                    double B=Wl*((length/2)*cos(radians));
                    double C=Wm*cos(radians);
                  cout<<"\n";
                  textcolor(10);
                  cprintf("Distance from floor to man can climb ladder:");
                  dist= fabs((A-B)/C);
                  cout<<dist;
                  cprintf("m");
                  constream cout;
                  cout<<setclr(500);
                  cout<<"\n Congratulations you have save 3 minutes 39 seconds!!";
                  getch();
                  int ld=DETECT,lg;
                  char msg[100];
                  initgraph(&ld,&lg,"c:\\tc\\bgi");
                  line(250,260,250,25);
                  line(250,260,500,260);
                  line(250,260-(length*sin(radians)*50),250+(length*cos(radians)*50),260);
                  arc(250+(length*cos(radians)*50),260,180-angle,180,10);
                  sprintf(msg,"%3.2lf",angle);
                  outtextxy(250+(length*cos(radians)*50)-60,250,msg);
                  outtextxy(240,260-(length*sin(radians)*50),"A");
                  outtextxy(250+(length*cos(radians)*50),265,"B");
                  setfillstyle(SOLID_FILL,WHITE);
                  line((250+250+(length*cos(radians)*50))/2,(260-(length*sin(radians)*50)+260)/2,(250+250+(length*cos(radians)*50))/2,300);
                  line((250+250+(length*cos(radians)*50))/2,300,((250+250+(length*cos(radians)*50))/2)-5,295);
                  line((250+250+(length*cos(radians)*50))/2 ,300,((250+250+(length*cos(radians)*50))/2)+5,295);
                  line(((250+250+(length*cos(radians)*50))/2)-5,295,((250+250+(length*cos(radians)*50))/2)+5,295);
                  floodfill(((250+250+(length*cos(radians)*50))/2)-3,296,WHITE);
                  floodfill(((250+250+(length*cos(radians)*50))/2)+3,296,WHITE);
                  sprintf(msg,"%8.2lf N",Wl);
                  outtextxy(((250+250+(length*cos(radians)*50))/2)-50,280,msg);
                  setcolor(10);
                  setfillstyle(SOLID_FILL,10);
                  line(250+((length-dist)*cos(radians)*50),260-(dist*sin(radians)*50),250+(length*cos(radians)*50),260);
                  line(250+((length-dist)*cos(radians)*50),260-(dist*sin(radians)*50),250+((length-dist)*cos(radians)*50),260-(dist*sin(radians)*50)+70);
                  line(250+((length-dist)*cos(radians)*50),260-(dist*sin(radians)*50)+70,250+((length-dist)*cos(radians)*50)-5,260-(dist*sin(radians)*50)+65);
                  line(250+((length-dist)*cos(radians)*50),260-(dist*sin(radians)*50)+70,250+((length-dist)*cos(radians)*50)+5,260-(dist*sin(radians)*50)+65);
                  line(250+((length-dist)*cos(radians)*50)+5,260-(dist*sin(radians)*50)+65,250+((length-dist)*cos(radians)*50)-5,260-(dist*sin(radians)*50)+65);
                  floodfill(250+((length-dist)*cos(radians)*50)+3,260-(dist*sin(radians)*50)+66,10);
                  floodfill(250+((length-dist)*cos(radians)*50)-3,260-(dist*sin(radians)*50)+66,10);
                  sprintf(msg,"%8.2lf N",Wm);
                  outtextxy(250+((length-dist)*cos(radians)*50)-15,260-(dist*sin(radians)*50)+80,msg);
                  sprintf(msg,"%5.2lf m",dist);
                  outtextxy(250+((length-dist)*cos(radians)*50)+20,260-(dist*sin(radians)*50)+10,msg);
                  setcolor(WHITE);
                  setfillstyle(SOLID_FILL,WHITE);
                  line(230,260-(length*sin(radians)*50),260,260-(length*sin(radians)*50));
                  line(260,260-(length*sin(radians)*50),255,260-(length*sin(radians)*50)-5);
                  line(260,260-(length*sin(radians)*50),255,260-(length*sin(radians)*50)+5);
                  line(255,260-(length*sin(radians)*50)-5,255,260-(length*sin(radians)*50)+5);
                  floodfill(258,260-(length*sin(radians)*50)-1,WHITE);
                  floodfill(258,260-(length*sin(radians)*50)+1,WHITE);
                  sprintf(msg,"Rw=%5.2lf N",Rw);
                  outtextxy(270,260-(length*sin(radians)*50)-10,msg);
                  setfillstyle(SOLID_FILL,WHITE);
                  line(230,260-(length*sin(radians)*50),230,260-(length*sin(radians)*50)+30);
                  line(230,260-(length*sin(radians)*50),225,260-(length*sin(radians)*50)+5);
                  line(230,260-(length*sin(radians)*50),235,260-(length*sin(radians)*50)+5);
                  line(225,260-(length*sin(radians)*50)+5,235,260-(length*sin(radians)*50)+5);
                  floodfill(227,260-(length*sin(radians)*50)+4,WHITE);
                  floodfill(233,260-(length*sin(radians)*50)+4,WHITE);
                  sprintf(msg,"Fw=%5.2lf N",Fw);
                  outtextxy(150,260-(length*sin(radians)*50)+35,msg);
                  setfillstyle(SOLID_FILL,WHITE);
                  line(250+(length*cos(radians)*50),300,250+(length*cos(radians)*50),280);
                  line(250+(length*cos(radians)*50),280,250+(length*cos(radians)*50)+5,285);
                  line(250+(length*cos(radians)*50),280,250+(length*cos(radians)*50)-5,285);
                  line(250+(length*cos(radians)*50)+5,285,250+(length*cos(radians)*50)-5,285);
                  floodfill(250+(length*cos(radians)*50)+3,284,WHITE);
                  floodfill(250+(length*cos(radians)*50)-3,284,WHITE);
                  sprintf(msg,"Rf=%5.2lf N",Rf);
                  outtextxy(250+(length*cos(radians)*50)+10,290,msg);
                  setfillstyle(SOLID_FILL,WHITE);
                  line(250+(length*cos(radians)*50),270,250+(length*cos(radians)*50)-20,270);
                  line(250+(length*cos(radians)*50)-20,270,250+(length*cos(radians)*50)-15,265);
                  line(250+(length*cos(radians)*50)-20,270,250+(length*cos(radians)*50)-15,275);
                  line(250+(length*cos(radians)*50)-15,265,250+(length*cos(radians)*50)-15,275);
                  floodfill(250+(length*cos(radians)*50)-16,267,WHITE);
                  floodfill(250+(length*cos(radians)*50)-16,273,WHITE);
                  sprintf(msg,"Ff=%5.2lf N",Ff);
                  outtextxy(250+(length*cos(radians)*50)+30,270,msg);
                  getch();
                  closegraph();
              }
			 break;
		   case '4': {
               textcolor(12);
               cout<<"\n";
               cprintf("The given forces are parallel.");
               cout<<"\n";
               cprintf("Enter the number of forces: ");
               cin>>num;
               cout<<"\n";
               static double FY=0;
               double M1,MFin;
               double angle;
               textcolor(11);
               cprintf("Assumptions:");
               cout<<"\n";
               cprintf("Enter the magnitudes of forces in Newton(N).");
               cout<<"\n";
               cprintf("Enter angle as '90' degrees for positive Y-axis direction and '270' degrees for negative Y-axis direction");
               cout<<"\n";
               cprintf("If the resultant contains negative sign it means that it lies on the negative Y-axis(downward force)");
               cout<<"\n";
               cprintf("If the resultant contains no sign it means that it lies on the positive Y-axis(upward force)");
               cout<<"\n\n";
               textcolor(12);
               cprintf("Considering all the moments from point 1");
               cout<<"\n";
               cprintf("While entering distance please see to it that you add the complete length from the origin.");
               textcolor(11);
               cout<<"\n";
               cprintf("Calculations:");
               for(int i=0;i<num;i++)
               {  
                textcolor(11);
                cout<<"\n";
                cprintf("Enter magnitude: F");
                cout<<i+1<<"=";
                cin>>magnitude;
                cout<<"\n";
                cprintf("Enter angle according to assumptions: theta");
                cout<<i+1<<"=";
                cin>>angle;
                if(angle==90||angle==270)
                   {
                double radians=angle*pi/180;
                double fy=magnitude*sin(radians);
                cout<<"\n";
                cprintf("Value of fy is: ");
                cout<<fy<<"N";
                if(FY+fy==0)
                FY=0;
                else
                FY=FY+fy;
                double distance;
                cout<<"\n";
                if(i>0)
                {
                cprintf("Distance between ");
                cout<<i;
                cprintf(" and ");
                cout<<i+1;
                cprintf(" in (m) is: ");
                cin>>distance;
                }
                if(i==0)
                  MFin=0;
                else
                {
                  M1=fy*distance;
                  MFin=MFin+M1;
                }
                cout<<"\n";
                cprintf("MFin is: ");
                cout<<MFin;
                cout<<"Nm";
               }
               else
               { textcolor(RED);
                 cout<<"\n";
                 cprintf("Please enter angle according to assumption");
               --i;
               }

               }
               textcolor(12);
               cout<<"\n";
               cprintf("The resultant of the parallel system of forces is: ");
               cout<<FY<<"N"<<endl;
               cprintf("Moment about point O is: ");
               cout<<MFin<<"Nm";
               cout<<"\n";
               cprintf("Thus the position of the resultant from point 1 is: ");
               double x;
               x=fabs(MFin/FY);
               cout<<x<<"m";
               constream cout;
               cout<<setclr(500);
               cout<<"\nCongratulations!! You have saved 55 seconds";
               getch();
               int jd=DETECT,jm;
               char msg[100];
               initgraph(&jd,&jm,"c:\\tc\\bgi");
               int left=75,top=300,right=575,bottom=310;
               rectangle(left,top,right,bottom);
               outtextxy(60,300,"O");
               setcolor(12);
               if(FY==0)
               line(75,300,75,300);
               setfillstyle(SOLID_FILL,12);
               if(FY>0)
               {
                   line(75+x*50,250,75+x*50,300);
                   line(75+x*50,250,65+x*50,260);
                   line(75+x*50,250,85+x*50,260);
                   line(65+x*50,260,85+x*50,260);
                   floodfill(72+x*50,258,12);
                   floodfill(82+x*50,258,12);
                   sprintf(msg,"%5.2lf N ",FY);
                   outtextxy(60+x*50,235,msg);
                     }
                     if(FY<0)
                     {   line(75+x*50,250,75+x*50,300);
                   line(75+x*50,300,65+x*50,290);
                   line(75+x*50,300,85+x*50,290);
                   line(65+x*50,290,85+x*50,290);
                   floodfill(72+x*50,292,12);
                   floodfill(82+x*50,291,12);
                   sprintf(msg,"%5.2lf N ",fabs(FY));
                   outtextxy(60+x*50,235,msg);
			        }
             line(75,320,75+x*50,320);
             line(75+x*50,320,70+x*50,315);
             line(75+x*50,320,70+x*50,325);
             line(70+x*50,315,70+x*50,325);
             floodfill(72+x*50,318,12);
             floodfill(71+x*50,323,12);
             line(75,320,80,315);
             line(75,320,80,325);
             line(80,315,80,325);
             floodfill(78,318,12);
             floodfill(78,322,12);
             sprintf(msg,"%2.3lf m",x);
             outtextxy((75+x*50+75)/2,330,msg); 
  			     break;
		    }
		    default :cout<<"Not a valid number.";
			           break;
	  }
	  getch();
	  return 0;
}
