#include <bits/stdc++.h> 
using namespace std; 

#define int uint64_t 
const int MOD = 1e9 + 7; 

struct FibData { 
    int pLen; 
    int zCnt; 
    vector<int> zPos; 
}; 

int32_t main(){ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(0); 
     
    int tCnt; 
    cin >> tCnt; 
     
    vector<pair<int, int>> tCases(tCnt); 
    set<int> uniqKs; 
     
    for(int i = 0; i < tCnt; ++i){ 
        int nVal, kVal; 
        cin >> nVal >> kVal; 
        tCases[i] = {nVal, kVal}; 
        uniqKs.insert(kVal); 
    } 
     
    vector<int> kList; 
    kList.reserve(uniqKs.size()); 
    for(auto it = uniqKs.begin(); it != uniqKs.end(); ++it){ 
        kList.push_back(*it); 
    } 
     
    const int MAX_K = 100000; 
    vector<FibData> precomp(MAX_K + 1, FibData()); 
     
    for(auto kVal : kList){ 
        if(kVal == 1) continue; 

        int prevFib = 1 % kVal; 
        int currFib = 1 % kVal; 
        int pos = 2; 

        vector<int> zList; 
        int maxIters = 6 * kVal + 10; 
        bool pFound = false; 
        for(int i = 0; i < maxIters; ++i){ 
            int nextFib = (prevFib + currFib) % kVal; 
            pos += 1; 
            if(nextFib == 0) zList.push_back(pos); 
            prevFib = currFib; 
            currFib = nextFib; 
             
            if(prevFib == 1 && currFib == 1){ 
                precomp[kVal].pLen = pos - 2; 
                precomp[kVal].zCnt = zList.size(); 
                precomp[kVal].zPos = zList; 
                pFound = true; 
                break; 
            } 
        } 
        if(!pFound){ 
            precomp[kVal].pLen = pos - 2; 
            precomp[kVal].zCnt = zList.size(); 
            precomp[kVal].zPos = zList; 
        } 
    } 
     
    for(int i = 0; i < tCnt; ++i){ 
        int nVal = tCases[i].first; 
        int kVal = tCases[i].second; 
         
        if(kVal == 1){ 
            cout << (nVal % MOD) << "\n"; 
            continue; 
        } 
         
        FibData &fData = precomp[kVal]; 
        int pLen = fData.pLen; 
        int zCnt = fData.zCnt; 
        vector<int> &zPos = fData.zPos; 

        int q = (nVal - 1) / zCnt; 
        int r = (nVal - 1) % zCnt; 
         
        int res = ((q % MOD) * (pLen % MOD)) % MOD; 
        res = (res + (zPos[r] % MOD)) % MOD; 
         
        cout << res << "\n"; 
    } 

    return 0; 
} 
