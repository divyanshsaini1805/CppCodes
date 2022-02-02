#include<bits/stdc++.h>

using namespace std;


int eggDrop(int eggs, int floors){

    if(eggs = 1)
     return floors;

    if(floors = 0 || floors == 1)
            return floors;
            
    int mn = INT_MAX;
    for(int k=1;k<=floors; k++){
        {int temp = 1 + max(eggDrop(eggs-1,k-1), eggDrop(eggs,floors-k));

        mn  = min(mn,temp);
    }
    }

return  mn;
}


int eggDropTabulation(int f, int e){

    int t[f+1][e+1];

    for(int i=0;i<=f;i++) { t[i][1] = f; t[i][0] = 0;} //1Egg
    for(int i=0;i<=e;i++) {t[1][i] = 1; t[0][i] = 0;} //1 floor

    for(int i=2; i<=f;i++){
        for(int j=2;j<=e;j++){

            int ans = INT_MAX;
            for(int k=1; k<=j;k++){
                ans = min(ans, 1 + max(t[k-1][e-1],t[f-k][e]));
                }
            t[i][j] = 1 + ans;
        }
    }
return t[f][e];
}

int superEggDrop(int k, int n) {
        int dp[k+1][n+1];
        for(int i = 0; i <= k; i++){dp[i][1] = 1;dp[i][0] = 0;}
        for(int i = 0; i <= n; i++){dp[1][i] = i;dp[0][i] = 0;}
        for(int e = 2; e <= k; e++)
        {
            for(int f = 2; f <= n; f++)
            {
                int res = INT_MAX;
                int l = 1, r = f, temp, ans = INT_MAX, left, right;
                while(l <= r)
                {
                    int mid = (l + r)/2;
                    left = dp[e - 1][mid - 1];// when egg break 
                    right = dp[e][f - mid];// when egg not break
                    
                    temp = max(left, right);
                    
                    ans = min(ans, temp + 1);
                    
                    if(left < right)
                    {
                        l = mid + 1;
                    }
                    else 
                        r = mid - 1;
                    
                }
                dp[e][f] = ans;
            }
        }
        return dp[k][n];
    }

int main(){

    int egg = 2;
    int floor = 6;

    //cout<<eggDrop(egg, floor);
    //cout<<endl;
    //cout<<eggDropTabulation(floor,egg);
    
    cout<<superEggDrop(egg, floor);

    return 0;
}


// Level 1: 1q-abro
// Level 2: 1q-analok
// Level 3: 1q-avata
