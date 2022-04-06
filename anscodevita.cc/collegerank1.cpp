
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long int
#define mod 1000000007
#define pb push_back
#define INF 1000000000
#define maxN 1000001
#define vl vector<ll>
#define l1(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
class stu
{
public:
    int id1, p1, p2, p3, coll;
    double percent;
    stu()
    {
        id1 = p1 = p2 = p3 = 0;
        coll = -1;
    }
};
bool cmp1(stu a, stu b)
{
    if (a.percent > b.percent)
        return true;
    else if (a.percent < b.percent)
        return false;
    else
        return a.id1 < b.id1;
}
int getstr(string s)
{
    bool flag = false;
    string ans = "";
    for (int j = 0; j < int(s.length()); j++)
    {
        if (s[j] == '-')
            flag = true;
        else if (flag)
            ans += s[j];
    }
    return stoi(ans);
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll cn, n;
    cin >> cn >> n;
    int place[cn + 1];
    for (int i = 1; i <= cn; i++)
        cin >> place[i];
    string input;
    vector<stu> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        vector<string> inputs;
        string temp = "";
        for (int i = 0; i < int(input.length()); i++)
        {
            if (input[i] == ',')
            {
                inputs.pb(temp);
                temp = "";
            }
            else
                temp += input[i];
        }
        inputs.pb(temp);
        vec[i].id1 = getstr(inputs[0]);
        vec[i].percent = stod(inputs[1]);
        vec[i].p1 = getstr(inputs[2]);
        vec[i].p2 = getstr(inputs[3]);
        vec[i].p3 = getstr(inputs[4]);
    }
    sort(vec.begin(), vec.end(), cmp1);
    for (int i = 0; i < n; i++)
    {
        if (place[vec[i].p1] > 0)
        {
            place[vec[i].p1] -= 1;
            vec[i].coll = vec[i].p1;
        }
        else if (place[vec[i].p2] > 0)
        {
            place[vec[i].p2] -= 1;
            vec[i].coll = vec[i].p2;
        }
        else if (place[vec[i].p3] > 0)
        {
            place[vec[i].p3] -= 1;
            vec[i].coll = vec[i].p3;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (vec[i].coll != -1)
        {
            cout << "Student-" << vec[i].id1 << " C-" << vec[i].coll << "\n";
        }
    }
    return 0;
}