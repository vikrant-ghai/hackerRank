#include <bits/stdc++.h>

using namespace std;

string getNumbericString (int i, bool isMinute)
{
    string str;
    switch(i) {
        case 0:str="o' clock";break;
        case 1:str="one";break;
        case 2:str="two";break;
        case 3:str="three";break;
        case 4:str="four";break;
        case 5:str="five";break;
        case 6:str="six";break;
        case 7:str="seven";break;
        case 8:str="eight";break;
        case 9:str="nine";break;
        case 10:str="ten";break;
        case 11:str="eleven";break;
        case 12:str="twelve";break;
        case 13:str="thirteen";break;
        case 14:str="fourteen";break;
        case 15:str="quarter";break;
        case 16:str="sixteen";break;
        case 17:str="seventeen";break;
        case 18:str="eighteen";break;
        case 19:str="nineteen";break;
        case 20:str="twenty";break;
        case 21:str="twenty one";break;
        case 22:str="twenty two";break;
        case 23:str="twenty three";break;
        case 24:str="twenty four";break;
        case 25:str="twenty five";break;
        case 26:str="twenty six";break;
        case 27:str="twenty seven";break;
        case 28:str="twenty eight";break;
        case 29:str="twenty nine";break;
        case 30:str="half";break;
    } 
    if(isMinute ){
        if((i!=0)&&(i!=15)&&(i!=30)) {
            (i==1)?str+=" minute":str+=" minutes";
        }
    } return str;
}
    
// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    std::string hour="",minutes="",fin="";
    minutes = getNumbericString((m>30)?60-m:m, true);
    hour = getNumbericString((m>30)?h+1:h, false);
    if(m==0) {
        return (hour+" "+minutes);
    } else if(m>30) {
        return (minutes+" to "+hour);
    } else { 
        return (minutes+" past "+hour);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
