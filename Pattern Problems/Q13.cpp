#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        char k='A';
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    
}