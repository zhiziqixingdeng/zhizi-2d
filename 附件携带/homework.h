/*
��ʦ������ҵ
Ҫʵ�����¹���:
1. �ж�ĳ�������ǲ�����ȫƽ������
2. ������ά�ռ�� 2 �Ե㣬6 �������������������֮��ľ��롣
3. ����Բ���İ뾶�͸ߣ�������Բ���������
4. ����һ���ַ�����������ַ��������пո�ȥ���󷵻ش���õ��ַ�����
5. ����һλ int ������������������ÿλ���ֵĺ͡�
6. Ѱ��ָ�������е�ƽ������
*/
 #ifndef CIRCLE_H
 #define  CIRCLE_H
#include <iostream>
#include <cmath>
using namespace std;
bool tosqrt(int x){
	for(int i=1;i*i<=x;i++){
		if(i*i==x){
			return true;
		}
	}
	return false;
}
int distance(int x1,int y1,int z1,int x2,int y2,int z2){
	return (sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)));
}
double cylinder(double r,double tall){
	double p=3.14*r*r;
	double ans=p*tall;
	return ans;
}//����ȫ׼ȷ
string nospace(string str){
	string c;
	for(int i=0;i<str.length();i++){
		if(str[i]!=' '){
			c+=str[i];
		}
	}
	return c;
}
int digit_sum(int s){
	int t,cnt;
	while(s>1){
		t=s%10;
		s/=10;
		cnt+=t;
	}
	return cnt;
}
double avg(int a[],int n){
	int cnt;
	double num;
	for(int i=1;i<=n;i++){
		cnt+=a[i];
	}
	num=cnt/n;
	return num;
}
#endif
