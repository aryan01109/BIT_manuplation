#include<iostream>
using namespace std;

void clearlist(int num , int i){
    int bitmark=(~0)<<i;
    num = num & bitmark;
    cout<<num<<endl;

}


int main(){

    clearlist(7,2);

    return 0;
}