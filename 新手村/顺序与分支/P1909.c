/*
	��Ŀ����
	P��ʦ��Ҫȥ�̵���n֧Ǧ����ΪС�����ǲμ�NOIP������������̵�һ���� 33�ְ�װ��Ǧ�ʣ�
	��ͬ��װ�ڵ�Ǧ�������п��ܲ�ͬ���۸�Ҳ�п��ܲ�ͬ��Ϊ�˹�ƽ�� ����P��ʦ����ֻ��ͬһ�ְ�װ��Ǧ�ʡ�
	
	�̵겻����Ǧ�ʵİ�װ�𿪣����P��ʦ������Ҫ���򳬹�nn֧Ǧ�ʲŹ���С�� ���Ƿ����
	
	����P��ʦ��֪�������̵�ÿ�ְ�װ���������㹻������£�Ҫ������nn֧Ǧ��������Ҫ���Ѷ���Ǯ��
	
	�����ʽ
	��һ�а���һ��������nn����ʾ��Ҫ��Ǧ��������
	
	���������У�ÿ����22������������һ�ְ�װ��Ǧ�ʣ�
	���е�11��������ʾ���� ��װ��Ǧ�ʵ���������22��������ʾ���ְ�װ�ļ۸�
	
	��֤���е�77�������ǲ�����1000010000����������
	
	�����ʽ
	11����������ʾP��ʦ������Ҫ���ѵ�Ǯ��
	
	�����������
	���� #1
	57
	2 2
	50 30
	30 27
	��� #1
	54
	���� #2
	9998
	128 233
	128 2333
	128 666
	��� #2
	18407
	���� #3
	9999
	101 1111
	1 9999
	1111 9999
	��� #3
	89991
*/
#include<stdio.h>
int main()
{
    int num,a1,a2,b1,b2,c1,c2;
    int a,b,c,shuliangA,moneyA,shuliangB,shuliangC,moneyB,moneyC;
    scanf("%d",&num);
    scanf("%d %d",&a1,&a2);
    scanf("%d %d",&b1,&b2);
    scanf("%d %d",&c1,&c2);
    a=num/a1;
    if(num%a1==0){
        shuliangA=a;
    }else{
        shuliangA=a+1;
    }
    moneyA=shuliangA*a2;
    
    b=num/b1;
    if(num%b1==0){
        shuliangB=b;
    }else{
        shuliangB=b+1;
    }
    moneyB=shuliangB*b2;
    
    c=num/c1;
    if(num%c1==0){
        shuliangC=c;
    }else{
        shuliangC=c+1;
    }
    moneyC=shuliangC*c2;
    
    if(moneyA<=moneyB && moneyA<=moneyC){
        printf("%d",moneyA);
    }
    if(moneyB<=moneyA && moneyB<=moneyC){
        printf("%d",moneyB);
    }
    if(moneyC<=moneyA && moneyC<=moneyB){
        printf("%d",moneyC);
    }
    return 0;
}

