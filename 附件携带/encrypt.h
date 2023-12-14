#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
#include <string>
using namespace std;
string ascll(string s,char x,int a){
	for(int i=0;i<s.length();i++){
		if(x=='+'){
			s[i]+=a;
		}
		else{
			s[i]-=a;
		}
	}
	return s;
}
string dascll(string s,char x,int a){
	for(int i=0;i<s.length();i++){
		if(x=='-'){
			s[i]+=a;
		}
		else{
			s[i]-=a;
		}
	}
	return s;
}
string caesar(string s,char x,int a){
	for(int i=0;i<s.length();i++){
		if(x=='+'){
			for(int i=1;i<=a;i++){
				s[i]+=a;
				if(s[i]=='z'&&i!=a||s[i]=='Z'&&i!=a||s[i]=='9'&&i!=a){
					if(s[i]=='z'){
						s[i]='a';
					}
					if(s[i]=='Z'){
						s[i]='A';
					}
					if(s[i]=='9'){
						s[i]='0';
					}
				}
			}
		}
		else{
			for(int i=1;i<=a;i++){
				s[i]-=a;
				if(s[i]=='a'&&i!=a||s[i]=='A'&&i!=a||s[i]=='0'&&i!=a){
					if(s[i]=='a'){
						s[i]='z';
					}
					if(s[i]=='A'){
						s[i]='Z';
					}
					if(s[i]=='0'){
						s[i]='9';
					}
				}
			}
		}
	}
	return s;
}
string dcaesar(string s,char x,int a){
	for(int i=0;i<s.length();i++){
		if(x=='-'){
			for(int i=1;i<=a;i++){
				s[i]+=a;
				if(s[i]=='z'&&i!=a||s[i]=='Z'&&i!=a||s[i]=='9'&&i!=a){
					if(s[i]=='z'){
						s[i]='a';
					}
					if(s[i]=='Z'){
						s[i]='A';
					}
					if(s[i]=='9'){
						s[i]='0';
					}
				}
			}
		}
		else{
			for(int i=1;i<=a;i++){
				s[i]-=a;
				if(s[i]=='a'&&i!=a||s[i]=='A'&&i!=a||s[i]=='0'&&i!=a){
					if(s[i]=='a'){
						s[i]='z';
					}
					if(s[i]=='A'){
						s[i]='Z';
					}
					if(s[i]=='0'){
						s[i]='9';
					}
				}
			}
		}
	}
	return s;
}
#endif
