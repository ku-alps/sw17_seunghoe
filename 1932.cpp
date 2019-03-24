#include <iostream>
#include <cstring>

using namespace std;

int dp[501][501];

int main() {
	int t;
	int temp;

	cin >> t;

	for (int i = 1; i <= t; i++) {
		for (int j = 1; j <= i; j++)
			cin >> dp[i][j];
	}
	
	for (int i = 1; i <= t; i++) {
		for (int j = 1; j <= i; j++) {
			if (j - 1 == 0)
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else if (j + 1 == 0)
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else if (dp[i - 1][j - 1] >= dp[i - 1][j])
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else
				dp[i][j] = dp[i - 1][j] + dp[i][j];
		}
	}

	temp = 0;

	for (int i = 1; i <= t; i++) {
		if (temp < dp[t][i])
			temp = dp[t][i];
	}
	cout << temp << endl;
}