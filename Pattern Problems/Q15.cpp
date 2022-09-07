#include<iostream>

using namespace std;

/*
 A 
 B  B
 C  C  C
 D  D  D  D
 E  E  E  E  E
*/

int main()
{
    int n=5;
    char k='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" "<<k<<" ";
        }
        k++;
        cout<<endl;
    }
    
}