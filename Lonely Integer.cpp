//Given an array of integers, where all elements but one occur twice,
//find the unique element.
//Example
//int arr={1,2,3,4,3,2,1}
//The unique element is 4.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum^arr[i];
    }
    cout<<sum<<endl;
    return 0;
}