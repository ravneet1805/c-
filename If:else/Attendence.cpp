/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/

#include <iostream>
using namespace std;

int main() {
  int held,attended,percentage;
  cout<<"Classes held: ";
  cin>> held;

  cout<<"Classes attended: ";
  cin>> attended;

  percentage = (attended*100)/held;

  cout<< percentage<<endl;


  if (percentage>=75) {
    cout<<"Allowed to sit in exam";
  }

  else{

      cout<<"not allowed to sit in exam";
  }
  return 0;
}
