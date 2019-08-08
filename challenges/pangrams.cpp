#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
int i=0,f=1;int c[26]={0};
for(i=0;i<s.size();i++){
    if(s[i]>=65&&s[i]<=90)c[s[i]-65]++;
    if(s[i]>=97&&s[i]<=122)c[s[i]-97]++;}
for(i=0;i<25;i++){if(c[i]==0)return "not pangram";}
return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
