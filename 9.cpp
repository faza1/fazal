

#include <iostream>


 using namespace std;


 int main ()
 {
     int minute, hours;
     cout<< "Please input hours: "<<endl;
    cout<< "\n";
     cin>> hours;


     cout<< "Please input minutes: "<<endl;
     cout<< "\n";
     cin>> minute;


     double t_minute;
     t_minute = (hours) * 60 + minute;


    cout<< "Total minutes:\n " <<t_minute<< "\n";



 return 0;
 }



