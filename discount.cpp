/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/


#include<iostream>
using namespace std;

int main()
{
  int quantity, price;

  cin>> quantity;

  price= quantity*100;

  if (quantity<10) {

      cout << price << '\n';

  }

  else{

      cout << price - (price/100)*10 << '\n';

  }

  return 0;

}
