#include <iostream.h>
#include<conio.h>
void main ()
{
clrscr();
  cout << "char size  : " << sizeof(char) << " bytes"<<endl; 
  cout << "char* size : " << sizeof(char*) << " bytes"<<endl;
  cout << "short size :  " << sizeof(short) << " bytes"<<endl;
  cout << "int size : " << sizeof(int) << " bytes"<<endl;
  cout << "long size : " << sizeof(long) << " bytes"<<endl;
  cout << "float size : " << sizeof(float) << " bytes"<<endl;
  cout << "double size : " << sizeof(double) << " bytes "<<endl; 
  cout << "1.55 size : " << sizeof(1.35) << "' bytes "<<endl;
  cout << "1,55L size : " << sizeof(1.45L) <<" bytes"<<endl; 
  cout << "string size : " << sizeof("welcome") <<" bytes "<<endl;
getch();
}
