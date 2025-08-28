#include<iostream>
#include<algorithm>
using namespace std;
void papa(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<b<<" "<<a<<endl;
    }else{
        cout<<a<<" "<<b<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) papa();
    return 0;
}