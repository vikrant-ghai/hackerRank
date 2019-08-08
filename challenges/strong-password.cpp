#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int c=4,i=0,j=0,fl=0,fu=0,fs=0,fn=0,l=n,d=0;string str="!@#$%^&*()-+";
    for(i=0;i<password.size();i++){
        if(password[i]>=65&&password[i]<=90)fl=1;
        if(password[i]>=97&&password[i]<=122)fu=1;
        if(password[i]>=48&&password[i]<=57)fn=1;
        for(j=0;j<str.size();j++){if(password[i]==str[j]){fs=1;break;}}
    }c-=(fl+fu+fs+fn);d=6-l;//cout<<n<<"vik"<<endl;    
    (d<c)?0:c=d;
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
