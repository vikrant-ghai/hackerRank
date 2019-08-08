#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
int i=0,su1=0,su2=0,su3=0,d=0,f=0;int c[26]={0};
for(i=0;i<s.size();i++){c[s[i]-97]++;}
for(i=0;i<26;i++){su1+=c[i];if(c[i])su2+=1;}

d=su1/su2;
cout<<su1<<" "<<su2<<" "<<d<<endl;
for(i=0;i<26;i++){cout<<c[i]<<" ";}

int fl=1;int t=0;
for(i=0;i<26;i++){
    if(c[i]==0)continue;
    if(t==0 && c[i]!=0) t=c[i];
    if((c[i]!=t)&&(c[i]!=1)) return "NO";
    if((c[i]!=t)&&(c[i]==1)) {
        if(fl) {fl=0;}
        else {return "NO";}
    } 
}
//if((su1-1)%su2)return "NO";else return "YES";
return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
