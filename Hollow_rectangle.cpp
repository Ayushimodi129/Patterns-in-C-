//HOLLOW RECTANGLE
#include <iostream>
using namespace std;
int main()
{ int m,n,i;
cin>>m>>n;

for(i=0;i<m;i++)
{
    for( int j=0;j<n;j++)
    {
        if(j==0 || i==0 || j==n-1 || i==m-1)
        cout<<"*";
        else
        cout<<" ";
        
    }
    cout <<"\n";
}

}
