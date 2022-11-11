#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i;
        int star=i*2-1;
    for(int a=0;a<space;a++){
        printf(" ");
    }
    for(int b=0;b<star;b++){
        printf("*");
    }
        printf("ÆN¬[:%d¼Ó %dªÅ®æ %d¬P\n",i,space,star);
    }
}
