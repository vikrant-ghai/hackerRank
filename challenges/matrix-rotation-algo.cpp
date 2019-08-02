#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<vector<int>> vectG;

void matrixPrint(vector<vector<int>> matrix) {
for(int i=0;i<matrix.size();i++) {
    for(int j=0;j<matrix[i].size();j++) {
        cout<<matrix[i][j];(j==(matrix[i].size()-1))?cout<<"":cout<<" ";       
    }(i==matrix.size()-1)?cout<<"":cout<<endl;
}
}

void makeMatrix(vector<vector<int>> m1,vector<vector<int>> m2, int w, int h,int d) {
int i=0,j=0,k=0,l=0,min=0,temp=0;
for(k=0;k<d;k++){i=k;j=k;l=0; 
for(;i<h-k;i++){m1[i][j]=m2[k][l++];}i--;j++;
for(;j<w-k;j++){m1[i][j]=m2[k][l++];}j--;i--;
for(;i>=k;i--){m1[i][j]=m2[k][l++];}j--;i++;
for(;j>=k+1;j--){m1[i][j]=m2[k][l++];}
}matrixPrint(m1);
}

// Complete the matrixRotation function below.
void matrixRotation(vector<vector<int>> matrix, int r) {//matrixPrint(matrix);return;
int h=matrix.size();int w=matrix[0].size(); int d=0,min=0;
int i=0,j=0,k=0,l=0,lsize=0,temp=0,rot=r;(h<=w)?d=h:d=w;vector<vector<int>> m2(w);(w<=h)?min=w:min=h;d=min/2;
for(k=0;k<d;k++){i=k;j=k,lsize=((h-(2*k))*2)+(((w-(2*k))-2)*2);m2[k].resize(lsize);if(rot>lsize)rot=(rot%lsize);l=0+rot;//cout<<"START "<<d<<endl;
for(;i<h-k;i++){(l>lsize-1)?l=0:0;m2[k][l++]=matrix[i][j];}i--;j++;
for(;j<w-k;j++){(l>lsize-1)?l=0:0;m2[k][l++]=matrix[i][j];}j--;i--;
for(;i>=k;i--){(l>lsize-1)?l=0:0;m2[k][l++]=matrix[i][j];}j--;i++;
for(;j>=k+1;j--){(l>lsize-1)?l=0:0;m2[k][l++]=matrix[i][j];}
}//matrixPrint(m2);
makeMatrix(matrix,m2,w,h,d);
}

int main()
{
    string mnr_temp;
    getline(cin, mnr_temp);

    vector<string> mnr = split(rtrim(mnr_temp));

    int m = stoi(mnr[0]);

    int n = stoi(mnr[1]);

    int r = stoi(mnr[2]);

    vector<vector<int>> matrix(m);

    for (int i = 0; i < m; i++) {
        matrix[i].resize(n);

        string matrix_row_temp_temp;
        getline(cin, matrix_row_temp_temp);

        vector<string> matrix_row_temp = split(rtrim(matrix_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int matrix_row_item = stoi(matrix_row_temp[j]);

            matrix[i][j] = matrix_row_item;
        }
    }

    matrixRotation(matrix, r);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
