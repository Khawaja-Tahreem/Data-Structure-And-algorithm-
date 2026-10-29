
#include<iostream>
using namespace std;

int main(){
    int arr[100]={13,45,67,86,66,12};
    int n=6;
    int pos=2;

    cout<<"Elements before deletion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    n--;

    cout<<"Elements after deletion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}

