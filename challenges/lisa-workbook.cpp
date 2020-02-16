#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the workbook function below.
int workbook(int n, int k, vector<int> arr) {
    int spProblem = 0, problemIndex=0,  bookPages=1, i=0, j=0;
    for(i=0;i<n;i++){        
        int chapterPages = (arr[i]/k)+((arr[i]%k)?1:0);
        int problemIndex = 1;
        int maxProblems = arr[i];          
        int perPageProblems = k; 
        for(j=0;j<chapterPages;j++,bookPages++) { 
            int t = (maxProblems>perPageProblems)?perPageProblems:maxProblems; 
            if( (problemIndex<=bookPages) && (bookPages<(problemIndex+t))) {
                spProblem++; //cout<<"CPI->"<<i+1<<" "<<bookPages<<" "<<problemIndex<<endl;
            } problemIndex += k; maxProblems -= perPageProblems;
        }
    }  return spProblem;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = workbook(n, k, arr);

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
