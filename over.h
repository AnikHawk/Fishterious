//#include"menuu.h"
void over()
{

    mciSendString("stop epic.mp3", NULL, 0, NULL);

    POINT mouse;
    int x,y,clkx=0,clky=0;

    mciSendString("play end.wav", NULL, 0, NULL);
    while(1)
    {
        void menu();
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        GetCursorPos(&mouse);


        x=mouse.x;
        y=mouse.y+25;
        getmouseclick(WM_LBUTTONDOWN, clkx, clky);
        clky+=0;
        readimagefile("over.jpg",0,0,640,480);




        if(x>=154 && x<=317 && y>=317 && y<=372) readimagefile("overmenu.jpg",0,0,640,480);
        if(x>=364 && x<=486 && y>=317 && y<=372) readimagefile("overexit.jpg",0,0,640,480);


        if(clkx>=362 && clkx<=486 && clky>=291 && clky<=348)
        {
            PlaySound("click.wav",NULL,SND_SYNC);

            return;
        }

        if(clkx>=154 && clkx<=290 && clky>=291 && clky<=346)
        {
            PlaySound("click.wav",NULL,SND_ASYNC);

            frame=0,lvl=0,level=1;
            page=0,c=0,scr=0;
            menu();
            if(flag==1) over();
            break;
        }


        page=1-page;


    }

    return ;

}
