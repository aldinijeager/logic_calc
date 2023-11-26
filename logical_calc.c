#include <stdio.h>
void Input(char x[]);
void cvrt(char x[],int y[],int s);
void printr(int x[],int s);
int numofvar(int x[],int s);
int islet(int x);
int main()
{
    int size = 10;
    char input[size];
    int asci[size];

    Input(input);
    cvrt(input,asci,size);
    printr(asci,size);






}

void Input(char x[])
{
    printf("Input : ");
    scanf("%[^\n]s",x);
}
void cvrt(char x[],int y[],int s)
{
    for(int i=0;i<s;++i)
    {
        y[i]=x[i];
    }
}
void printr(int x[],int s)
{
    printf("Arr val: ");
    for(int i=0;i<s;++i)
    {
        printf("%d,",x[i]);
    }
}
int islet(int x)
{
    int ft=0;
    if(x>96 && x<123)
        ++ft;
    return ft;
}
int islet(int x)
