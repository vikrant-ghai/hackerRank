#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
int i=0,j=0,co=0;int c[26]={0};int f[26]={1};
for(j=0;j<arr.size();j++) {for(i=0;i<26;i++){f[i]=1;}
    for(i=0;i<arr[j].length();i++){string s=arr[j];
        if(s[i]>=97&&s[i]<=122&&(f[s[i]-97])){f[s[i]-97]=0;c[s[i]-97]++;}}
}for(i=0;i<26;i++){if(c[i]==arr.size())co++;}
return co;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
