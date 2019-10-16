
void howto()
{
    // mciSendString("stop e.wav", NULL, 0, NULL);
    int frm=0,pg=0,menupage=1;
    POINT mouse;
    int x,y,clkx=0,clky=0,clickx=0,clicky=0;

    while(1)
    {

        GetCursorPos(&mouse);


        x=mouse.x;
        y=mouse.y+25;
        getmouseclick(WM_LBUTTONDOWN, clkx, clky);
       // clky=clicky+25;

        setactivepage(pg);
        setvisualpage(1-pg);

        if(menupage==1)
        {
            if(x>=298 && x<=365 && y>=432 && y<=497)
            {
                if(frm%11==0) readimagefile("0hom.jpg",0,0,640,480);
                if(frm%11==1) readimagefile("1hom.jpg",0,0,640,480);
                if(frm%11==2) readimagefile("2hom.jpg",0,0,640,480);
                if(frm%11==3) readimagefile("3hom.jpg",0,0,640,480);
                if(frm%11==4) readimagefile("4hom.jpg",0,0,640,480);
                if(frm%11==5) readimagefile("5hom.jpg",0,0,640,480);
                if(frm%11==6) readimagefile("6hom.jpg",0,0,640,480);
                if(frm%11==7) readimagefile("7hom.jpg",0,0,640,480);
                if(frm%11==8) readimagefile("8hom.jpg",0,0,640,480);
                if(frm%11==9) readimagefile("9hom.jpg",0,0,640,480);
                if(frm%11==10) readimagefile("10hom.jpg",0,0,640,480);
                delay(100);


                if(clkx>=295 && clkx<=362 && clky>=406 && clky<=471)
                {
                    PlaySound("click.wav",NULL,SND_ASYNC);
                    return;
                }
            }

            else
            {
                if(frm%11==0) readimagefile("0.jpg",0,0,640,480);
                if(frm%11==1) readimagefile("1.jpg",0,0,640,480);
                if(frm%11==2) readimagefile("2.jpg",0,0,640,480);
                if(frm%11==3) readimagefile("3.jpg",0,0,640,480);
                if(frm%11==4) readimagefile("4.jpg",0,0,640,480);
                if(frm%11==5) readimagefile("5.jpg",0,0,640,480);
                if(frm%11==6) readimagefile("6.jpg",0,0,640,480);
                if(frm%11==7) readimagefile("7.jpg",0,0,640,480);
                if(frm%11==8) readimagefile("8.jpg",0,0,640,480);
                if(frm%11==9) readimagefile("9.jpg",0,0,640,480);
                if(frm%11==10) readimagefile("10.jpg",0,0,640,480);
                delay(100);
            }


            if(x>=547 && x<=624 && y>=213 && y<=267 && clkx!=-1 && clky!=-1)
            {
                 PlaySound("click.wav",NULL,SND_ASYNC);
                 PlaySound("click.wav",NULL,SND_ASYNC);
                menupage=2;
                clkx=clky=-1;
            }

            readimagefile("patched.jpg",0,0,120,290);

        }




        if(menupage==2)
        {

            readimagefile("help1.jpg",0,0,640,480);


            if(clkx>=17 && clkx<=85 && clky>=188 && clky<=237)
            {
                PlaySound("click.wav",NULL,SND_ASYNC);
                menupage=1;
            }

            if(clkx>=295 && clkx<=362 && clky>=406 && clky<=471)
            {
                PlaySound("click.wav",NULL,SND_ASYNC);
                return;
            }

            if(x>=547 && x<=624 && y>=213 && y<=267 && clkx!=-1 && clky!=-1)
            {
                PlaySound("click.wav",NULL,SND_ASYNC);
                menupage=3;
                clkx=clky=-1;
            }

        }





        if(menupage==3)
        {

            readimagefile("help2.jpg",0,0,640,480);
            if(clkx>=17 && clkx<=85 && clky>=188 && clky<=237)
            {
                PlaySound("click.wav",NULL,SND_ASYNC);
                menupage=2;
            }

            if(clkx>=295 && clkx<=362 && clky>=406 && clky<=471)
            {
                PlaySound("click.wav",NULL,SND_ASYNC);
                return;
            }

            if(x>=547 && x<=624 && y>=213 && y<=267 && clkx!=-1 && clky!=-1)
            {
 PlaySound("click.wav",NULL,SND_ASYNC);
                menupage=4;
                clkx=clky=-1;
            }




        }



        if(menupage==4)
        {

            readimagefile("help3.jpg",0,0,640,480);
            if(clkx>=17 && clkx<=85 && clky>=188 && clky<=237)
            {
                PlaySound("click.wav",NULL,SND_ASYNC);
                menupage=3;
            }

            if(clkx>=295 && clkx<=362 && clky>=406 && clky<=471)
            {
                PlaySound("click.wav",NULL,SND_ASYNC);
                return;
            }

            // if(x>=547 && x<=624 && y>=213 && y<=267 && clkx!=-1 && clky!=-1) menupage=4;




        }




        if(x>=18 && x<=91 && y>=213 && y<=267 && menupage!=1) readimagefile("left.jpg",0,180,100,250);
        if(x>=547 && x<=624 && y>=213 && y<=267 && menupage!=4) readimagefile("right.jpg",540,180,640,250);
        if(x>=298 && x<=365 && y>=432 && y<=497) readimagefile("home.jpg",250,380,400,480);

        // if(clkx!=-1 && clky!=-1) printf("%d %d\n",clkx,clky);
        //printf("%d %d\n",x,y);



        frm++;
        pg=1-pg;
    }
    return ;



}
