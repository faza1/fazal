
#include <iostream>


 using namespace std;


 int main ()
 {
     cout<< "Please enter your age: \n";

     int age;
     cin>> age;
     cout<< "\n";


     if (age < 18)
     {
        cout<< "Sorry u r  not eligible for vote.\n";
         cout<< "\n";
     }
     else
     {
         cout<< "Congratulations! You are eligible for casting your vote...\n";
         cout<<"\n" ;


     }


 return 0;
 }
