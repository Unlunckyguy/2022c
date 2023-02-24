#include <stdio.h>
int main()
{
    char c;
    printf("請輸入字串: ");
    char line[40];///字串
    scanf("%s",line);///不能加&
    ///會被空格、TAB、Enter斷開
    printf("你讀入了: %s\n",line);
}
