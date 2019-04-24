## 题目描述：
   有两个日期，求两个日期之间的天数，如果两个日期是连续的，则规定他们之间的天数为两天。

## 输入样例：
   20130101
   20130105

## 样例输出
   5


```c

#include<cstdio>
	int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
	};
	bool isLeap(int year)
	{ 
		return (year%4==0&&year%100!=0||year%400==0);
	}
	int main()
	{
		int time1,y1,m1,d1;
		int time2,y2,m2,d2;
		while(scanf("%d%d",&time1,&time2)!=EOF)
		{
			if(time1>time2) //第一个日期晚于第二个日期，则交换
			{
			     int temp=time1;
				 time1=time2;
				 time2=temp;	
			} 
			y1=time1/10000,m1=time1%10000/100,d1=time1%100;
			y2=time2/10000,m2=time2%10000/100,d2=time2%100;
			int ans=1; //记录结果
			
			while(y1<y2||m1<m2||d1<d2)
			{
				d1++;
				if(d1==month[m1][isLeap(y1)]+1)  //当月天数+1正好为下一个月1号 
				{
					m1++;   //日期变为下个月1号 
					d1=1;
				}
				if(m1==13) //月份满12月 
				{
					y1++;   //日期变为下一年的1月 
					m1=1;
				}
				ans++;//结果 
			} 
			printf("%d\n",ans+1);        //这里要注意题目，连续的两天，天数为2
		}
			return 0;
	}

```

