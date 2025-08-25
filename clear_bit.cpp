#include<iostream>
using namespace std;

int clearBit(int num, int i){
    int bitMarsk=1<<i;

    return (~bitMarsk);

}

int main (){
    cout<<clearBit(10,2);


    return 0;
}