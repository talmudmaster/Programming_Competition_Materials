//求解整数拆分问题的算法
#include <stdio.h>
#include <string.h>
#include <iostream>
#define MAXN 500
using namespace std;

int dp[MAXN][MAXN];
int dpf(int n,int k)
{
    if (dp[n][k]!=0) return dp[n][k];
    if (n==1 || k==1)
    {
        dp[n][k]=1;
        return dp[n][k];
    }
    else if (n<k)
    {
        dp[n][k]=dpf(n,n);
        return dp[n][k];
    }
    else if (n==k)
    {
        dp[n][k]=dpf(n,k-1)+1;
        return dp[n][k];
    }
    else
    {
        dp[n][k]=dpf(n,k-1)+dpf(n-k,k);
        return dp[n][k];
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    memset(dp,0,sizeof(dp));                //初始化为0
    cout<<dpf(n,k);                        //输出:7
    return 0;
}
