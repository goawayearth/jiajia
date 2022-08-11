#include<stdio.h>
#include<Windows.h>
#include<stdlib.h> 
int main()
{
 float x,y,a;

 for(y=1.5f;y>-1.5f;y-=0.1f)
 {
  for(x=-1.5f;x<1.5f;x+=.05f)
  {
   a=x*x+y*y-1;
   putchar(a*a*a-x*x*y*y*y<0.0f?'J':' ');
  }
  Sleep(100);
  putchar('\n');
 }

while(1)
{
	for(int i=0;i<10;i++)system("color f4");
	for(int i=0;i<10;i++)system("color f2");
	for(int i=0;i<10;i++)system("color f8");
	for(int i=0;i<10;i++)system("color f9");
	for(int i=0;i<10;i++)system("color fB");
}
 return 0;
}
