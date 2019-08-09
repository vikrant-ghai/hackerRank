#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
int i=0,j=0,c=0,l=s.length(),p=l/2,t1=0,t2=0;
string s1=s;string s2=s;for(j=0,i=s.length()-1;i>=0;j++,i--)s2[j]=s[i];cout<<s1<<" "<<s2<<endl; 
for(i=0;i<s1.size()-1;i++){
    (s1[i]>s1[i+1])?s1[i]=(s1[i]-s1[i+1]):s1[i]=(s1[i+1]-s1[i]);        
    (s2[i]>s2[i+1])?s2[i]=(s2[i]-s2[i+1]):s2[i]=(s2[i+1]-s2[i]);        
}for(i=0;i<s1.size()-1;i++){//cout<<s1[i]+97<<" "<<s2[i]+97<<endl; 
    if(s1[i]!=s2[i])return "Not Funny";
}return "Funny";
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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
