#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int orgn = n;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + pow(lastdigit,3);
        n = n/10;
    }
    if(sum==orgn){
        cout<<"The number "<<orgn<<" is an armstrong number."<<endl;
    }
    else{
        cout<<"The number "<<orgn<<" is not an armstrong number."<<endl;
    }

    return 0;

}
