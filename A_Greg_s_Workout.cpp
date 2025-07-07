#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<int> nums(t);
    for(int i=0; i<t; i++){
        cin >> nums[i];
    }

    if(t<3){
        if(t<2)
            cout << "chest" << endl;
        else{
            int ans = max(nums[0], nums[1]);
            if(ans == nums[0])    cout << "chest";
            else    cout << "biceps";
        }
    }
    else{
        int chest=0, biceps=0, back=0;
        for(int i=0; i<t; i+=3){
            chest += nums[i];
        }
        for(int i=1; i<t; i+=3){
            biceps += nums[i];
        }
        for(int i=2; i<t; i+=3){
            back += nums[i];
        }

        int ans = max(chest, max(biceps, back));
        if(ans == chest)  cout << "chest";
        else if(ans == biceps)    cout << "biceps";
        else    cout << "back";
    }
    return 0;
}