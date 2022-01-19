#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int orgn = n;
    int Reverse=0;
    while(n>0){
        int lastdigit = n%10;
        Reverse = Reverse * 10 + lastdigit;
        n=n/10;
    }
    cout<<"The reverse of "<<orgn<<" is: "<<Reverse<<endl;
    return 0;
}
