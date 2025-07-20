#include <iostream>
#include <vector>
using namespace std;

const int n = 10;
int a[n] = {34, 39, 34, 3, 4, 434, 34, 34, 3};
vector<int> fenwick(n + 1);

int prefixSum(int ind) {
    int sum = 0;
    while (ind > 0) {
        sum += fenwick[ind];
        ind -= (ind & (-ind));
    }
    return sum;
}

void update(int ind, int x) {
    while (ind <= n) {
        fenwick[ind] += x;
        ind += (ind & (-ind));
    }
}

int main() {
    for (int i = 1; i <= n; i++) {
        update(i, a[i - 1]);
    }
    cout << "Prefix sum up to index 3: " << prefixSum(3) << endl;
    return 0;
}