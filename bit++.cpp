#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int a=0;

    while(n--){
        string s;
        cin>>s;
        if(s=="++X")
            ++a;
        else if(s=="X++")
            a++;
        else if(s=="--X")
            --a;
        else if(s=="X--")
            a--;
    }
    cout << a;
    return 0;
}