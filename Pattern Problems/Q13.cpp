#include<iostream>

using namespace std;

/*
 A 
 A  B       
 A  B  C    
 A  B  C  D 
 A  B  C  D  E
*/

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