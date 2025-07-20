#include <bits/stdc++.h>
using namespace std;
#define foo                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    foo;
    vector<int> ans;
    int n = 10;
    int mat[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = 0;

    for (int i = 0; i < n; i++)
    {
        mat[0][i] = 1;
        mat[n - 1][i] = 1;
        mat[i][0] = 1;
        mat[i][n - 1] = 1;
    }

    for (int i = 1; i < n - 1; i++)
    {
        mat[1][i] = 2;
        mat[n - 2][i] = 2;
        mat[i][1] = 2;
        mat[i][n - 2] = 2;
    }

    for (int i = 2; i < n - 2; i++)
    {
        mat[2][i] = 3;
        mat[n - 3][i] = 3;
        mat[i][2] = 3;
        mat[i][n - 3] = 3;
    }

    for (int i = 3; i < n - 3; i++)
    {
        mat[3][i] = 4;
        mat[n - 4][i] = 4;
        mat[i][3] = 4;
        mat[i][n - 4] = 4;
    }

    for (int i = 4; i <= n - 5; i++)
    {
        mat[4][i] = 5;
        mat[n - 5][i] = 5;
        mat[i][4] = 5;
        mat[i][n - 5] = 5;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int score = 0;
        vector<vector<char>> pp(10, vector<char>(10));
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> pp[i][j];
                if (pp[i][j] == 'X')
                {
                    score += mat[i][j];
                }
            }
        }
        ans.push_back(score);
    }

    for (auto i : ans)
        cout << i << endl;
    return 0;
}