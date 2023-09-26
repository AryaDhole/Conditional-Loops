//Arya Dhole
//ENTC-A2
//22070123027
#include <iostream>
using namespace std;
int main()
{
 int num,result=0;
 cout<< "Enter the number : "<<endl ;
 cin>> num;
 while(num|=0)
  {
     if(num&1)
      {
         result++;
      }
     num>>=1;
  }
 cout<< result;
 return 0;
}
