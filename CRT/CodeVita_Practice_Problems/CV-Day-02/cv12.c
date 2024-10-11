/*
	Time t1 = { 1,58, 43}
	Time t2 = { 2,1,45}

	absolute time difference b/w above 2 times in 
	
	struct Time
	{
		int h;
		int m;
		int s;
	};
	78+45+60==>183
	(2*60*60+1*60+45)-(1*60*60+58*60+43) ==183
*/

#include<stdio.h>
struct Time
{
    int h;
	int m;
	int s;	
};
typedef struct Time TIME;
int main()
{
	TIME t1={1,58,42},t2={2,1,45};
	printf("%d",diff_time(&t1,&t2));
}
int diff_time(TIME *t1,TIME *t2)
{
	int t11=toseconds(t1);
	int t22=toseconds(t2);
	int time = abs(t11-t22);
}
int abs(int val)
{
	return val > 0 ? val : - val;
}
int toseconds(TIME *g)
{
	int sec;
	sec = g->h*60*60+g->m*60+g->s;
}
