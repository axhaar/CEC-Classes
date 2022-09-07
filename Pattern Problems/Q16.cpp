#include<iostream>

using namespace std;

/*
                A 
             A  B  A
          A  B  C  B  A 
       A  B  C  D  C  B  A 
    A  B  C  D  E  D  C  B  A
*/

int main()
{
    int n=5;
    char c='A';
    char d;
    for(int i=1;i<=n;i++)
    {
        if(i>2)
            c++;
        char k='A';
        for(int l=n;l>=i;l--)
        {
            cout<<"   ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<k<<" ";
            k++;
        }
        d=c;
        for(int m=2;m<=i;m++)
        {
            cout<<" "<<d<<" ";
            d--;
        }
        cout<<endl;
    }
    
}
