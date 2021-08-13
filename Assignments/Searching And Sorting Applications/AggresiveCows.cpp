#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isItPossible(ll *pos, ll nos, ll noc, ll dist)
{

    int lastCow = pos[0];
    int cows = 1;

    for (int i = 1; i < nos; i++)
    {

        if (pos[i] - lastCow >= dist)
        {
            cows++;
            lastCow = pos[i];
        }
        if (noc == cows)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll nos, noc;
        cin >> nos >> noc;
        ll pos[nos];

        for (ll i = 0; i < nos; i++)
        {
            cin >> pos[i];
        }

        sort(pos, pos + nos);
        ll ans = 0;

        ll lo = 0;
        ll hi = pos[nos - 1] - pos[0];

        while (lo <= hi)
        {

            ll mid = lo + (hi - lo) / 2;

            if (isItPossible(pos, nos, noc, mid))
            {
                ans = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        cout << ans << endl;
    }
}