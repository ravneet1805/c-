#include <iostream>

using namespace std;

int main()
{ int a,b;
  cout<<"enter 2 numbers"<<endl;
  cin>>a>>b;

  char op;
  cout<<"enter operator"<<endl;
  cin>>op;

  switch (op) {
    case 'x':
    cout<<a*b<<endl;
    break;

    case '+':
    cout<<a+b<<endl;
    break;

    case '-':
    cout<<a-b<<endl;
    break;

    case '/':
    cout<<a/b<<endl;
    break;


    default:
    cout<<"enter another operator"<<endl;
    break;



  }


    return 0;
}
