//Given a positive integer N, determine whether it is odd or even.
//Example:
//Input:
//N = 1
//Output:
//odd
.........................
string oddEven(int n){
if((n & 1) == 0){
    return "even";
}
else {
    return "odd";
}
int main(){
int n;
cin>>n;
cout<<oddEven(N)<<endl;
return 0;
}