#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
#include<limits.h>
#include<stdint.h>
#include<float.h>
#include<string.h>
#include<ctype.h>
int fivetable(int a,int i){
    if(i==0)
    return 0;
    printf("%d * %d = %d\n",a,11-i,a*(11-i));
    fivetable(a,--i);
}
int main()
{
    int a,size;
    a=2;
    size=8;
    fivetable(a,size);
    return 0;
}
