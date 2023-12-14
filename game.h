#ifndef CIRCLE_H
#define  CIRCLE_H
#include<iostream>
#include <unistd.h>
#include <cstdlib>
#include<conio.h>
using namespace std;
int x,y;
char world[10000][10000];
int l,s;
void set_up(int a,int b){
	l=a;
	s=b;
}
void gameover(){
	system("cls");
	cout<<"gameover"<<endl;
	sleep(1);
	system("cls");
	return;
}
void move(int dy1,int dy2){
	x+=dy1;
	y+=dy2;
}
bool check(char ch,long long int a){
	while(a--){
		if(kbhit()){
		ch=getch();
	}
	else{
		ch='\0';
	}
	}
}
string chrand(int n){
	string cnt;
	char ch;
	while(n--){
		ch=char(rand()%26+65);
		cnt+=ch;
	}
	return cnt;
}
struct tstart{
	string name;
	int blood;
	char c;
};
void hello(int a){
	for(int i=1;i<=a;i++){
		system("color 1A");
		system("color 2B");
		system("color 3C");
		system("color 4D");
		system("color 5E");
	}
	return;
}
void talk(string name,string totalk,double a){
	cout<<name<<":";
	for(int i=0;i<totalk.length();i++){
		cout<<totalk[i];
		sleep(a);
	}
	return;
}
void Progress_bar(char ch,double a,int b){
	for(int i=1;i<=b;i++){
		cout<<ch;
		sleep(a);
	}
	return;
}
int maxxtall;
bool tall(int b){
	if(b<=maxxtall){
		return false;
	}
	else{
		return true;
	}
}
tstart people;
void start(string a,int b,char c){
	people.name=a;
	people.blood=b;
	people.c=x;
	return;
}
void draw(){
	for(int i=1;i<=l;i++){
		for(int j=1;j<=s;j++){
			if(x==i&&j==y){
				cout<<people.c;
			}
			else{
				cout<<world[i][j];
			}
		}
		cout<<endl;
	}
	return;
}
void bullet(int flag,char ch,char go,int a,int b){
	system("cls");
	while(flag--){
		for(int i=1;i<=l;i++){
		for(int j=1;j<=s;j++){
			if(i==x&&j==y){
				cout<<people.c;
			}
			else if(i==a&&j==b){
				cout<<ch;
			}
			else{
				cout<<world[i][j];
			}
		}
		cout<<endl;
	}
	sleep(1);
	system("cls");
	}
	return;
}
void fly(int a,int b,double tsleep){
	for(int i=1;i<=a;i++){
		x+=1;
		system("cls");
		draw();
		sleep(tsleep);
	}
	for(int i=1;i<=a;i++){
		y+=1;
		system("cls");
		draw();
		sleep(tsleep);
	}
	return;
}

#endif
