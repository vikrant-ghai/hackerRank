#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int level=0, plevel=0, valley=0;
    for(auto i:s) { 
        (i=='U')?level++:level--;
        if (level==-1 && plevel==0) valley++;plevel=level;
    }return valley;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
counting-valleys
