#include<iostream>
using namespace std;
int main(){
    int dec=25;
    int i=1;
    int bin=0;
    while(dec>0){
        int rem=dec%2;
        bin+=rem*i;
        i=i*10;
        dec=dec/2;
    }
    cout<<bin;
    return 0;
}