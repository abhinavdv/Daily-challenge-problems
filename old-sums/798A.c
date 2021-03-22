#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0,i,b;
	char str[15];
	scanf("%s", str);
	b=strlen(str);
	if(b%2 != 0)
		{for(i=0;i<b/2+1;i++)
	{
		if(str[i]!=str[b-i-1])
		{
			a++;
		}
	

	}
		}
	else{
		for(i=0;i<b/2;i++)
	{
		if(str[i]!=str[b-i-1])
		{
			a++;
		}
	



	}
}
if(b%2 != 0 && a==0)
	{
		a++;
	}

	if(a==1 )
	{
		printf("YES");
	}
	else
	{
		printf("NO" );
	}
	return 0;
}