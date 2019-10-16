#include"game.h"
#include<iostream>
using namespace std;
void menu()
{
    char name[100],ch;
    int char_ind=0;


    flag=0;
    // printf("MENU %d\n",flag);

    int frame=0,lvl=0,level=1;
    // int page=0,c=0,scr=0;
    POINT mouse;
    int x,y,clkx=0,clky=0,clicky=0;



    while(1)
    {
        mciSendString("play e.wav", NULL, 0, NULL);
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        GetCursorPos(&mouse);


        x=mouse.x;
        y=mouse.y+25;
        getmouseclick(WM_LBUTTONDOWN, clkx, clky);
        //clky=clicky+25;
        //if(clkx!=-1 && clky!=-1) printf("%d %d\n",clkx,clky);
        //printf("%d %d\n",x,y);


        //NEW GAME
        if(clkx>=250 && clkx<=460 && clky>=95 && clky<=150)
        {
            PlaySound("click.wav",NULL,SND_ASYNC);
            game();
            growth=0;



            settextstyle(COMPLEX_FONT,HORIZ_DIR,3);
            setbkcolor(0);


            char_ind=0;
            while(1)
            {
                name[char_ind]='\0';
                readimagefile("EnterName.jpg",0,0,640,480);
                outtextxy(200,150,"ENTER YOUR NAME:");
                outtextxy(250,200,name);
                setactivepage(page);
                setvisualpage(1-page);
                cleardevice();
                page=1-page;
                ch=getch();
                if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
                {
                    name[char_ind]=ch;
                    char_ind++;
                }
                if(GetAsyncKeyState(VK_BACK))
                {
                    name[char_ind]='\0';
                    char_ind--;
                    if(char_ind<=0) char_ind=0;
                }

                if(GetAsyncKeyState(VK_RETURN)) break;


            }
            name[char_ind]='\0';
            outtextxy(250,200,name);
            delay(1000);
            cleardevice();
            // cout<<name<<" "<<scr;
            //  printf("%d\n",scr);
            //printf("%s\n",name);

            //getch();

            highscorewrite(name,scr);
            return;
        }


        //HOW TO PLAY
        if(clkx>=286 && clkx<=411 && clky>=177 && clky<=231)
        {
            PlaySound("click.wav",NULL,SND_ASYNC);
            howto();

        }

        //HIGH SCORE
        if(clkx>=246 && clkx<=469 && clky>=259 && clky<=309)
        {
            PlaySound("click.wav",NULL,SND_ASYNC);
            setactivepage(page);
            setvisualpage(page);
            readimagefile("leader.jpg",0,0,640,480);
            setvisualpage(page);


            highscoreprint();
            menu();
            return;
        }


        //EXIT
        if(clkx>=290 && clkx<=408 && clky>336 && clky<400)
        {
            PlaySound("click.wav",NULL,SND_SYNC);
            return ;
            closegraph();
        }
        if(x>252 && x<462 && y>120 && y<178)  readimagefile("menunewgame.jpg",-50,-40,690,520);
        else if(x>287 && x<415 && y>203 && y<261)  readimagefile("menuhelp.jpg",-50,-40,690,520);
        else if(x>247 && x<473 && y>284 && y<343)  readimagefile("menuhighscore.jpg",-50,-40,690,520);
        else if(x>292 && x<413 && y>360 && y<428)  readimagefile("menuexit.jpg",-50,-40,690,520);
        else readimagefile("menu.jpg",-50,-40,690,520);



        page=1-page;
    }
    return;

}
