// the best way

#include <stdio.h>
int main(void)
{
    float h=100,s=h/2;
    int n;
    for(n=2;n<=8;n++) //circulate 7 times
    {
        h=h+2*s;
        s=s/2;
    }
    printf("sum=%f\n",h);
    printf("8th=%.1f\n",s);
    
    return 0;
}

//the other way
/*
#include <stdio.h>
#include <math.h>
float high(int n)
{
    float m;
    m=100/(pow(2,n));
    returcyn m;
}

int main(void)
{
    float sum=100,i;
    for(i=1;i<8;i++)
    {
        sum=sum+(100/pow(2,i))*2;
    }
    printf("sum=%f\n",sum);
    printf("8th=%.1f\n",high(8));
    return 0;
}
*/