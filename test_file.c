#include <stdio.h>

int main()
{
    int count=0;
    char let[4]={'a','a','b','c'};
    for(int i=0;i<4;++i)
    {
        int flag=0;printf("l");
        for(int j=i;j>=0;--j)
        {
            printf("A");
            if(j!=0)
            {
                if(let[j-1]==let[i])
                    flag++;
            }
        }
        if(flag==0)
        {
            count++;
            printf("C");
        }


    }
    printf("count is %d",count);


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
