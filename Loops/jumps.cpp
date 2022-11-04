#include <iostream>
using namespace std;

int main() {
  int date;
  int money=1000;
  for(date=1; date<=30;date++){

    if (date%2==0) {
      continue;
    }

    if(money==0){
      break;
    }

    cout<<date<<"th: "<<"money: "<<money<<" -can go out"<<endl;

    money=money-100;
  }

  return 0;
}
