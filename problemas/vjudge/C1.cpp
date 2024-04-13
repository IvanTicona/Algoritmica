#include <bits/stdc++.h>

using namespace std;

vector<int> paymentDays;

void generateNumbersList()
{
    paymentDays.push_back(1);
    for (int i = 2; i < 161; i++)
    {
        for (int j = 0; j < i; j++)
        {
            paymentDays.push_back(paymentDays.back() + i);
        }
    }
}

void solve()
{
    int day;
    while (cin >> day, day != 0)
    {
        printf("%d %d\n", day, paymentDays[day - 1]);
    }
    printf("\n");
}

int main()
{
    int N;
    cin >> N;
    generateNumbersList();
    while (N--)
    {
        solve();
    }
    return 0;
}