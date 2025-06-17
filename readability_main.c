#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{
    char sent[1000];
    printf("enter: ");
    fgets(sent,sizeof(sent),stdin);

    int let=0,sen=0,word=0;

    for(int i=0;sent[i]!='\0';i++)
    {
        if((sent[i]>='A' && sent[i]<='Z') || (sent[i]>='a' && sent[i]<='z'))
        {
            let++;
        }
        if(sent[i]==' ')
        {
            word++;
    }
        if(sent[i]=='.' || sent[i]=='?' || sent[i]=='!')
        {
            sen++;
        }
    }
    word++;

    float L = ((float)let/word)*100;
    float S = ((float)sen/word)*100;
    float index=0.0588*L-0.296*S-15.8;
    int grade=round(index);

    if(grade<1)
    {
        printf("Before Grade 1\n");
    }
    else if(grade>=16)
    {
        printf("Grade 16+\n");
    }
    else
        printf("Grade %d\n", grade);
}
