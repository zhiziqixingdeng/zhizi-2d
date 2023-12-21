#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
using namespace std;
char pad[10000][10000];
void to(int x,int y,char c){
	pad[x][y]=c;
	return;
}
void fill(int x,int y,char c,char d){
	pad[x][y]=c;
	if(pad[x+1][y]!=d){
		fill(x+1,y,c,d);
	}
	if(pad[x-1][y]!=d){
		fill(x-1,y,c,d);
	}
	if(pad[x][y-1]!=d){
		fill(x,y-1,c,d);
	}
	if(pad[x][y+1]!=d){
		fill(x,y+1,c,d);
	}
	return;
}
void have(int x,int y,int x1,int y1,char c){
  for(int i=x;i<=x1;i++){
  	for(int j=y;j<=y1;j++){
  		pad[i][j]=c;
		}
	}
	return;
}
void square(int x,int y,char c,int d){
	for(int i=d;i<=x;i++){
		for(int j=d;j<=y;j++){
			pad[i][j]=c;
		}
	}
	return;
}
void triangle(int n,char c,int cnt,int x,int y){
	pad[x][y]=c;
	if(cnt==n){
		return;
	}
	else{
		triangle(n,c,cnt+1,x+1,y);
		triangle(n,c,cnt+1,x+1,y+1);
		triangle(n,c,cnt+1,x+1,y-1);
	}
	return;
}
void turn(int x,int y){
	char c;
	for(int i=1;i<=9999;i++){
		c=pad[x][y+1];
	  pad[x][y+1]=c;
	}
	return;
}
void left(int x,int y){
	char c;
	for(int i=9999;i>=1;i++){
		c=pad[x][y-1];
	  pad[x][y-1]=c;
	}
	return;
}
void tdraw(int l,int s){
	for(int i=1;i<=l;i++){
		for(int j=1;j<=s;j++){
			cout<<pad[i][j];
		}
		cout<<endl;
	}
	return;
}
#endif
