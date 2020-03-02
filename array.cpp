#include<iostream>
using namespace std;
int main()
{
    int A[5];
    int B[5]={1,2,3,4,5};
    int i,j,k;
    for(i=0;i<5;i++)
    {
        cout<<B[i];
         cout<<endl;
    }
    for(j=0;j<5;j++)
    {
        cin>>A[j];
    }
        for(k=0;k<5;k++)
    {
        cout<<A[k]<<endl;
    }

    return 0;
}
