#include<iostream>
using namespace std;

void Update(int num,int i,int val){
    num= num & ~(1<<i);

    num = num | (val<<i);

    cout<<num<<endl;
}

int main (){
    Update(10,2,1);

    return 0;
}