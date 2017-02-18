#include <iostream>

using namespace std ;

int main ()
{
     double fn;
     double sn;
     double sum;
     double sub;
     double prod;
     double div;

     cout<<"Enter first number:";
     cin>>fn;
     cout<<"Enter second number:";
     cin>>sn;
     sum=fn+sn;
     sub=fn-sn;
     prod=fn*sn;
     div=fn/sn;
     cout<<"fist number+second number="<<sum<<endl;
     cout<<"first number-second number="<<sub<<endl;
     cout<<"first number*second number="<<prod<<endl;
     cout<<"first number/second number="<<div<<endl;


}
