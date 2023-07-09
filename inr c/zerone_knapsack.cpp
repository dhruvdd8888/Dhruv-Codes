#include <iostream>
#include <cstring>
using namespace std;
int knapSack(int W, int wt[], int val[], int n)
{
    int dp[W + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < n + 1; i++) {
        for (int w = W; w >= 0; w--) {
 
            if (wt[i - 1] <= w)
                dp[w] = max(dp[w],
                            dp[w - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[W];
}
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int a[n], p[n], w;
    cout << "Enter knapsack weight : " << endl;
    cin >> w;
    cout << "Enter item Weights : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter item Profit : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    cout <<"Total Profit = "<< knapSack(w, a, p, n);
    return 0;
}