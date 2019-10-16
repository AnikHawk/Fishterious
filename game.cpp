#include<stdio.h>
#include<graphics.h>
#include<Windows.h>
#include<iostream>
#include<math.h>
#include"MMSystem.h"

int frame=0,lvl=0,level=1,flag=0;
int growth=0;
int page=0,c=0,scr=0;

#include"showScore.h"
#include"High_Score.h"
#include"Highscore_Write.h"
#include"digits.h"
#include"how.h"
#include"over.h"
#include"menuu.h"




int main()
{


    int gd=DETECT,gm;

    initwindow(640,480,"",-3,-3,false,true);

    readimagefile("fishterious.jpg",0,0,640,480);
    delay(2000);



    menu();
    if(flag==1) over();

    closegraph();
    return 0;
}
