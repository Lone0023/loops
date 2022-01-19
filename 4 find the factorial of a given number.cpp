#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to find its factorial: "<<endl;
    cin>>n;
    int fac = 1;
    for(int i = 1; i<=n; i++){
        fac=fac * i;
    }
    cout<<"The factorial of "<<n<<" is "<<fac<<endl;
    return 0;
}
