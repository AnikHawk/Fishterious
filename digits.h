void digits(int number)
{
    if(number<0) number=0;
    int n=log10(number)+1;
    int a[10],x;
    for(x=1; x<10; x++) a[x]=-1;
    for(x=0; x<n; x++)
    {
        a[x]=number%10;
        number=number/10;
    }
    if(a[0]==5) readimagefile("5.gif",605,10,620,30);
    else readimagefile("0.gif",605,10,620,30);

    if(a[1]==0) readimagefile("0.gif",585,10,600,30);
    if(a[1]==1) readimagefile("1.gif",585,10,600,30);
    if(a[1]==2) readimagefile("2.gif",585,10,600,30);
    if(a[1]==3) readimagefile("3.gif",585,10,600,30);
    if(a[1]==4) readimagefile("4.gif",585,10,600,30);
    if(a[1]==5) readimagefile("5.gif",585,10,600,30);
    if(a[1]==6) readimagefile("6.gif",585,10,600,30);
    if(a[1]==7) readimagefile("7.gif",585,10,600,30);
    if(a[1]==8) readimagefile("8.gif",585,10,600,30);
    if(a[1]==9) readimagefile("9.gif",585,10,600,30);


    if(a[2]==0) readimagefile("0.gif",565,10,580,30);
    if(a[2]==1) readimagefile("1.gif",565,10,580,30);
    if(a[2]==2) readimagefile("2.gif",565,10,580,30);
    if(a[2]==3) readimagefile("3.gif",565,10,580,30);
    if(a[2]==4) readimagefile("4.gif",565,10,580,30);
    if(a[2]==5) readimagefile("5.gif",565,10,580,30);
    if(a[2]==6) readimagefile("6.gif",565,10,580,30);
    if(a[2]==7) readimagefile("7.gif",565,10,580,30);
    if(a[2]==8) readimagefile("8.gif",565,10,580,30);
    if(a[2]==9) readimagefile("9.gif",565,10,580,30);


    if(a[3]==0) readimagefile("0.gif",545,10,560,30);
    if(a[3]==1) readimagefile("1.gif",545,10,560,30);
    if(a[3]==2) readimagefile("2.gif",545,10,560,30);
    if(a[3]==3) readimagefile("3.gif",545,10,560,30);
    if(a[3]==4) readimagefile("4.gif",545,10,560,30);
    if(a[3]==5) readimagefile("5.gif",545,10,560,30);
    if(a[3]==6) readimagefile("6.gif",545,10,560,30);
    if(a[3]==7) readimagefile("7.gif",545,10,560,30);
    if(a[3]==8) readimagefile("8.gif",545,10,560,30);
    if(a[3]==9) readimagefile("9.gif",545,10,560,30);

    if(a[4]==0) readimagefile("0.gif",525,10,540,30);
    if(a[4]==1) readimagefile("1.gif",525,10,540,30);
    if(a[4]==2) readimagefile("2.gif",525,10,540,30);
    if(a[4]==3) readimagefile("3.gif",525,10,540,30);
    if(a[4]==4) readimagefile("4.gif",525,10,540,30);
    if(a[4]==5) readimagefile("5.gif",525,10,540,30);
    if(a[4]==6) readimagefile("6.gif",525,10,540,30);
    if(a[4]==7) readimagefile("7.gif",525,10,540,30);
    if(a[4]==8) readimagefile("8.gif",525,10,540,30);
    if(a[4]==9) readimagefile("9.gif",525,10,540,30);

    if(a[5]==0) readimagefile("0.gif",505,10,520,30);
    if(a[5]==1) readimagefile("1.gif",505,10,520,30);
    if(a[5]==2) readimagefile("2.gif",505,10,520,30);
    if(a[5]==3) readimagefile("3.gif",505,10,520,30);
    if(a[5]==4) readimagefile("4.gif",505,10,520,30);
    if(a[5]==5) readimagefile("5.gif",505,10,520,30);
    if(a[5]==6) readimagefile("6.gif",505,10,520,30);
    if(a[5]==7) readimagefile("7.gif",505,10,520,30);
    if(a[5]==8) readimagefile("8.gif",505,10,520,30);
    if(a[5]==9) readimagefile("9.gif",505,10,520,30);


}


