#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    int i,j,addr1,staddr1;
    char name[20],line[50],addr[20],staddr[10],name1[20],rec[10];
    printf("Enter the program name:");
    scanf("%s,&name");
    fp=fopen("objcode.txt","r");
    fscan(fp,"%s",line);
    for(i=2,j=0;i<8,j<6;i++,j++)
        name1[j]=line[i];
        name1[j]='\0';
        printf("name of obj.%s\n",name1);
    if (strcmp(name,name1)==0)
    {
        fscan(fp,"%s",line);
        do
        {
            if(line[0]=='T')
            {
                for(i=2,j=0;i<8,j<6;i++,j++)
                {
                    staddr[j]=line[i];
                    staddr[j]='\0';
                    staddr1=atoi(staddr);
                    i=12;
                    while(line[i]!='$')
                    {
                        if(line[i]!='^')
                        {
                            printf("00%d\t%c%c\n",staddr1,line[i],line[i+1]);
                            staddr1++;
                            i=i+2;
                        }
                        else i++;
                    }
                }
                if(line[0]=='E')
                printf("Jump to execution address.%s",&line[2]);
                fscan(fp,"%s",line);
            }
         } while(!feof(fp));

        
    }
    fclose(fp);
}