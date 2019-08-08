#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
int i=0,c=0,l=s.length(),p=l/2;int c1[26]={0};int c2[26]={0};
string s1(s.begin(),s.begin()+p);string s2(s.begin()+p,s.end());
if(l%2)return -1;//cout<<s1<<" "<<s2<<endl;
for(i=0;i<l;i++){(i<p)?s1[i]=s[i]:s2[i-(l/2)]=s[i];}
for(i=0;i<s1.size();i++){
    if(s1[i]>=65&&s1[i]<=90)c1[s1[i]-65]++;
    if(s1[i]>=97&&s1[i]<=122)c1[s1[i]-97]++;}
for(i=0;i<s2.size();i++){
    if(s2[i]>=65&&s2[i]<=90)c2[s2[i]-65]++;
    if(s2[i]>=97&&s2[i]<=122)c2[s2[i]-97]++;}
for(i=0;i<26;i++){if(c1[i]!=c2[i]){if(c1[i]>c2[i])c+=c1[i]-c2[i]; else c+=c2[i]-c1[i];}}
if(c<0)return 0; else return (c/2);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
