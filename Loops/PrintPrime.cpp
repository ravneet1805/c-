/* Print all prime numbers between a and b */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter a number: ";
    cin>>a;

    cout<<"enter a number: ";
    cin>>b;

    cout<<"prime numbers from "<<a<<" to "<<b<<": "<<endl;

    for(int num=a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){

            if(num%i==0){
                break;
            }
        }
        if(i==num){
        cout<<num<<endl;
    }

    }

    return 0;
}
