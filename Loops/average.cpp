/*Take 10 integers from keyboard using loop and print their average value on the screen.*/

#include <iostream>
using namespace std;

int main() {

  int sum = 0;
  for (int i=1; i<=10; i++){

    int x;
    cin>>x;

    sum= sum+x;


  }


  cout<<sum/10.0<<endl;


  return 0;
}
