//Adrish Purkayastha
//PRN:23070123011
//EnTC A
//Experiment 4.b
//Program to perform bit set and reset operations.
#include <iostream>
using namespace std;
int main(){
    int i=70,bit_to_be_set,bit_to_be_reset,set,reset;
    cout<<"Enter position of bit to be set: ";
    cin>>bit_to_be_set;
    cout<<"Enter position of bit to be reset: ";
    cin>>bit_to_be_reset;
    //setting the bit
    set = i|(1<<bit_to_be_set);
    //resetting the bit
    reset = i&(~(1<<bit_to_be_reset));
    cout<<"set number: "<<set<<endl;
    cout<<"reset number: "<<reset<<endl;
}
/*
OUTPUT:
Enter position of bit to be set: 4
Enter position of bit to be reset: 3
set number: 86
reset number: 70
*/