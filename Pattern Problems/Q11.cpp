#include<iostream>

using namespace std;

/*
 1  _  _  _  _  _  _  _  _  1 
 1  2  _  _  _  _  _  _  2  1 
 1  2  3  _  _  _  _  3  2  1 
 1  2  3  4  _  _  4  3  2  1
 1  2  3  4  5  5  4  3  2  1 
*/

int main()
{
    int n=5;
    int l=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j<<" ";
        }
        for(int l=1;l<=n-i;l++)
        {
            cout<<" _ ";
        }
        for(int m=1;m<=n-i;m++)
        {
            cout<<" _ ";
        }
       for(int g=i;g>=1;g--)
        {
            cout<<" "<<g<<" ";
        }
        cout<<endl;
    }
    
}