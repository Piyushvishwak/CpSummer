#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cout<<"Enter number->";
    cin>>n;
    int sum=0;
    int rev=0;
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        rev=rem+rev*10;
        n/=10;
    }
    cout<<"Sum-> "<<sum<<endl;
    cout<<"Reverse-> "<<rev<<endl;
    return 0;
}