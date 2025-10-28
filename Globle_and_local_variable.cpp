#include <iostream.h>
#include 
int m = 10; // global m
void main ( ) { 
  int m = 20; //m redeclared, local to main 
  int k =m; 
  int m = 30; //m declared again

// local to inner block 
  cout <<"'we are in inner block "<<endl; 
  cout <<"The value of K is : " <<k<<endl;
  cout <<"The value of local M is : " <<m<<endl;
  cout <<" global m = "<< ::m<<endl;

} }
