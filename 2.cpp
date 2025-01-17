#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    cout<<a*b<<endl;
    if(b==0){
        cout<<"Invalid number:"<<"\n";
    }else{
        cout<<a/b<<endl;
    }
    cout<<a-b<<endl;
    
}