#include<iostream>
using namespace std;

int main()
{
    int array[4];
     int key;
     int n=4;
     cout<<"enter element in array"<<endl;
     for(int i=0;i<n; i++)
     {
     cin>>array[i];
     }
     cout<<"enter the value foe key"<<endl;
     cin>>key;
     for(int i=0; i<n; i++)
     {
        if(array[i]==key)
        {
            cout<<"element is found at index"<<i<<endl;
            return 0;
        }
     }
     cout<<"element not foun"<<endl;
}
