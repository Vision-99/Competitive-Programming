#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long> a(n+1);
        a[0]=0;
        for(int i=0;i<n;i++) a[i+1]=a[i]+nums[i];
        return mergeSort(a,0,n);
    }
private:
    long long mergeSort(vector<long long>& a,int low,int high){
        long long cnt=0;
        if(low>=high) return cnt;
        int mid=(low+high)/2;
        cnt+=mergeSort(a,low,mid);
        cnt+=mergeSort(a,mid+1,high);
        cnt+=countPairs(a,low,mid,high);
        merge(a,low,mid,high);
        return cnt;
    }
    long long countPairs(vector<long long>& a,int low,int mid,int high){
        long long cnt=0;
        int right=mid+1;
        for(int left=low; left<=mid; left++){
            while(right<=high && a[right] <= a[left]) right++;
            cnt += (high - right + 1);
        }
        return cnt;
    }
    void merge(vector<long long>& a,int low,int mid,int high){
        int left=low, right=mid+1, idx=0;
        vector<long long> temp(high-low+1);
        while(left<=mid && right<=high){
            if(a[left] <= a[right]) temp[idx++]=a[left++];
            else temp[idx++]=a[right++];
        }
        while(left<=mid) temp[idx++]=a[left++];
        while(right<=high) temp[idx++]=a[right++];
        for(int p=low;p<=high;p++) a[p]=temp[p-low];
    }
};

int main(){
    Solution s;
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    long long ans = s.countSubArray(a);
    cout<<ans;
}
