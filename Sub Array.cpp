#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"SUB ARRAYS ARE:"<<endl;
    int count=0;
    for (int start= 0; start < n; start++)
    {
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
            count++;
        }
        cout<<endl;
    }
    cout<<"Number of Subarrays are:"<<count<<endl;
    return 0;
}
