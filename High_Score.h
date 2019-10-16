#include <iostream>
#include <fstream>
#include<windows.h>
#include <string>

using namespace std;

void highscoreprint()
{


    FILE *fp;
    char name[100],tmps[100],numbers[100];
    int score,temp;



    char TopNames[11][100];
    int TopScores[11];



    int i=0;
    fp=fopen("text.txt","r");
    while(i<=10)
    {
        fscanf(fp,"%s %d",&name,&score);
        strcpy(TopNames[i],name);
        TopScores[i]=score;
        i++;
    }





    for(i=0; i<10; i++)
    {

        display_names(TopNames[i],i);
        display_scores(TopScores[i],i);

        sprintf(numbers,"%d",TopScores[i]);


    }



    fclose(fp);
    getch();
    return ;






}
