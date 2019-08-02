#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;vector<long long> v(t,0);vector<long long> s(t,0);
    for(int a0 = 0; a0 < t; a0++){
        cin >> v[a0];
    }

    long long i=0,j=0,k=0,t1=0,t2=0,t3=0;
    for(i=0;i<v.size();i++) {s[i]=0;
        
        if(v[i]>=3){
            (v[i]%3)?t1=(v[i]-v[i]%3)/3:t1=(v[i]/3)-1;
            s[i]+=((t1)*((2*3)+((t1-1)*3))/2);
        }
        if(v[i]>=5){
            (v[i]%5)?t2=(v[i]-v[i]%5)/5:t2=(v[i]/5)-1;
            s[i]+=((t2)*((2*5)+((t2-1)*5))/2);
        }
        if(v[i]>=15){
            (v[i]%15)?t3=(v[i]-v[i]%15)/15:t3=(v[i]/15)-1;
            s[i]-=((t3)*((2*15)+((t3-1)*15))/2);
        }
        cout<<s[i]<<endl;
    }
    //for(i=0;i<s.size();i++){cout<<s[i]<<" ";}

    return 0;
}

