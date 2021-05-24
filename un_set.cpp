#include<iostream> //unset the bit
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int position;
    int r;
    cin>>n>>position;
    r = n^((position-1)<<1);
    cout<<r;
    return 0;
}