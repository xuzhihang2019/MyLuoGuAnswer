/*
	题目描述
	津津上初中了。妈妈认为津津应该更加用功学习，所以津津除了上学之外，
	还要参加妈妈为她报名的各科复习班。另外每周妈妈还会送她去学习朗诵、舞蹈和钢琴。
	但是津津如果一天上课超过八个小时就会不高兴，而且上得越久就会越不高兴。
	假设津津不会因为其它事不高兴，并且她的不高兴不会持续到第二天。
	请你帮忙检查一下津津下周的日程安排，看看下周她会不会不高兴；
	如果会的话，哪天最不高兴。
	
	输入格式
	输入包括77行数据，分别表示周一到周日的日程安排。
	每行包括两个小于1010的非负整数，用空格隔开，
	分别表示津津在学校上课的时间和妈妈安排她上课的时间。
	
	输出格式
	一个数字。如果不会不高兴则输出00，
	如果会则输出最不高兴的是周几
	（用1, 2, 3, 4, 5, 6, 71,2,3,4,5,6,7分别表示周一，周二，周三，周四，周五，周六，周日）。
	如果有两天或两天以上不高兴的程度相当，则输出时间最靠前的一天。
	
	输入输出样例
	输入 #1
	5 3
	6 2
	7 2
	5 3
	5 4
	0 4
	0 6
	输出 #1
	3
*/
#include<stdio.h>
int main()
{
    int i,j,x,s1,m1,s2,m2,s3,m3,s4,m4,s5,m5,s6,m6,s7,m7;
    int t[7];
    int max,iii;
    scanf("%d %d",&s1,&m1);
    t[0]=s1+m1;
    scanf("%d %d",&s2,&m2);
    t[1]=s2+m2;
    scanf("%d %d",&s3,&m3);
    t[2]=s3+m3;
    scanf("%d %d",&s4,&m4);
    t[3]=s4+m4;
    scanf("%d %d",&s5,&m5);
    t[4]=s5+m5;
    scanf("%d %d",&s6,&m6);
    t[5]=s6+m6;
    scanf("%d %d",&s7,&m7);
    t[6]=s7+m7;
    max=t[0];
    for(i=0;i<7;i++)
    {
        if(t[i]>max)
        {
            max=t[i];
            iii = i;
        }
    }
    if(max<8){
        printf("0");
    }else{
        printf("%d",iii+1);
    }
    
    return 0;
}
