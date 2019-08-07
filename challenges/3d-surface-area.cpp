#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void matrixPrint(vector<vector<int>> matrix) {
for(int i=0;i<matrix.size();i++) {
    for(int j=0;j<matrix[i].size();j++) {
        cout<<matrix[i][j];(j==(matrix[i].size()-1))?cout<<"":cout<<" ";       
    }(i==matrix.size()-1)?cout<<"":cout<<endl;
}
}

// Complete the surfaceArea function below.
int surfaceArea(vector<vector<int>> A) {
vector<vector<int>> B;
int i=0,j=0,w=A.size(),l=A[0].size(),h=0,c=0,m=0;
B.resize(w+2);for(i=0;i<w+2;i++){B[i].resize(l+2);for(j=0;j<l+2;j++){B[i][j]=0;}}
for(i=0;i<w;i++){for(j=0;j<l;j++){B[i+1][j+1]=A[i][j];}}
for(i=1;i<=w;i++){for(j=1;j<=l;j++){m=2;
    (B[i][j]>B[i-1][j])?m+=B[i][j]-B[i-1][j]:0;
    (B[i][j]>B[i][j+1])?m+=B[i][j]-B[i][j+1]:0;
    (B[i][j]>B[i][j-1])?m+=B[i][j]-B[i][j-1]:0;
    (B[i][j]>B[i+1][j])?m+=B[i][j]-B[i+1][j]:0;
    c+=m;}
}return c;}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string HW_temp;
    getline(cin, HW_temp);

    vector<string> HW = split_string(HW_temp);

    int H = stoi(HW[0]);

    int W = stoi(HW[1]);

    vector<vector<int>> A(H);
    for (int i = 0; i < H; i++) {
        A[i].resize(W);

        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = surfaceArea(A);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
