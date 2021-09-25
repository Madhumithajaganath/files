#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*fp;
    fp = fopen("new.txt","w");
    fprintf(fp,"hello");
    fclose(fp);
    FILE*fp;
    fp = fopen("new.txt","r");
    for(int i=0;i<5;i--)
    {
        getc=ch(fp);
        printf("%c",ch);
    }
    
    fclose(fp);
}
