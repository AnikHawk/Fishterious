void game()
{
    mciSendString("stop e.wav", NULL, 0, NULL);
    flag=1;
    int htime=0,hflag=0;
    //  printf("GAME %d\n",flag);
    int fishx,fishy,flip=0,eaten=0,crunchy=-10,tasty=-10,yummy=-10,eatenframe,var=0,level1image=-10,level2image=-10,level3image=-10;
    int growth=0;

    POINT mouse;
    int flag_s=99,flag_t[15],flag_tf[15],flag_i[15],flag_if[15],flag_o[15],flag_of[15];

    int a;
    for(a=0; a<15; a++)
    {
        flag_t[a]=99;
        flag_tf[a]=99;
        flag_i[a]=99;
        flag_if[a]=99;
        flag_o[a]=99;
        flag_of[a]=99;
    }
    double m_s,m_t[15],m_tf[15],m_i[15],m_if[15],m_o[15],m_of[15];

    int enemyx=(rand()%50+1000), enemyy=rand()%480;
    int octox=rand()%500+50, octoy=rand()%300+500;






    int i,buby1[15],buby2[15],bubx[15],bubspd[15];
    for(i=0; i<15; i++)
    {
        buby1[i]=(rand()%100)+480;
        buby2[i]=buby1[i];
    }

    for(i=0; i<15; i++)
    {
        bubx[i]=rand()%660;
//             buby2[i]=bub1[i];
    }


    for(i=0; i<15; i++) bubspd[i]=(rand()%10)+5;



    int food[15],foodxleft[15],foodxright[15],foody[15],foodflipped[15],foodspeed1[15],foodspeed2[15],foodspeed3[15],foodspeed4[15],foodspeed5[15];
    for(i=0; i<15; i++)
    {
        food[i]=rand()%15;
        foodxleft[i]=(rand()%300)-300;
        foodxright[i]=(rand()%100)+750;
        foody[i]=rand()%480;
        foodflipped[i]=(rand()%10);
        foodspeed1[i]=(rand()%2)+ 3;
        foodspeed2[i]=(rand()%5)+ 5;
        foodspeed3[i]=(rand()%5)+ 7;
        foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
        // foodspeed4[i]=(rand()%5)+ 10;
        // foodspeed5[i]=(rand()%5)+ 15;
    }





    int medium[15],mediumxleft[15],mediumxright[15],mediumy[15],mediumflipped[15],mediumspeed1[15],mediumspeed2[15],mediumspeed3[15],mediumspeed4[15],mediumspeed5[15];
    for(i=0; i<15; i++)
    {
        medium[i]=rand()%15;
        mediumxleft[i]=(rand()%300)-400;
        mediumxright[i]=(rand()%100)+800;
        mediumy[i]=rand()%480;
        mediumflipped[i]=(rand()%10);
        mediumspeed1[i]=rand()%2 + 3;
        mediumspeed2[i]=(rand()%5) + 5;
        mediumspeed3[i]=(rand()%5)+ 7;
        mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);
        // mediumspeed4[i]=(rand()%5)+ 10;
        // mediumspeed5[i]=(rand()%5)+ 15;
    }







    while(1)
    {

        cout<<"sldhf"<<endl;

        mciSendString("play epic.mp3", NULL, 0, NULL);
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();




        //PAUSE
        if(GetAsyncKeyState(VK_ESCAPE)) return;
        if(GetAsyncKeyState(VK_SPACE) && kbhit())
        {
            setactivepage(page);
            setvisualpage(page);
            if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
            readimagefile("space.gif",0,-25,640,455);
            delay(200);
            while(!GetAsyncKeyState(VK_SPACE))
            {
                if(GetAsyncKeyState(VK_ESCAPE)) return;
            }
        }




        GetCursorPos(&mouse);
        mouse.y-=23;
        mouse.x-=15;








        if(frame>=0 && frame<=150) level=1;
        if(frame>150 && frame<=300) level=2;
        if(frame>300 && frame<=600) level=3;

        if(frame>600 && frame<=800) lvl=1;
        if(frame>800 && frame<=1000) lvl=2;
        if(frame>1000 && frame<=1200) lvl=3;
        if(frame>1200 && frame<=1400) lvl=4;
        if(frame>1400 && frame<=1500) lvl=5;
        // if(frame>900 && frame<=1200) level=4;
        //if(frame>1200) level=5;
        // printf("%d\n",level);


        // if(mouse.x<50)  readimagefile("sea.jpg", 0, 0, 740, 480);
        //else if(mouse.x>590)  readimagefile("sea.jpg", -100, 0, 640, 480);
        //else readimagefile("sea.jpg", -50, 0, 700, 480);

        //  printf("%d\n",frame);
        //MOVING BACKGROUND
        //readimagefile("s.jpg", mouse.x/(-6.4), mouse.y/(-8), (1580-(mouse.x/6.4)), 860-(mouse.y/8));


        if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
        if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));






        //BUBBLES
        //Small Bubbles
        int i,buby[15];
        for(i=0; i<4; i++)
        {
            readimagefile("bubbles.gif",bubx[i]-mouse.x/6.4,buby1[i],bubx[i]+7.5-(((mouse.x/6.4))),buby1[i]+7.5);
            buby1[i]-=bubspd[i];
            if(buby1[i]<-10)
            {
                bubx[i]=rand()%640;
                buby1[i]=(rand()%100)+480;
            }
        }
        //Big Bubbles
        for(i=4; i<8; i++)
        {
            readimagefile("bubbles.gif",bubx[i]-mouse.x/6,buby1[i],bubx[i]+10-(mouse.x/6),buby1[i]+10);
            buby1[i]-=bubspd[i];
            if(buby1[i]<-10)
            {
                bubx[i]=rand()%640;
                buby1[i]=(rand()%100)+480;
            }
        }





        //FISH
        frame++;

        //FISH G1
        if(growth==0){
        if(mouse.x<fishx)
        {
            if(frame%8==0) readimagefile("ff0.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==1) readimagefile("ff1.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==2) readimagefile("ff2.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==3) readimagefile("ff3.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==4) readimagefile("ff4.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==5) readimagefile("ff5.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==6) readimagefile("ff6.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==7) readimagefile("ff7.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            flip=1;
        }
        if (mouse.x>fishx)
        {
            if(frame%8==0) readimagefile("f0.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==1) readimagefile("f1.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==2) readimagefile("f2.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==3) readimagefile("f3.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==4) readimagefile("f4.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==5) readimagefile("f5.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==6) readimagefile("f6.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==7) readimagefile("f7.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            flip=0;
        }
        if(mouse.x==fishx && flip==1)
        {
            if(frame%8==0) readimagefile("ff0.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==1) readimagefile("ff1.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==2) readimagefile("ff2.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==3) readimagefile("ff3.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==4) readimagefile("ff4.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==5) readimagefile("ff5.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==6) readimagefile("ff6.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==7) readimagefile("ff7.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
        }
        if(mouse.x==fishx && flip==0)
        {
            if(frame%8==0) readimagefile("f0.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==1) readimagefile("f1.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==2) readimagefile("f2.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==3) readimagefile("f3.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==4) readimagefile("f4.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==5) readimagefile("f5.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==6) readimagefile("f6.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
            if(frame%8==7) readimagefile("f7.gif",mouse.x-10,mouse.y-10,mouse.x+50,mouse.y+30);
        }
        fishx=mouse.x;
        fishy=mouse.y;
    }



       //FOR FISH G2

       if(growth==1){
       if(mouse.x<fishx)
        {
            if(frame%8==0) readimagefile("ff0.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==1) readimagefile("ff1.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==2) readimagefile("ff2.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==3) readimagefile("ff3.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==4) readimagefile("ff4.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==5) readimagefile("ff5.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==6) readimagefile("ff6.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==7) readimagefile("ff7.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            flip=1;
        }
        if (mouse.x>fishx)
        {
            if(frame%8==0) readimagefile("f0.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==1) readimagefile("f1.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==2) readimagefile("f2.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==3) readimagefile("f3.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==4) readimagefile("f4.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==5) readimagefile("f5.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==6) readimagefile("f6.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==7) readimagefile("f7.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            flip=0;
        }
        if(mouse.x==fishx && flip==1)
        {
            if(frame%8==0) readimagefile("ff0.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==1) readimagefile("ff1.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==2) readimagefile("ff2.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==3) readimagefile("ff3.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==4) readimagefile("ff4.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==5) readimagefile("ff5.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==6) readimagefile("ff6.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==7) readimagefile("ff7.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
        }
        if(mouse.x==fishx && flip==0)
        {
            if(frame%8==0) readimagefile("f0.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==1) readimagefile("f1.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==2) readimagefile("f2.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==3) readimagefile("f3.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==4) readimagefile("f4.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==5) readimagefile("f5.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==6) readimagefile("f6.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
            if(frame%8==7) readimagefile("f7.gif",mouse.x-30,mouse.y-30,mouse.x+100,mouse.y+60);
        }
        fishx=mouse.x;
        fishy=mouse.y;

       }


        //SHARK


        if(level>=1)
        {

            if(frame%7==0) readimagefile("s0.gif",enemyx + mouse.x/(-6.4),enemyy-(mouse.y/8),enemyx+250+ mouse.x/(-6.4),enemyy+200-(mouse.y/8));
            if(frame%7==1) readimagefile("s1.gif",enemyx+ mouse.x/(-6.4),enemyy-(mouse.y/8),enemyx+ mouse.x/(-6.4)+250,enemyy+200-(mouse.y/8));
            if(frame%7==2) readimagefile("s2.gif",enemyx+ mouse.x/(-6.4),enemyy-(mouse.y/8),enemyx+ mouse.x/(-6.4)+250,enemyy+200-(mouse.y/8));
            if(frame%7==3) readimagefile("s3.gif",enemyx+ mouse.x/(-6.4),enemyy-(mouse.y/8),enemyx+ mouse.x/(-6.4)+250,enemyy+200-(mouse.y/8));
            if(frame%7==4) readimagefile("s5.gif",enemyx+ mouse.x/(-6.4),enemyy-(mouse.y/8),enemyx+ mouse.x/(-6.4)+250,enemyy+200-(mouse.y/8));
            if(frame%7==5) readimagefile("s6.gif",enemyx+ mouse.x/(-6.4),enemyy-(mouse.y/8),enemyx+ mouse.x/(-6.4)+250,enemyy+200-(mouse.y/8));
            if(frame%7==6) readimagefile("s7.gif",enemyx+ mouse.x/(-6.4),enemyy-(mouse.y/8),enemyx+ mouse.x/(-6.4)+250,enemyy+200-(mouse.y/8));
            //if(level==1) enemyx-=20;
            //if(level==2) enemyx-=25;

            //Shark Angle
            //  cout<<(double) (enemyy-mouse.y)/(enemyx-mouse.x)<<endl;
            if(flag_s==99)
            {
                if(level==2) enemyx-=20;
                if(level==3) enemyx-=25;
                if(level==4) enemyx-=30;

            }
            if(enemyx<=650 && enemyx>=620) flag_s=0;

            if(flag_s>=0 && enemyx>mouse.x)
            {
                if((enemyx-mouse.x)<=100)  m_s=(double)(enemyy-mouse.y)/100;
                else m_s=(double)(enemyy-mouse.y)/(enemyx-mouse.x);
                //  cout<<m_s<<endl;
                flag_s=1;
            }
            if(flag_s>=0)
            {
                if(level==2) enemyx-=20;
                if(level==3) enemyx-=25;
                if(level==4) enemyx-=30;

                if(level==2) enemyy-=(m_s*20);
                if(level==3) enemyy-=(m_s*25);
                if(level==4) enemyy-=(m_s*30);


            }

            //if(level==3) enemyx-=20;
            //if(level==4) enemyx-=25;
            //if(level==5) enemyx-=30;


            if(enemyx<(-600))
            {
                enemyx=(rand()%100)+1000;
                enemyy=rand()%400;
                flag_s=99;
            }
            //collision for G1
            if(growth==0){
            if(fishx>=enemyx-20+ mouse.x/(-6.4) && fishx<=enemyx+240+ mouse.x/(-6.4) && fishy>=enemyy+35-(mouse.y/8) && fishy<=enemyy+140-(mouse.y/8))
            {
                PlaySound("biteslow.wav",NULL,SND_ASYNC);
                delay(1000);
                // outtextxy(50,50,"OOPS");
                c++;

                setvisualpage(page);
                readimagefile("hb1.gif",220,140,420,340);
                delay(500);
                setvisualpage(page);
                if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                readimagefile("hb2.gif",215,140,425,340);
                page=1-page;
                //getch();
                delay(1000);
                if(c>=3)
                {

                    return;

                }

                game();
                break;


            }
            }


           //collision for G2

           if(growth==1)
           {

            if(fishx>=enemyx-60+ mouse.x/(-6.4) && fishx<=enemyx+250+ mouse.x/(-6.4) && fishy>=enemyy+20-(mouse.y/8) && fishy<=enemyy+160-(mouse.y/8))
            {
                PlaySound("biteslow.wav",NULL,SND_ASYNC);
                delay(1000);
                // outtextxy(50,50,"OOPS");
                c++;

                setvisualpage(page);
                readimagefile("hb1.gif",220,140,420,340);
                delay(500);
                setvisualpage(page);
                if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                readimagefile("hb2.gif",215,140,425,340);
                page=1-page;
                //getch();
                delay(1000);
                if(c>=3)
                {

                    return;

                }

                game();
                break;


            }

           }

            if(c>=3)
            {

                return;
            }

        }


        //OTCOPUS


        if(level>1)
        {

            readimagefile("octopus.gif",octox + mouse.x/(-6.4),octoy-(mouse.y/8),octox+80+ mouse.x/(-6.4),octoy+90-(mouse.y/8));

            if(level==2) octoy-=3;
            if(level==3) octoy-=8;
            else octoy-=12;
            if(octoy<-100)
            {
                octox=(rand()%500)+50;
                octoy=rand()%300+500;
            }
            //COllision for G1
            if(growth==0)
            {
            if(fishx>=octox-45+ mouse.x/(-6.4) && fishx<=octox+75+ mouse.x/(-6.4) && fishy>=octoy-(mouse.y/8) && fishy<=octoy+110-(mouse.y/8))
            {

                // outtextxy(50,50,"OOPS");
                c++;
                //scr-=5;
                setvisualpage(page);
                PlaySound("sting.wav",NULL,SND_ASYNC);
                delay(1000);
                PlaySound("lifegone.wav",NULL,SND_ASYNC);
                readimagefile("hb1.gif",220,140,420,340);
                delay(500);
                setvisualpage(page);
                if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                readimagefile("hb2.gif",215,140,425,340);
                page=1-page;
                //getch();
                delay(1500);
                if(c>=3)
                {

                    return;

                }

                game();
                break;


            }


            if(c>=3)
            {

                return;
            }

        }


        //For Growth 1
        if(growth==1)
        {

            if(fishx>=octox-75+ mouse.x/(-6.4) && fishx<=octox+98+ mouse.x/(-6.4) && fishy>=octoy-(mouse.y/8)-45 && fishy<=octoy+110-(mouse.y/8))
            {

                // outtextxy(50,50,"OOPS");
                c++;
                //scr-=5;
                setvisualpage(page);
                PlaySound("sting.wav",NULL,SND_ASYNC);
                delay(1000);
                PlaySound("lifegone.wav",NULL,SND_ASYNC);
                readimagefile("hb1.gif",220,140,420,340);
                delay(500);
                setvisualpage(page);
                if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                readimagefile("hb2.gif",215,140,425,340);
                page=1-page;
                //getch();
                delay(1500);
                if(c>=3)
                {

                    return;

                }

                game();
                break;


            }


            if(c>=3)
            {

                return;
            }

        }
        }



        //SMALL
        for(i=0; i<=level*4; i++)
        {


            if(food[i]%3==0 && foodflipped[i]%2==0)
            {
                readimagefile("gold.gif",foodxleft[i]+ mouse.x/(-6.4),foody[i]-(mouse.y/8),foodxleft[i]+ mouse.x/(-6.4)+40,foody[i]-(mouse.y/8)+25);
                //foodxleft[i]+=foodspeed[i];
                if(level==1) foodxleft[i]+=foodspeed1[i];
                if(level==2) foodxleft[i]+=foodspeed2[i];
                if(level==3 && lvl==0) foodxleft[i]+=foodspeed3[i];
                if(level==3 && lvl>0) foodxleft[i]+=foodspeed4[i];
                //if(level==4) foodxleft[i]+=foodspeed4[i];
                // if(level==5) foodxleft[i]+=foodspeed5[i];

                if (foodxleft[i]>700)
                {
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    //if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                }

                //G1
                if(growth==0){
                if(fishx>=foodxleft[i]+ mouse.x/(-6.4)-40 && fishx<=foodxleft[i]+ mouse.x/(-6.4)+40 && fishy>=foody[i]-(mouse.y/8)-25 && fishy<=foody[i]-(mouse.y/8)+30 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    //readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;

                    if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;
                    // if(level==5) scr+=15;
                }
                }


                 //G2
                if(growth==1){
                if(fishx>=foodxleft[i]+ mouse.x/(-6.4)-60 && fishx<=foodxleft[i]+ mouse.x/(-6.4)+59 && fishy>=foody[i]-(mouse.y/8)-40 && fishy<=foody[i]-(mouse.y/8)+35 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    //readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;

                    if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;
                    // if(level==5) scr+=15;
                }
                }



                //Collision with SHARK
                if(foodxleft[i]>=enemyx+5 && foodxleft[i]<=enemyx+240 && foody[i]>=enemyy+15 && foody[i]<=enemyy+130)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                }


            }





            if(food[i]%3==0 && foodflipped[i]%2==1)
            {
                readimagefile("goldflipped.gif",foodxright[i]+ mouse.x/(-6.4),foody[i]-(mouse.y/8),foodxright[i]+40+ mouse.x/(-6.4),foody[i]+25-(mouse.y/8));

                // foodxright[i]-=foodspeed[i];
                if(level==1) foodxright[i]-=foodspeed1[i];
                if(level==2) foodxright[i]-=foodspeed2[i];
                if(level==3 && lvl==0) foodxright[i]-=foodspeed3[i];
                if(level==3 && lvl>0) foodxright[i]-=foodspeed4[i];
                // if(level==4) foodxright[i]-=foodspeed4[i];
                //if(level==5) foodxright[i]-=foodspeed5[i];

                if (foodxright[i]<-30)
                {
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    //foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                }

                //G1
                if(growth==0){
                if(fishx>=foodxright[i]+ mouse.x/(-6.4)-40 && fishx<=foodxright[i]+ mouse.x/(-6.4)+40 && fishy>=foody[i]-(mouse.y/8)-25 && fishy<=foody[i]-(mouse.y/8)+30 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    //if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                    if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;
                    //if(level==5) scr+=15;
                }
                }

                //G2
                if(growth==1){
                if(fishx>=foodxright[i]+ mouse.x/(-6.4)-60 && fishx<=foodxright[i]+ mouse.x/(-6.4)+59 && fishy>=foody[i]-(mouse.y/8)-40 && fishy<=foody[i]-(mouse.y/8)+35 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    //if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                    if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;
                    //if(level==5) scr+=15;
                }
                }

                //Collision with SHARK
                if(foodxright[i]>=enemyx+5 && foodxright[i]<=enemyx+240 && foody[i]>=enemyy+15 && foody[i]<=enemyy+130)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                }

            }








            if(food[i]%3==1 && foodflipped[i]%2==0)
            {
                readimagefile("red.gif",foodxleft[i]+ mouse.x/(-6.4),foody[i]-(mouse.y/8),foodxleft[i]+ mouse.x/(-6.4)+30,foody[i]-(mouse.y/8)+20);

                // foodxleft[i]+=foodspeed[i];
                if(level==1) foodxleft[i]+=foodspeed1[i];
                if(level==2) foodxleft[i]+=foodspeed2[i];
                if(level==3 && lvl==0) foodxleft[i]+=foodspeed3[i];
                if(level==3 && lvl>0) foodxleft[i]+=foodspeed4[i];
                //if(level==4) foodxleft[i]+=foodspeed4[i];
                // if(level==5) foodxleft[i]+=foodspeed5[i];

                if (foodxleft[i]>670)
                {
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%5)+5;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    //if(level==5) foodspeed5[i]=(rand()%5)+15;
                }

                //G1
                if(growth==0){
                if(fishx>=foodxleft[i]+ mouse.x/(-6.4)-45 && fishx<=foodxleft[i]+ mouse.x/(-6.4)+40 && fishy>=foody[i]-(mouse.y/8)-30 && fishy<=foody[i]-(mouse.y/8)+30 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    tasty=frame;
                    readimagefile("tasty.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    if(level==1 || level==2) scr+=5;
                    if(level==3 || level==4) scr+=10;
                    // if(level==5) scr+=15;
                }
                }

                //G2
                if(growth==1){
                if(fishx>=foodxleft[i]+ mouse.x/(-6.4)-75 && fishx<=foodxleft[i]+ mouse.x/(-6.4)+55 && fishy>=foody[i]-(mouse.y/8)-45 && fishy<=foody[i]-(mouse.y/8)+35 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    tasty=frame;
                    readimagefile("tasty.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    if(level==1 || level==2) scr+=5;
                    if(level==3 || level==4) scr+=10;
                    // if(level==5) scr+=15;
                }
                }

                //Collision with SHARK
                if(foodxleft[i]>=enemyx+5 && foodxleft[i]<=enemyx+240 && foody[i]>=enemyy+15 && foody[i]<=enemyy+130)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                }

            }





            if(food[i]%3==1 && foodflipped[i]%2==1)
            {
                readimagefile("redflipped.gif",foodxright[i]+ mouse.x/(-6.4),foody[i]-(mouse.y/8),foodxright[i]+ mouse.x/(-6.4)+30,foody[i]-(mouse.y/8)+20);
                // foodxright[i]-=foodspeed[i];
                if(level==1) foodxright[i]-=foodspeed1[i];
                if(level==2) foodxright[i]-=foodspeed2[i];
                if(level==3 && lvl==0) foodxright[i]-=foodspeed3[i];
                if(level==3 && lvl>0) foodxright[i]-=foodspeed4[i];
                // if(level==4) foodxright[i]-=foodspeed4[i];
                //if(level==5) foodxright[i]-=foodspeed5[i];

                if (foodxright[i]<-30)
                {
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    //foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                }

                //G1
                if(growth==0){
                if(fishx>=foodxright[i]+ mouse.x/(-6.4)-45 && fishx<=foodxright[i]+ mouse.x/(-6.4)+40 && fishy>=foody[i]-(mouse.y/8)-30 && fishy<=foody[i]-(mouse.y/8)+30 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    tasty=frame;
                    readimagefile("tasty.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    //foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                    if(level==1 || level==2) scr+=5;
                    if(level==3 || level==4) scr+=10;
                    // if(level==5) scr+=15;
                }
                }

                //G2
                if(growth==1){
                if(fishx>=foodxright[i]+ mouse.x/(-6.4)-75 && fishx<=foodxright[i]+ mouse.x/(-6.4)+55 && fishy>=foody[i]-(mouse.y/8)-45 && fishy<=foody[i]-(mouse.y/8)+35 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    tasty=frame;
                    readimagefile("tasty.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    //foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                    if(level==1 || level==2) scr+=5;
                    if(level==3 || level==4) scr+=10;
                    // if(level==5) scr+=15;
                }
                }

                //Collision with SHARK
                if(foodxright[i]>=enemyx+5 && foodxright[i]<=enemyx+240 && foody[i]>=enemyy+15 && foody[i]<=enemyy+130)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                }
            }






            if(food[i]%3==2 && foodflipped[i]%2==0)
            {
                readimagefile("blue.gif",foodxleft[i]+ mouse.x/(-6.4),foody[i]-(mouse.y/8),foodxleft[i]+50+ mouse.x/(-6.4),foody[i]-(mouse.y/8)+40);

                //foodxleft[i]+=foodspeed[i];
                if(level==1) foodxleft[i]+=foodspeed1[i];
                if(level==2) foodxleft[i]+=foodspeed2[i];
                if(level==3 && lvl==0) foodxleft[i]+=foodspeed3[i];
                if(level==3 && lvl>0) foodxleft[i]+=foodspeed4[i];
                //if(level==4) foodxleft[i]+=foodspeed4[i];
                // if(level==5) foodxleft[i]+=foodspeed5[i];

                if (foodxleft[i]>700)
                {
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    //foodspeed[i]=(rand()%5)+5;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                }

                //G1
                if(growth==0){
                if(fishx>=foodxleft[i]+ mouse.x/(-6.4)-40 && fishx<=foodxleft[i]+ mouse.x/(-6.4)+40 && fishy>=foody[i]-(mouse.y/8)-20 && fishy<=foody[i]-(mouse.y/8)+35 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    yummy=frame;
                    readimagefile("yummy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%5)+5;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    //if(level==4) foodspeed4[i]=(rand()%5)+10;
                    //if(level==5) foodspeed5[i]=(rand()%5)+15;
                    if(level==1 || level==2) scr+=5;
                    if(level==3 || level==4) scr+=10;
                    //if(level==5) scr+=15;
                }
                }

                //G2
                if(growth==1){
                if(fishx>=foodxleft[i]+ mouse.x/(-6.4)-60 && fishx<=foodxleft[i]+ mouse.x/(-6.4)+65 && fishy>=foody[i]-(mouse.y/8)-35 && fishy<=foody[i]-(mouse.y/8)+45 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    yummy=frame;
                    readimagefile("yummy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%5)+5;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    //if(level==4) foodspeed4[i]=(rand()%5)+10;
                    //if(level==5) foodspeed5[i]=(rand()%5)+15;
                    if(level==1 || level==2) scr+=5;
                    if(level==3 || level==4) scr+=10;
                    //if(level==5) scr+=15;
                }
                }

                //Collision with SHARK
                if(foodxleft[i]>=enemyx+5 && foodxleft[i]<=enemyx+240 && foody[i]>=enemyy+15 && foody[i]<=enemyy+130)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                }

            }








            if(food[i]%3==2 && foodflipped[i]%2==1)
            {
                readimagefile("blueflipped.gif",foodxright[i]+ mouse.x/(-6.4),foody[i]-(mouse.y/8),foodxright[i]+ mouse.x/(-6.4)+50,foody[i]-(mouse.y/8)+40);
                // foodxright[i]-=foodspeed[i];
                if(level==1) foodxright[i]-=foodspeed1[i];
                if(level==2) foodxright[i]-=foodspeed2[i];
                if(level==3) foodxright[i]-=foodspeed3[i];
                // if(level==4) foodxright[i]-=foodspeed4[i];
                //if(level==5) foodxright[i]-=foodspeed5[i];

                if (foodxright[i]<-30)
                {
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3 && lvl==0) foodxright[i]-=foodspeed3[i];
                    if(level==3 && lvl>0) foodxright[i]-=foodspeed4[i];
                    //  if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                }

                //G1
                if(growth==0){
                if(fishx>=foodxright[i]+ mouse.x/(-6.4)-40 && fishx<=foodxright[i]+ mouse.x/(-6.4)+40 && fishy>=foody[i]-(mouse.y/8)-20 && fishy<=foody[i]-(mouse.y/8)+30 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    yummy=frame;
                    readimagefile("yummy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    //foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                    if(level==1 || level==2) scr+=5;
                    if(level==3 || level==4) scr+=10;
                    // if(level==5) scr+=15;
                }
                }

                //G2
                if(growth==1){
                if(fishx>=foodxright[i]+ mouse.x/(-6.4)-60 && fishx<=foodxright[i]+ mouse.x/(-6.4)+65 && fishy>=foody[i]-(mouse.y/8)-35 && fishy<=foody[i]-(mouse.y/8)+45 )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    yummy=frame;
                    readimagefile("yummy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    //foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) foodspeed4[i]=(rand()%5)+10;
                    // if(level==5) foodspeed5[i]=(rand()%5)+15;
                    if(level==1 || level==2) scr+=5;
                    if(level==3 || level==4) scr+=10;
                    // if(level==5) scr+=15;
                }
                }


                //Collision with SHARK
                if(foodxright[i]>=enemyx+5 && foodxright[i]<=enemyx+240 && foody[i]>=enemyy+15 && foody[i]<=enemyy+130)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    foodxleft[i]=(rand()%100)-250;
                    foodxright[i]=(rand()%100)+750;
                    foody[i]=rand()%480;
                    foodflipped[i]=(rand()%2);
                    // foodspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) foodspeed1[i]=rand()%2+3;
                    if(level==2) foodspeed2[i]=(rand()%5)+5;
                    if(level==3) foodspeed3[i]=(rand()%5)+7;
                    foodspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                }

            }

        }



        if(frame<=crunchy+1) readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
        if(frame<=tasty+1) readimagefile("tasty.gif",fishx-50,fishy-40,fishx+50,fishy+40);
        if(frame<=yummy+1) readimagefile("yummy.gif",fishx-50,fishy-40,fishx+50,fishy+40);


        if(c>=3)
        {

            return;
        }


        //MEDIUM
        for(i=0; i<=level*3-1; i++)
        {
            if(medium[i]%3==0 && mediumflipped[i]%2==0)
            {
                readimagefile("teeth.gif",mediumxleft[i]+ mouse.x/(-6.4),mediumy[i]-(mouse.y/8),mediumxleft[i]+80+ mouse.x/(-6.4),mediumy[i]+50-(mouse.y/8));

                // mediumxleft[i]+=mediumspeed[i];
                //if(level==1) mediumxleft[i]+=mediumspeed1[i];
                //if(level==2) mediumxleft[i]+=mediumspeed2[i];
                //if(level==3) mediumxleft[i]+=mediumspeed3[i];
                // if(level==4) mediumxleft[i]+=mediumspeed4[i];
                // if(level==5) mediumxleft[i]+=mediumspeed5[i];

                if(flag_t[i]==99)
                {
                    if(level==1) mediumxleft[i]+=mediumspeed1[i];
                    if(level==2) mediumxleft[i]+=mediumspeed2[i];
                    if(level==3) mediumxleft[i]+=mediumspeed3[i];

                }
                if(mediumxleft[i]>=-10 && mediumxleft[i]<=20) flag_t[i]=0;



                if(flag_t[i]>=0 && mediumxleft[i]<mouse.x)
                {
                    if(-mediumxleft[i]+mouse.x<=200)    m_t[i]=(double)(mediumy[i]-mouse.y)/-200;
                    else m_t[i]=(double)(mediumy[i]-mouse.y)/(mediumxleft[i]-mouse.x);
                    flag_t[i]=1;
                }


                if(flag_t[i]==1)
                {
                    if(level==1) mediumxleft[i]+=mediumspeed1[i];
                    if(level==2) mediumxleft[i]+=mediumspeed2[i];
                    if(level==3) mediumxleft[i]+=mediumspeed3[i];

                    if(level==1) mediumy[i]+=m_t[i]*mediumspeed1[i];
                    if(level==2) mediumy[i]+=m_t[i]*mediumspeed2[i];
                    if(level==3) mediumy[i]+=m_t[i]*mediumspeed3[i];

                }

                if (mediumxleft[i]>700)
                {
                    flag_t[i]=99;
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    // mediumspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) mediumspeed4[i]=(rand()%5)+10;
                    // if(level==5) mediumspeed5[i]=(rand()%5)+15;
                }
                if(growth==0 && fishx>=mediumxleft[i]-45+mouse.x/(-6.4) && fishx<=mediumxleft[i]+80+mouse.x/(-6.4) && fishy>=mediumy[i]-15-(mouse.y/8) && fishy<=mediumy[i]+50-(mouse.y/8) )
                {

                    // mediumxleft[i]=(rand()%100)-150;
                    //mediumxright[i]=(rand()%100)+650;
                    //mediumy[i]=rand()%480;
                    //mediumflipped[i]=(rand()%2);
                    //mediumspeed[i]=(rand()%10)+rand()%5+1;
                    //outtextxy(50,50,"OOPS");
                    c++;
                    //scr-=5;
                    setvisualpage(page);
                    PlaySound("biteslow.wav",NULL,SND_ASYNC);
                    delay(1000);
                    PlaySound("lifegone.wav",NULL,SND_ASYNC);
                    readimagefile("hb1.gif",220,140,420,340);
                    delay(500);
                    setvisualpage(page);
                    if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    readimagefile("hb2.gif",215,140,425,340);

                    page=1-page;

                    delay(500);
                    if(c>=3)
                    {

                        return;

                    }
                    game();
                    break;
                }






                 if(growth==1 && fishx>=mediumxleft[i]-65+mouse.x/(-6.4) && fishx<=mediumxleft[i]+100+mouse.x/(-6.4) && fishy>=mediumy[i]-35-(mouse.y/8) && fishy<=mediumy[i]+65-(mouse.y/8) )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                     mediumxleft[i]=(rand()%100)-150;
                    mediumxright[i]=(rand()%100)+650;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                      if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;


                }


                //Collision with SHARK
                if(mediumxleft[i]>=enemyx-15 && mediumxleft[i]<=enemyx+220 && mediumy[i]>=enemyy+5 && mediumy[i]<=enemyy+140)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                }

            }
            if(medium[i]%3==0 && mediumflipped[i]%2==1)
            {
                readimagefile("teethflipped.gif",mediumxright[i]+ mouse.x/(-6.4),mediumy[i]-(mouse.y/8),mediumxright[i]+80+ mouse.x/(-6.4),mediumy[i]+50-(mouse.y/8));

                //mediumxright[i]-=mediumspeed[i];
                // if(level==1) mediumxright[i]-=mediumspeed1[i];
                // if(level==2) mediumxright[i]-=mediumspeed2[i];
                // if(level==3) mediumxright[i]-=mediumspeed3[i];
                // if(level==4) mediumxright[i]-=mediumspeed4[i];
                // if(level==5) mediumxright[i]-=mediumspeed5[i];
                if(flag_tf[i]==99)
                {
                    if(level==1) mediumxright[i]-=mediumspeed1[i];
                    if(level==2) mediumxright[i]-=mediumspeed2[i];
                    if(level==3) mediumxright[i]-=mediumspeed3[i];
                }
                if(mediumxright[i]<=650 && mediumxright[i]>=620) flag_tf[i]=0;






                if(flag_tf[i]>=0 && mediumxright[i]>mouse.x)
                {
                    if(mediumxright[i]-mouse.x<=200)    m_tf[i]=(double)(mediumy[i]-mouse.y)/200;
                    else m_tf[i]=(double)(mediumy[i]-mouse.y)/(mediumxright[i]-mouse.x);
                    flag_tf[i]=1;
                }
                if(flag_tf[i]==1)
                {
                    if(level==1) mediumxright[i]-=mediumspeed1[i];
                    if(level==2) mediumxright[i]-=mediumspeed2[i];
                    if(level==3) mediumxright[i]-=mediumspeed3[i];

                    if(level==1) mediumy[i]-=m_tf[i]*mediumspeed1[i];
                    if(level==2) mediumy[i]-=m_tf[i]*mediumspeed2[i];
                    if(level==3) mediumy[i]-=m_tf[i]*mediumspeed3[i];

                }

                if (mediumxright[i]<-100)
                {
                    flag_tf[i]=99;
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    //mediumspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    //if(level==4) mediumspeed4[i]=(rand()%5)+10;
                    //if(level==5) mediumspeed5[i]=(rand()%5)+15;
                }
                //G1
                if(growth==0 && fishx>=mediumxright[i]-45+mouse.x/(-6.4) && fishx<=mediumxright[i]+80+mouse.x/(-6.4) && fishy>=mediumy[i]-15-(mouse.y/8) && fishy<=mediumy[i]+50-(mouse.y/8) )
                {

                    // mediumxleft[i]=(rand()%100)-150;
                    //mediumxright[i]=(rand()%100)+650;
                    //mediumy[i]=rand()%480;
                    //mediumflipped[i]=(rand()%2);
                    //mediumspeed[i]=(rand()%10)+rand()%5+1;
                    // outtextxy(50,50,"OOPS");
                    c++;
                    //scr-=5;
                    setvisualpage(page);
                    PlaySound("biteslow.wav",NULL,SND_ASYNC);
                    delay(1000);
                    PlaySound("lifegone.wav",NULL,SND_ASYNC);
                    readimagefile("hb1.gif",220,140,420,340);
                    delay(500);
                    setvisualpage(page);
                    if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    readimagefile("hb2.gif",215,140,425,340);

                    page=1-page;

                    delay(500);
                    if(c>=3)
                    {

                        return;

                    }
                    game();
                    break;
                }

                //G2
                if(growth==1 && fishx>=mediumxright[i]-65+mouse.x/(-6.4) && fishx<=mediumxright[i]+100+mouse.x/(-6.4) && fishy>=mediumy[i]-35-(mouse.y/8) && fishy<=mediumy[i]+60-(mouse.y/8) )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                     mediumxleft[i]=(rand()%100)-150;
                    mediumxright[i]=(rand()%100)+650;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                      if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;


                }


                //Collision with SHARK
                if(mediumxright[i]>=enemyx && mediumxright[i]<=enemyx+220 && mediumy[i]>=enemyy+5 && mediumy[i]<=enemyy+140)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                }

            }







            if(medium[i]%3==1 && mediumflipped[i]%2==0)
            {
                readimagefile("indigo.gif",mediumxleft[i]+ mouse.x/(-6.4),mediumy[i]-(mouse.y/8),mediumxleft[i]+80+ mouse.x/(-6.4),mediumy[i]+50-(mouse.y/8));

                // mediumxleft[i]+=mediumspeed[i];
                // if(level==1) mediumxleft[i]+=mediumspeed1[i];
                //if(level==2) mediumxleft[i]+=mediumspeed2[i];
                // if(level==3) mediumxleft[i]+=mediumspeed3[i];
                // if(level==4) mediumxleft[i]+=mediumspeed4[i];
                //if(level==5) mediumxleft[i]+=mediumspeed5[i];

                if(flag_i[i]==99)
                {
                    if(level==1) mediumxleft[i]+=mediumspeed1[i];
                    if(level==2) mediumxleft[i]+=mediumspeed2[i];
                    if(level==3) mediumxleft[i]+=mediumspeed3[i];
                }

                if(mediumxleft[i]>=-10 && mediumxleft[i]<=20) flag_i[i]=0;

                if(flag_i[i]>=0 && mediumxleft[i]<mouse.x)
                {
                    if(-mediumxleft[i]+mouse.x<=200)    m_i[i]=(double)(mediumy[i]-mouse.y)/-200;
                    else m_i[i]=(double)(mediumy[i]-mouse.y)/(mediumxleft[i]-mouse.x);
                    flag_i[i]=1;
                }


                if(flag_i[i]==1)
                {
                    if(level==1) mediumxleft[i]+=mediumspeed1[i];
                    if(level==2) mediumxleft[i]+=mediumspeed2[i];
                    if(level==3) mediumxleft[i]+=mediumspeed3[i];

                    if(level==1) mediumy[i]+=m_i[i]*mediumspeed1[i];
                    if(level==2) mediumy[i]+=m_i[i]*mediumspeed2[i];
                    if(level==3) mediumy[i]+=m_i[i]*mediumspeed3[i];

                }

                if (mediumxleft[i]>670)
                {
                    flag_i[i]=99;
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    // mediumspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) mediumspeed4[i]=(rand()%5)+10;
                    //if(level==5) mediumspeed5[i]=(rand()%5)+15;
                }

                //G1
                if(growth==0 && fishx>=mediumxleft[i]+ mouse.x/(-6.4)-45 && fishx<=mediumxleft[i]+ mouse.x/(-6.4)+85 && fishy>=mediumy[i]-(mouse.y/8)-25 && fishy<=mediumy[i]-(mouse.y/8)+60 )
                {

                    // mediumxleft[i]=(rand()%100)-150;
                    //mediumxright[i]=(rand()%100)+650;
                    //mediumy[i]=rand()%480;
                    //mediumflipped[i]=(rand()%2);
                    //mediumspeed[i]=(rand()%10)+rand()%5+1;
                    //outtextxy(50,50,"OOPS");
                    c++;

                    //  scr-=5;
                    setvisualpage(page);
                    PlaySound("biteslow.wav",NULL,SND_ASYNC);
                    delay(1000);
                    PlaySound("lifegone.wav",NULL,SND_ASYNC);
                    readimagefile("hb1.gif",220,140,420,340);
                    delay(500);
                    setvisualpage(page);
                    if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    readimagefile("hb2.gif",215,140,425,340);

                    page=1-page;

                    delay(500);
                    if(c>=3)
                    {

                        return;

                    }
                    game();
                    break;
                }

                //G2
                if(growth==1 && fishx>=mediumxleft[i]-65+mouse.x/(-6.4) && fishx<=mediumxleft[i]+100+mouse.x/(-6.4) && fishy>=mediumy[i]-45-(mouse.y/8) && fishy<=mediumy[i]+60-(mouse.y/8) )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                     mediumxleft[i]=(rand()%100)-150;
                    mediumxright[i]=(rand()%100)+650;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                      if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;


                }


                //Collision with SHARK
                if(mediumxleft[i]>=enemyx && mediumxleft[i]<=enemyx+240 && mediumy[i]>=enemyy+5 && mediumy[i]<=enemyy+160)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                }

            }
            if(medium[i]%3==1 && mediumflipped[i]%2==1)
            {
                readimagefile("indigoflipped.gif",mediumxright[i]+ mouse.x/(-6.4),mediumy[i]-(mouse.y/8),mediumxright[i]+80+ mouse.x/(-6.4),mediumy[i]+50-(mouse.y/8));

                // mediumxright[i]-=mediumspeed[i];
                //if(level==1) mediumxright[i]-=mediumspeed1[i];
                //if(level==2) mediumxright[i]-=mediumspeed2[i];
                //if(level==3) mediumxright[i]-=mediumspeed3[i];
                // if(level==4) mediumxright[i]-=mediumspeed4[i];
                // if(level==5) mediumxright[i]-=mediumspeed5[i];

                if(flag_if[i]==99)
                {
                    if(level==1) mediumxright[i]-=mediumspeed1[i];
                    if(level==2) mediumxright[i]-=mediumspeed2[i];
                    if(level==3) mediumxright[i]-=mediumspeed3[i];
                }
                if(mediumxright[i]<=650  &&  mediumxright[i]>=620) flag_if[i]=0;




                if(flag_if[i]>=0 && mediumxright[i]>mouse.x)
                {
                    if(mediumxright[i]-mouse.x<=200)    m_if[i]=(double)(mediumy[i]-mouse.y)/200;
                    else m_if[i]=(double)(mediumy[i]-mouse.y)/(mediumxright[i]-mouse.x);
                    flag_if[i]=1;
                }


                if(flag_if[i]==1)
                {
                    if(level==1) mediumxright[i]-=mediumspeed1[i];
                    if(level==2) mediumxright[i]-=mediumspeed2[i];
                    if(level==3) mediumxright[i]-=mediumspeed3[i];

                    if(level==1) mediumy[i]-=m_if[i]*mediumspeed1[i];
                    if(level==2) mediumy[i]-=m_if[i]*mediumspeed2[i];
                    if(level==3) mediumy[i]-=m_if[i]*mediumspeed3[i];

                }
                if (mediumxright[i]<-100)
                {
                    flag_if[i]=99;
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    // mediumspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) mediumspeed4[i]=(rand()%5)+10;
                    // if(level==5) mediumspeed5[i]=(rand()%5)+15;
                }

                //G1
                if(growth==0 && fishx>=mediumxright[i]+ mouse.x/(-6.4)-45 && fishx<=mediumxright[i]+ mouse.x/(-6.4)+85 && fishy>=mediumy[i]-(mouse.y/8)-25 && fishy<=mediumy[i]-(mouse.y/8)+60 )
                {

                    // mediumxleft[i]=(rand()%100)-150;
                    //mediumxright[i]=(rand()%100)+650;
                    //mediumy[i]=rand()%480;
                    //mediumflipped[i]=(rand()%2);
                    //mediumspeed[i]=(rand()%10)+rand()%5+1;
                    // outtextxy(50,50,"OOPS");
                    c++;

                    //scr-=5;
                    setvisualpage(page);
                    PlaySound("biteslow.wav",NULL,SND_ASYNC);
                    delay(1000);
                    PlaySound("lifegone.wav",NULL,SND_ASYNC);
                    readimagefile("hb1.gif",220,140,420,340);
                    delay(500);
                    setvisualpage(page);
                    if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    readimagefile("hb2.gif",215,140,425,340);
                    page=1-page;

                    delay(500);
                    if(c>=3)
                    {

                        return;

                    }
                    game();
                    break;
                }

                //G2
                if(growth==1 && fishx>=mediumxright[i]-65+mouse.x/(-6.4) && fishx<=mediumxright[i]+100+mouse.x/(-6.4) && fishy>=mediumy[i]-45-(mouse.y/8) && fishy<=mediumy[i]+60-(mouse.y/8) )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                    mediumxleft[i]=(rand()%100)-150;
                    mediumxright[i]=(rand()%100)+650;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                    if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;


                }


                //Collision with SHARK
                if(mediumxright[i]>=enemyx && mediumxright[i]<=enemyx+220 && mediumy[i]>=enemyy+5 && mediumy[i]<=enemyy+140)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                }

            }







            if(medium[i]%3==2 && mediumflipped[i]%2==0)
            {
                readimagefile("orange.gif",mediumxleft[i]+ mouse.x/(-6.4),mediumy[i]-(mouse.y/8),mediumxleft[i]+ mouse.x/(-6.4)+70,mediumy[i]-(mouse.y/8)+40);

                // mediumxleft[i]+=mediumspeed[i];
                // if(level==1) mediumxleft[i]+=mediumspeed1[i];
                // if(level==2) mediumxleft[i]+=mediumspeed2[i];
                // if(level==3) mediumxleft[i]+=mediumspeed3[i];
                //  if(level==4) mediumxleft[i]+=mediumspeed4[i];
                //if(level==5) mediumxleft[i]+=mediumspeed5[i];

                if(flag_o[i]==99)
                {
                    if(level==1) mediumxleft[i]+=mediumspeed1[i];
                    if(level==2) mediumxleft[i]+=mediumspeed2[i];
                    if(level==3) mediumxleft[i]+=mediumspeed3[i];
                }

                if(mediumxleft[i]>=-10 && mediumxleft[i]<=20) flag_o[i]=0;


                if(flag_o[i]>=0 && mediumxleft[i]<mouse.x)
                {
                    if(-mediumxleft[i]+mouse.x<=200)    m_o[i]=(double)(mediumy[i]-mouse.y)/-200;
                    else m_o[i]=(double)(mediumy[i]-mouse.y)/(mediumxleft[i]-mouse.x);
                    flag_o[i]=1;
                }
                if(flag_o[i]==1)
                {
                    if(level==1) mediumxleft[i]+=mediumspeed1[i];
                    if(level==2) mediumxleft[i]+=mediumspeed2[i];
                    if(level==3) mediumxleft[i]+=mediumspeed3[i];

                    if(level==1) mediumy[i]+=m_o[i]*mediumspeed1[i];
                    if(level==2) mediumy[i]+=m_o[i]*mediumspeed2[i];
                    if(level==3) mediumy[i]+=m_o[i]*mediumspeed3[i];

                }

                if (mediumxleft[i]>700)
                {
                    flag_o[i]=99;
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    // mediumspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    //if(level==4) mediumspeed4[i]=(rand()%5)+10;
                    // if(level==5) mediumspeed5[i]=(rand()%5)+15;
                }
                //G1
                if(growth==0 && fishx>=mediumxleft[i]+ mouse.x/(-6.4)-45 && fishx<=mediumxleft[i]+ mouse.x/(-6.4)+85 && fishy>=mediumy[i]-(mouse.y/8)-25 && fishy<=mediumy[i]-(mouse.y/8)+50 )
                {

                    // mediumxleft[i]=(rand()%100)-150;
                    //mediumxright[i]=(rand()%100)+650;
                    //mediumy[i]=rand()%480;
                    //mediumflipped[i]=(rand()%2);
                    //mediumspeed[i]=(rand()%10)+rand()%5+1;
                    //outtextxy(50,50,"OOPS");
                    c++;
                    // scr-=5;
                    setvisualpage(page);
                    PlaySound("biteslow.wav",NULL,SND_ASYNC);
                    delay(1000);
                    PlaySound("lifegone.wav",NULL,SND_ASYNC);
                    readimagefile("hb1.gif",220,140,420,340);
                    delay(500);
                    setvisualpage(page);
                    if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    readimagefile("hb2.gif",215,140,425,340);

                    page=1-page;

                    delay(500);
                    if(c>=3)
                    {

                        return;

                    }
                    game();
                    break;
                }
                //G2
                if(growth==1 && fishx>=mediumxleft[i]-70+mouse.x/(-6.4) && fishx<=mediumxleft[i]+92+mouse.x/(-6.4) && fishy>=mediumy[i]-45-(mouse.y/8) && fishy<=mediumy[i]+60-(mouse.y/8) )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                     mediumxleft[i]=(rand()%100)-150;
                    mediumxright[i]=(rand()%100)+650;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                      if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;


                }


                //Collision with SHARK
                if(mediumxleft[i]>=enemyx && mediumxleft[i]<=enemyx+240 && mediumy[i]>=enemyy+5 && mediumy[i]<=enemyy+160)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                }

            }
            if(medium[i]%3==2 && mediumflipped[i]%2==1)
            {
                readimagefile("orangeflipped.gif",mediumxright[i]+ mouse.x/(-6.4),mediumy[i]-(mouse.y/8),mediumxright[i]+ mouse.x/(-6.4)+70,mediumy[i]-(mouse.y/8)+40);

                // mediumxright[i]-=mediumspeed[i];
                //if(level==1) mediumxright[i]-=mediumspeed1[i];
                //if(level==2) mediumxright[i]-=mediumspeed2[i];
                //if(level==3) mediumxright[i]-=mediumspeed3[i];
                // if(level==4) mediumxright[i]-=mediumspeed4[i];
                //if(level==5) mediumxright[i]-=mediumspeed5[i];

                if(flag_of[i]==99)
                {
                    if(level==1) mediumxright[i]-=mediumspeed1[i];
                    if(level==2) mediumxright[i]-=mediumspeed2[i];
                    if(level==3) mediumxright[i]-=mediumspeed3[i];
                }

                if(mediumxright[i]<=650 && mediumxright[i]>=620) flag_of[i]=0;


                if(flag_of[i]>=0 && mediumxright[i]>mouse.x)
                {
                    if(mediumxright[i]-mouse.x<=200)    m_of[i]=(double)(mediumy[i]-mouse.y)/200;
                    else m_of[i]=(double)(mediumy[i]-mouse.y)/(mediumxright[i]-mouse.x);
                    flag_of[i]=1;
                }



                if(flag_of[i]==1)
                {
                    if(level==1) mediumxright[i]-=mediumspeed1[i];
                    if(level==2) mediumxright[i]-=mediumspeed2[i];
                    if(level==3) mediumxright[i]-=mediumspeed3[i];

                    if(level==1) mediumy[i]-=m_of[i]*mediumspeed1[i];
                    if(level==2) mediumy[i]-=m_of[i]*mediumspeed2[i];
                    if(level==3) mediumy[i]-=m_of[i]*mediumspeed3[i];

                }

                if (mediumxright[i]<-100)
                {
                    flag_of[i]=99;
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    //mediumspeed[i]=(rand()%10)+rand()%5+1;
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);
                    // if(level==4) mediumspeed4[i]=(rand()%5)+10;
                    //if(level==5) mediumspeed5[i]=(rand()%5)+15;
                }
                //G1
                if(growth==0 && fishx>=mediumxright[i]+ mouse.x/(-6.4)-45 && fishx<=mediumxright[i]+ mouse.x/(-6.4)+80 && fishy>=mediumy[i]-(mouse.y/8)-25 && fishy<=mediumy[i]-(mouse.y/8)+50 )
                {

                    // mediumxleft[i]=(rand()%100)-150;
                    //mediumxright[i]=(rand()%100)+650;
                    //mediumy[i]=rand()%480;
                    //mediumflipped[i]=(rand()%2);
                    //mediumspeed[i]=(rand()%10)+rand()%5+1;
                    //outtextxy(50,50,"OOPS");
                    c++;
                    // scr-=5;
                    setvisualpage(page);
                    PlaySound("biteslow.wav",NULL,SND_ASYNC);
                    delay(1000);
                    PlaySound("lifegone.wav",NULL,SND_ASYNC);
                    readimagefile("hb1.gif",220,140,420,340);
                    delay(500);
                    setvisualpage(page);
                    if(frame%21==0) readimagefile("bg0.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==1) readimagefile("bg1.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==2) readimagefile("bg2.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==3) readimagefile("bg3.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==4) readimagefile("bg4.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==5) readimagefile("bg5.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==6) readimagefile("bg6.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==7) readimagefile("bg7.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==8) readimagefile("bg8.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==9) readimagefile("bg9.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==10) readimagefile("bg10.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==11) readimagefile("bg11.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==12) readimagefile("bg12.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==13) readimagefile("bg13.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==14) readimagefile("bg14.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==15) readimagefile("bg15.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==16) readimagefile("bg16.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==17) readimagefile("bg17.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==18) readimagefile("bg18.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==19) readimagefile("bg19.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    if(frame%21==20) readimagefile("bg20.gif", mouse.x/(-6.4), mouse.y/(-8), (780-(mouse.x/6.4)), 560-(mouse.y/8));
                    readimagefile("hb2.gif",215,140,425,340);


                    page=1-page;
                    delay(500);
                    if(c>=3)
                    {

                        return;

                    }
                    game();
                    break;

                }

                //G2
                if(growth==1 && fishx>=mediumxright[i]-70+mouse.x/(-6.4) && fishx<=mediumxright[i]+92+mouse.x/(-6.4) && fishy>=mediumy[i]-45-(mouse.y/8) && fishy<=mediumy[i]+60-(mouse.y/8) )
                {
                    PlaySound("munch.wav",NULL,SND_ASYNC);
                    crunchy=frame;
                    readimagefile("crunchy.gif",fishx-50,fishy-40,fishx+50,fishy+40);
                     mediumxleft[i]=(rand()%100)-150;
                    mediumxright[i]=(rand()%100)+650;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                      if(level==1 || level==2) scr+=5;
                    if(level==3 ) scr+=10;


                }


                //Collision with SHARK
                if(mediumxright[i]>=enemyx && mediumxright[i]<=enemyx+220 && mediumy[i]>=enemyy+5 && mediumy[i]<=enemyy+140)
                {
                    PlaySound("bitefast.wav",NULL,SND_ASYNC);
                    mediumxleft[i]=(rand()%100)-250;
                    mediumxright[i]=(rand()%100)+750;
                    mediumy[i]=rand()%480;
                    mediumflipped[i]=(rand()%2);
                    if(level==1) mediumspeed1[i]=rand()%2+3;
                    if(level==2) mediumspeed2[i]=(rand()%5)+5;
                    if(level==3) mediumspeed3[i]=(rand()%5)+7;
                    mediumspeed4[i]=(rand()%5)+ 7 +(lvl*3);

                }
            }


        }


        if(c>=3)
        {

            return ;
        }


        //HEART
        if(c<3)  readimagefile("heart1.gif",10,10,30,28);
        if(c<2)  readimagefile("heart1.gif",40,10,60,28);
        if(c<1) readimagefile("heart1.gif",70,10,90,28);



        //BONUS HEART
        int hposx,hposy,lifeplus;
        if(c>0 && frame%100==0)
        {
            hflag=1;
            hposx= rand()%550 +50;
            hposy= rand()%400 +50;
        }

        if(hflag==1)
        {
            if(htime>=0 && htime<20)
            {
                readimagefile("hb1.gif",hposx+mouse.x/(-6.4),hposy-(mouse.y/8),hposx+25+mouse.x/(-6.4),hposy+25-(mouse.y/8));
                htime++;
            }

              //G1
             if(growth==0 && fishx>=hposx+ mouse.x/(-6.4)-35 && fishx<=hposx+ mouse.x/(-6.4)+35 && fishy>=hposy-(mouse.y/8)-30 && fishy<=hposy-(mouse.y/8)+30 )
            {
                hflag=0;
                c--;
                htime=0;
               readimagefile("lifeplus.gif",fishx-50,fishy-35,fishx+50,fishy);

                lifeplus= frame;
            }

            //G2
            if(growth==1 && fishx>=hposx+ mouse.x/(-6.4)-65 && fishx<=hposx+ mouse.x/(-6.4)+50 && fishy>=hposy-(mouse.y/8)-40 && fishy<=hposy-(mouse.y/8)+40 )
            {
                hflag=0;
                c--;
                htime=0;
               readimagefile("lifeplus.gif",fishx-50,fishy-35,fishx+50,fishy);

                lifeplus= frame;
            }


            if(htime>=20)
            {
                hflag=0;
                htime=0;
            }

        }

         if(frame>=lifeplus && frame<=lifeplus+3) readimagefile("lifeplus.gif",fishx-50,fishy-35,fishx+50,fishy);








        //LEVEL IMAGES
        if(var!=level && level==2) level2image=frame;
        if(level2image+5>=frame) readimagefile("lvl2.gif",180,200,483,260);


        if(var!=level && level==3) level3image=frame;
        if(level3image+5>=frame) readimagefile("lvl3.gif",180,200,483,260);


        if(var!=level && level==1) level1image=frame;
        if(level1image+5>=frame) readimagefile("lvl1.gif",180,200,483,260);


        //growth increase
        if(scr>50) growth=1;






        //SCORE
        if(scr<0) scr=0;
        // sprintf(Score,"Score %d",scr);
        //  outtextxy(550,10,Score);
        digits(scr);



        page=1-page;
        var=level;

    }

    return;
}
