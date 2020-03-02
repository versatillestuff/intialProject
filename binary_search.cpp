#include<iostream>
using namespace std;
int main()
{

    int key,low=0,high=4,mid=2,flag=0;
     int arr[5];

     cout<<"enter the element"<<endl;
       for( int j=0;j<5;j++)
    {
        cin>>arr[j];
    }
      cout<<"enter the element to search"<<endl;
     cin>>key;
    while (low<=high)
    {
        mid=(high+low)/2;
        if(key==arr[mid])
        {
            flag=1;
            break;
        }
        else if (key<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if (flag ==1)
    {
        cout<<"key is found"<<endl;
    }
    else
    {
        cout<<"key is not found"<<endl;
    }
}
