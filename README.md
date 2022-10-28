# 2022c
資傳一甲 程式設計 的程式倉庫

# Week06

## step06-1
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

## step06-2
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

## step06-3
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

## step06-4
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

# Week07

## step07-1
```.cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n",n);
    long long int a=123456789123456789;
    printf("%lld\n",a);
}
```

## step07-2
```.cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);

    long long int ans;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("答案是:%lld",ans);
}
```

## step07-3
```.cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);

    while(1){
        c==a%b;
        printf("%lld %lld% lld\n",a,b,c);
        if(c=0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```

## step07-4
```.cpp
#include <stdio.h>
int main()
{
    int n=1234;
    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }
}
```

# Week08

## step08-1
```.cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            if(k<=n-i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
}
```

## step08-2
```.cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n){
            if(k<=n-i) printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
```

## step08-3
```.cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d是質數",n);
    else printf("%d不是質數",n);
}
```

## step08-4
```.cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);

	for(int i=2;i<=a;i++){
		int bad=0;
		for(int n=2;n<i;n++){
			if(i%n==0) bad=1;
		}
		if(bad==0) printf("%d ",i);
	}
}
```
