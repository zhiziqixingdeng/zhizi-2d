#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int win,lose,no;
struct card{
	string name;
	int z;
}a[1000000];
struct AIbot{
	int z;
}bot[1000000];
struct thepeople{
	int z;
}p[1000000];
int ans;
void hcard(){
	for(int i=1;i<=ans;i++){
		cout<<"["<<a[i].name<<" "<<a[i].z<<"]"<<endl;
	}
	return;
}
void add(string str,int t){
	ans++;
	a[ans].name=str;
	a[ans].z=t;
	return;
}
void shuff(int cnt,int cnt2,int flag){
	srand(time(NULL));
	int r;
	for(int i=1;i<=cnt;i++){
		r=rand()%flag+1;
		p[i].z=a[r].z;
	}
	for(int i=1;i<=cnt2;i++){
		r=rand()%flag+1;
		bot[i].z=a[r].z;
	}
	return;
}
void check(int a,int b){
	if(a>b){
		win++;
	}
	if(a<b){
		lose++;
	}
	if(a==b){
		no++;
	}
	return;
}
void bcheck(){
	if(win>lose){
		cout<<"你赢了!"<<endl;
	}
	if(win==lose){
		cout<<"平局"<<endl;
	}
	if(win<lose){
		cout<<"你输了"<<endl;
	}
	win=0;
	lose=0;
	return;
}
void phave(int q){
	for(int i=1;i<=q;i++){
		cout<<i<<"."<<p[i].z;
		cout<<endl;
	}
	return;
}
#endif
