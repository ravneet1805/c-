/* check if a number is prime or not */

#include <iostream>
using namespace std;

int main() {
  int num;

  cout<<"enter a number: ";
  cin >>num;
  int i;
  for( i=2; i<num; i++){

    if(num%i==0){
    cout << "not prime"<<endl;
    break;
    }


  }
    if(i==num){
    cout << "prime" <<endl;
    }
  



  return 0;
}
