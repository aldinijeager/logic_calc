#include <stdio.h>
#include <math.h>
void Input(char x[]);
void cvrt(char x[],int y[],int s);
void printr(int x[],int s);
int numofvar(int x[],int s);
int isletter(int x);
int createt();

int main()
{
    int size = 10;
    char input[size];
    int asci[size],varcount;

    Input(input);
    cvrt(input,asci,size);
    //printr(asci,size);
    varcount=numofvar(asci,size);
    printf("\nNumber of variables is %d\n",varcount);
    int row = pow(2,varcount),column=varcount;

    int table[row][column];
    int r=row;
    for(int i=0;i<column;++i)
    {
        int count=1,tval=1;
        for(int j=0;j<row;++j)
        {
            int div=r/pow(2,i+1);
            if(tval==1)
            {
                table[j][i]=84;
            }
            else
                table[j][i]=70;
            if(j==((div*count)-1))
            {

                if(tval==1)
                    tval=0;
                else
                    tval=1;
                count++;
            }
        }
    }

    for(int i=0;i<row;++i)
    {
        printf("%2d-",i);
        for(int j=0;j<column;++j)
        {
            printf("%c|",table[i][j]);
        }
        printf("\n",i);
    }



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
int isletter(int x)
{
    int ft=0;
    if(x>96 && x<123)
        ++ft;
    return ft;
}

int numofvar(int x[],int s)
{
    int num=0;
    for(int i=0;i<s;++i)
    {
        int z=isletter(x[i]);
        if(z)
        {
            if(num==0)
                ++num;
            else
            {
                int flag=0;
                for(int j=i-1;j>=0;--j)
                {
                    if(x[j]==x[i])
                        ++flag;
                }
                if(flag==0)
                    ++num;
            }
        }
    }
    return num;
}

