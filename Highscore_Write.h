        #include <iostream>
        #include <fstream>
        #include<windows.h>
        #include <string>

        using namespace std;

        void highscorewrite(char namein[100], int scorein)
        {
            FILE *fp;
            char name[100],tmps[100],numbers[100];
            int score,temp;



            char TopNames[11][100];
            int TopScores[11];


            //Reading File
            int i=0;
            fp=fopen("text.txt","r");
            while(i<=10)
            {
                fscanf(fp,"%s %d",&name,&score);
                strcpy(TopNames[i],name);
                TopScores[i]=score;
                i++;
            }


            //Sorting Data
            strcpy(TopNames[10],namein);
            TopScores[10]=scorein;

            for(i=0; i<11; i++)
            {
                for(int j=0; j<10-i; j++)
                {
                    if(TopScores[j]<=TopScores[j+1])
                    {
                        temp=TopScores[j];
                        TopScores[j]=TopScores[j+1];
                        TopScores[j+1]=temp;

                        strcpy(tmps,TopNames[j]);
                        strcpy(TopNames[j],TopNames[j+1]);
                        strcpy(TopNames[j+1],tmps);
                    }
                }
            }







            fclose(fp);




            //Writing File
            fp=fopen("text.txt","w");
            i=0;
            while(i<=10)
            {
                fprintf(fp,"%s %d\n", TopNames[i],TopScores[i]);
                i++;
            }
            fclose(fp);


        return ;

        }
