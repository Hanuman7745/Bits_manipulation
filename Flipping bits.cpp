/*You will be given a list of 32 bit unsigned integers. 
Flip all the bits ( and ) and return the result as an unsigned integer.

Example
n =  9
9 = 1 0 0 1
. We're working with 32 bits, so:
00000000000000000000000000001001 = 9
11111111111111111111111111110110 = 4294967286
/*Return 4294967286.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int arr[32]={0};
        int t,i=0;
    while(n!=0){
        t = n % 2;
        arr[i] = t;
        n = n / 2;
        i++;
    }
    for(int i = 0; i < 32; i++){
       if(arr[i] == 1){
           arr[i] = 0;
       }
       else{
           arr[i] = 1;
       }
    }
    long long int sum = 0;
    for(int i = 0; i < 32; i++){
        //cout<<arr[i];
        sum = sum + arr[i]*pow(2,i);
    }
          cout<<sum<<endl;
   }
   return 0;
    }