#include <stdio.h>
int numofvar(int x[],int s)
{
    int num=0;
    for(int i=0;x[i]<s;++i)
    {
        if(islet(x[i]))
        {
            printf("%d let|",x[i])
        }
    }
}

int main()
{



}


/*
char x[4]={'z','b','b','d'};
    int count=0,flag=0;
    for(int i=0;i<4;i++)
    {
        int ascii = x[i];
        if(ascii>96 && ascii<123)
        {
            printf("%c|%d|letter|",x[i],ascii);
            for(int j=i-1;j>=0;--j)
            {
                if(x[j]==ascii)
                    flag++;
            }
        }
        if(flag==0)
            count++;
        printf("count%d\n",count);
    }*/
