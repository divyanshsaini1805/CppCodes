#include<bits/stdc++.h>

using namespace std;

    int lengthOfLongestSubstring(string str) {
    int len = 0;
    int left = 0;
    int right = 0;
    
    
   //map<char,int> m; can use this as well
    
    vector<int> m(256,-1);
        while(right<str.size()){
            if(m[str[right]]!=-1) left = max(left, m[str[right]]+1); //same as while(left<right) left++ but is faster as we skip many iteration>
            
                m[str[right]] = right; 
                len=max(len,right-left+1); 
                right++;                
        }   

    return len;
    }


int maxNonRepeatingSubstring(string str){
    int len = str.length();
    int left = 0;
    int right = 0;
    int l = 0;
    int ans=INT_MIN;
    map<char,int> m;



    for(right=0;right<len;right++){
        if(m.find(str[right])!=m.end()){
            m[str[right]]=right;
            l++;
        }else{
            while(left<=m[str[right]]){
                left++;
                m.erase(str[left]);
            }
            m[str[right]]=right;
            l = right - left +1;
        }
         ans = max(ans,l);
    }
return ans;
}

int main(){ 
    
string s = "abcabcbb";
cout<<maxNonRepeatingSubstring(s)<<endl; //wrong
cout<<lengthOfLongestSubstring(s);
return 0;

}