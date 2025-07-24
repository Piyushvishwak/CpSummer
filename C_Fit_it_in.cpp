#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> Seq(n);
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            cin >> Seq[i];
            mpp[Seq[i]]++;
        }

        int total = 0;
        while (!mpp.empty()) {
            int curr = mpp.begin()->first;
            while (mpp.count(curr)) {
                mpp[curr]--;
                if (mpp[curr] == 0)
                    mpp.erase(curr);
                curr++;
            }
            total++;
        }

        cout << total << endl;
    }
    return 0;
}