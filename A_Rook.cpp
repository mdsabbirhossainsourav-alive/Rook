#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        for(int i=1; i<=8; i++)
        {
            if(i != s[1] - '0')
            {
                cout << s[0] << i << endl;
            }
        }
        for(int i=1; i<=8; i++)
        {
            char chr = 'a' + i-1;
            if(chr!= s[0])
            {
                cout << chr << s[1] << endl;
            }    
        }
    }
    return 0;
}