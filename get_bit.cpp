#include<iostream>
using namespace std;


int setBit(int num,int i){
    int bitmarsk=1<<i;
    cout<<bitmarsk<<endl;
    return (num | bitmarsk);
}
int main(){
    cout<<setBit(12,3)<<endl;
    int num,i=2;
    cout<<"enter the number : ";
    cin>>num;
    // cout<<num;

    int bitmark=(1<<i);

    if(!(num & bitmark)){
        cout<<0<<endl;
    }else {
        cout<<1<<endl;
    }
    return 0;
}