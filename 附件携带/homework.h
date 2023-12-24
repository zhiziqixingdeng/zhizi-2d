/*
老师留的作业
要实现以下功能:
1. 判断某个整数是不是完全平方数。
2. 给出三维空间的 2 对点，6 个变量，求出这两个点之间的距离。
3. 给出圆柱的半径和高，求出这个圆柱的体积。
4. 传入一个字符串，将这个字符串的所有空格去掉后返回处理好的字符串。
5. 给出一位 int 类型整数，计算它的每位数字的和。
6. 寻找指定数组中的平均数。
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
}//不完全准确
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
