#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    vector<int>v(n+1,0);
    v[1]=0;
    v[2]=abs(heights[0]-heights[1]);
    for(int i=3;i<=n;i++){
        v[i]=min(v[i-1]+abs(heights[i-1]-heights[i-2]),v[i-2]+abs(heights[i-1]-heights[i-3]));
        }// Write your code here.
        return v[n];
}

//question link - https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos