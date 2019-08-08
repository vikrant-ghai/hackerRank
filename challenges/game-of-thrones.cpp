#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
int i=0,o=s.length()%2,co=0,f=1,p=1;int c[26]={0};
for(i=0;i<s.size();i++){
    if(s[i]>=65&&s[i]<=90)c[s[i]-65]++;
    if(s[i]>=97&&s[i]<=122)c[s[i]-97]++;}
for(i=0;i<26;i++){//cout<<c[i]<<" ";
    if((c[i]%2)!=0){if(f&&o)f=0;else p=0;}
}return p?"YES":"NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
