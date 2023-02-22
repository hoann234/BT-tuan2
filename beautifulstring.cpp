#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+3;
long long dp[N][3];

int main() {
    string s;
    cin >> s;

    int n = s.length();
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        dp[i + 1][0] = 1;
        dp[i + 1][1] = dp[i][1];
        if (i > 0 && s[i] != s[i - 1])
            dp[i + 1][1]++;
        if (i == 0)
            dp[i + 1][1]++;
        dp[i + 1][2] = dp[i][2];
        if (i > 0 && s[i] != s[i - 1])
            dp[i + 1][2] += dp[i][1] - 1;
        if (i > 1 && s[i] != s[i - 2])
            dp[i + 1][2]++;
        if (i == 1)
            dp[i + 1][2]++;
    }
    cout << dp[n][2] << "\n";

    return 0;
}
