#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
int i=0,c=0;int c1[26]={0};int c2[26]={0};
for(i=0;i<s1.size();i++){
    if(s1[i]>=65&&s1[i]<=90)c1[s1[i]-65]++;
    if(s1[i]>=97&&s1[i]<=122)c1[s1[i]-97]++;}
for(i=0;i<s2.size();i++){
    if(s2[i]>=65&&s2[i]<=90)c2[s2[i]-65]++;
    if(s2[i]>=97&&s2[i]<=122)c2[s2[i]-97]++;}
for(i=0;i<26;i++){if(c1[i]!=c2[i]){if(c1[i]>c2[i])c+=c1[i]-c2[i]; else c+=c2[i]-c1[i];}}
return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
