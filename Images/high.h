#include<stdio.h>
#include<string.h>
int hscr[6];
//int scr;
char name[6][100];
void high(int scr)
{
    int i,j,k,t;
   // scanf("%d",&scr);
   printf("ENTER NAME\n");
    char temp[100];
    hscr[5]=scr;
  //  getchar();
    gets(temp);
    strcpy(name[5],temp);
   // if(hscr[5]>hscr[4])
   // {
        //sort(hscr,hscr+6,greater<int>());
      //  hscr[4]=


  //  }
    for(i=5;i>0;i--)
    {
       if(hscr[i]>hscr[i-1])
       {
           t=hscr[i];
           hscr[i]=hscr[i-1];
           hscr[i-1]=t;

          // temp=name[i];
           strcpy(temp,name[i]);
          // name[i]=name[i-1];
           strcpy(name[i],name[i-1]);
          // name[i-1]=temp;
           strcpy(name[i-1],temp);
       }
    }
for(i=0;i<5;i++)
{
    printf("%d.%s - %d\n",i+1,name[i],hscr[i]);
}

return;

}
