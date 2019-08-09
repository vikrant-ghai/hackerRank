#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
int i=0,j=0,m=0;
for(i=1;i<s1.length()+1;i++) { 
    for(j=0;j<=s1.length()-i;j++){
        std::string t(s1.begin()+j,s1.begin()+i+j);//cout<<t<<" "<<s2.find(t)<<endl;
        if(s2.find(t)!=std::string::npos)return "YES";
    }
}return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
