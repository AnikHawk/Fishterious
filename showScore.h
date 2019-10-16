//showing names

void display_names(char name[],int index)
{
    int len=strlen(name);
    int k,i;
    int x_distance=14, y_distance=30,start_x=280, start_y=90,end_x=315,end_y=125;
    for(i=0,k=len-1; i<len; i++,k--)
    {
        if(name[k]=='a'|| name[k]=='A') readimagefile("a.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='b'|| name[k]=='B') readimagefile("b.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='c'|| name[k]=='C') readimagefile("c.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='d'|| name[k]=='D') readimagefile("d.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='e'|| name[k]=='E') readimagefile("e.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='f'|| name[k]=='F') readimagefile("f.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='g'|| name[k]=='G') readimagefile("g.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='h'|| name[k]=='H') readimagefile("h.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='i'|| name[k]=='I') readimagefile("i.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='j'|| name[k]=='J') readimagefile("j.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='k'|| name[k]=='K') readimagefile("k.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='l'|| name[k]=='L') readimagefile("l.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='m'|| name[k]=='M') readimagefile("m.gif",start_x-(i*x_distance),90+(index*y_distance),end_x+3-(i*x_distance),125+(index*y_distance));
        if(name[k]=='n'|| name[k]=='N') readimagefile("n.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='o'|| name[k]=='O') readimagefile("o.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='p'|| name[k]=='P') readimagefile("p.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='q'|| name[k]=='Q') readimagefile("q.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='r'|| name[k]=='R') readimagefile("r.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='s'|| name[k]=='S') readimagefile("s.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='t'|| name[k]=='T') readimagefile("t.gif",start_x-3-(i*x_distance),90+(index*y_distance),end_x-3-(i*x_distance),125+(index*y_distance));
        if(name[k]=='u'|| name[k]=='U') readimagefile("u.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='v'|| name[k]=='V') readimagefile("v.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='w'|| name[k]=='W') readimagefile("w.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='x'|| name[k]=='X') readimagefile("x.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='y'|| name[k]=='Y') readimagefile("y.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));
        if(name[k]=='z'|| name[k]=='Z') readimagefile("z.gif",start_x-(i*x_distance),90+(index*y_distance),end_x-(i*x_distance),125+(index*y_distance));



        readimagefile("hype.gif",283+25,90+(index*y_distance),318+15,125+(index*y_distance)-2);

    }
    return ;

}


void display_scores(int number,int index)
{

    // int len=strlen(name);
    int k,i=0;
    int x_distance=14, y_distance=30,start_x=325, start_y=90,end_x=360,end_y=125;

    if(number<0) number=0;
    if(number==0) readimagefile("n0.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
    else
    {
        int n=log10(number)+1;
        int a[10],x;
        for(x=1; x<10; x++) a[x]=-1;
        for(x=n-1; x>=0; x--)
        {
            a[x]=number%10;
            number=number/10;
        }

        for(i=0; i<n; i++)
        {
            if(a[i]==0) readimagefile("n0.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
            if(a[i]==1) readimagefile("n1.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
            if(a[i]==2) readimagefile("n2.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
            if(a[i]==3) readimagefile("n3.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
            if(a[i]==4) readimagefile("n4.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
            if(a[i]==5) readimagefile("n5.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
            if(a[i]==6) readimagefile("n6.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
            if(a[i]==7) readimagefile("n7.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));
            if(a[i]==8) readimagefile("n8.gif",start_x+(i*x_distance),start_y+(index*y_distance)+3,end_x+(i*x_distance),end_y+(index*y_distance)+3);
            if(a[i]==9) readimagefile("n9.gif",start_x+(i*x_distance),start_y+(index*y_distance),end_x+(i*x_distance),end_y+(index*y_distance));




        }
        return ;
    }

}
