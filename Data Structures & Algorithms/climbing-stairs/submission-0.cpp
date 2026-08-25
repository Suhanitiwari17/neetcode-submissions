#include<bits/stdc++.h>
class Solution {
public:
    int t[46];
    int solve(int n,int i){
        
        if(n<0) return 0;

         if(n==0) return 1;

        if(t[i] != -1) return t[i];

        int one_step =  solve(n-1,i+1);
        int two_step =  solve(n-2,i+2);

        return t[i] = one_step + two_step;
    }
    int climbStairs(int n) {
        memset(t,-1,sizeof(t));
        return solve(n,0);
    }
};
