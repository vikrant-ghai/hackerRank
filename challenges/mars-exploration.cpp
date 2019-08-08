

#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
int i=0,c=0;
for(i=0;i<s.length();i+=3) {
    if(s[i]!='S')c++;
    if(s[i+1]!='O')c++;
    if(s[i+2]!='S')c++;
}return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
