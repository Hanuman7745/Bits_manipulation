//To find whether the number at given position is set_or_not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int position;
    cin>>n>>position;
    if(((n>>position)&1)==1) {
        cout<<"set"<<endl;
    }
    else {
        cout<<"not set"<<endl;
    }
    return 0;
}