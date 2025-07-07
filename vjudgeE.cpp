#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    while(true){
        int n;
        cin>>n;
        vector<int> arr(n);
        if(n==0)    break;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        stack<int> st;
        vector<int> temp;
        for(int i=0; i<arr.size(); i++){
            while(!st.empty() && st.top()<arr[i]){
                temp.push_back(st.top());
                st.pop();
            }
            st.push(arr[i]);
        }
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        bool mark=true;
        for(int i=0; i<temp.size()-1; i++){
            if(temp[i]>temp[i+1]){
                mark=false;
                break;
            }
        }
        if(mark){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}