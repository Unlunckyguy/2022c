#include <stdio.h>
int main()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	int ans=0;
	for(int i=a;i<=b;i++)
	{
		int bad=0;
		for(int k=2;k<i;k++)
		{
			if(i%k==0) bad=1;
		}
		if(bad==0) ans++;
	}
	printf("%d\n",ans);
}
