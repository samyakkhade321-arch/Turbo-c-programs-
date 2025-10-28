#include <iostream.h>
#include<conio.h>
void main ()
{
clrscr();
  char input;
  int dataType;
  String _string;
  cout << "*****************************************"<<endl;
  cout << "====WELCOME TO THE DETA TYPE PROGRAM====="<<endl;
  cout << "*****************************************"<<endl;
  cout << "WHAT DATA TYPE DO YOU WANT TO KNOW : "<<endl;
  cout << "1.char\n2.char*\n3.short\n4.int\n5.long\n6.float\n7.double\n8.string"<<endl;
  cin>>dataType;
  if(dataType == 1 ){
    cout << "char size  : " << sizeof(char) << " bytes"<<endl;
  }else if(dataType == 2 ){
    cout << "char* size : " << sizeof(char*) << " bytes"<<endl;
  }else if(dataType == 3 ){
    cout << "short size :  " << sizeof(short) << " bytes"<<endl;
  }else if(dataType == 4 ){
    cout << "int size : " << sizeof(int) << " bytes"<<endl;
  }else if(dataType == 5 ){ 
    cout << "long size : " << sizeof(long) << " bytes"<<endl;
  }else if(dataType == 6 ){
    cout << "float size : " << sizeof(float) << " bytes"<<endl;
  }else if(dataType == 7 ){
    cout << "double size : " << sizeof(double) << " bytes "<<endl; 
  }else if(dataType == 8 ){
    cout << "PLEASE ENTER THE STRING : "<<endl;
    cin>> _string ;
    cout << "string size : " << sizeof(_string) <<" bytes "<<endl;
  }
  cout << "********************************************"<<endl;
  cout << "=====YOUR_PROGRAM_IS_DONE_SUSSFULLY!!!======"<<endl;
  cout << "********************************************"<<endl;
  // cout << "1.55 size : " << sizeof(1.35) << "' bytes "<<endl;
  // cout << "1,55L size : " << sizeof(1.45L) <<" bytes"<<endl; 
getch();
}
