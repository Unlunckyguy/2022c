# 2022c
資傳一甲 程式設計 的程式倉庫

#Week06

##step06-1
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int star=i*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```

##step06-2
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i
        int star=i*2-1;
    for(int a=0;a<space;a++){
        printf(" ");
    }
    for(int b=0;b<star;b++){
        printf("*");
    }
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```

##step06-3
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數:");
    int a,b,ans;
    scanf("%d %d", &a, &b);
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}
```

##step06-4
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數:");
    int a,b,c;
    scanf("%d%d",&a,&b);
    while(1){
    c=a%b;
    printf("a:%d b=%d c=%d\n",a,b,c);
    if(c==0) break;
    a=b;
    b=c;
    }
    printf("中的是:%d",b);
}
```
