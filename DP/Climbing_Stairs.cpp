#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
     vector<int>v(nStairs+1,0);
     v[0]=1;
     v[1]=1;
     v[2]=2;
     int n=nStairs;
     for(int i=3;i<=n;i++){
         v[i]=(v[i-1]+v[i-2])%1000000007;
     }
     return v[nStairs];
}

//question link - https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos