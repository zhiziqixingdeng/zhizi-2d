#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
double square(double a,double b){
	return a*b;
}
double circle(double r){
	return 3.14*r*r;
}
double triangle(double a,double b){
	return a*b/2;
}
double trapezium(double a,double b,double c){
	return (a+b)*c/2;
}
double cube(double a,double b,double c){
	return a*b*c;
}
double cylinder(double a,double b){
	return a*3.14*b;
}
double cone(double r,double l){
	return 3.14*r*(r+l);
}
double sphere(double r){
	return (4.00/3.00)*3.14*r*r*r;
}
double hemisphere(double r){
	return ((4.00/3.00)*3.14*r*r*r)/2;
}
#endif
