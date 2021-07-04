#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

typedef stack<double> DoubleStack;
typedef stack<string> StrStack;
typedef vector<string> VecString;

VecString split(const string&,char);

int main(void){
    // Your code here!
    string str;
    DoubleStack dStack;
    StrStack sStack;
    string op[] = {"*","/","+","-","="};
    int lank[] = {5,5,3,3,1};
    
    //str = "3 + 10 / 2 - 1 * 2 =";
    //cout << str << endl;
    //cout << endl;
    getline(cin,str);
    
    vector<string> vstr;
    vstr = split(str,' ');
    /*
    for (int i=0; i<vstr.size(); i++) {
        cout << vstr[i] << endl;
    }
    cout << endl;
    //*/
    
    str = "";
    int lank1,lank2;
    for (int i=0; i<vstr.size(); i++) {
        try {
            stod(vstr[i]);
        }
        catch (exception &e) {
            while(1) {
                if (sStack.empty() == true) break;
                for (int j=0;j<sizeof(op)/sizeof(*op);j++) {
                    if(op[j]==vstr[i]) lank1 = j;
                    if(op[j]==sStack.top()) lank2 = j;
                }
                if (lank[lank1]>lank[lank2]) {
                    break;
                } else {
                    str += sStack.top() + " ";
                    sStack.pop();
                }
            }
            sStack.push(vstr[i]);
            continue;
        }
        str += vstr[i] + " ";
    }
    int n=sStack.size();
    for (int i=0; i<n; i++) {
        str += sStack.top() + " ";
        sStack.pop();
    }
    cout << str << endl;
    
    vstr = split(str,' ');
    
    
    for (int i=0; i<vstr.size(); i++) {
        try {
            dStack.push(stod(vstr[i]));
        }
        catch (exception &e) {
            if (vstr[i] == "+") {
                double a = dStack.top();
                dStack.pop();
                double b = dStack.top();
                dStack.pop();
                dStack.push(b+a);
            } else if (vstr[i] == "-") {
                double a = dStack.top();
                dStack.pop();
                double b = dStack.top();
                dStack.pop();
                dStack.push(b-a);
            } else if (vstr[i] == "*") {
                double a = dStack.top();
                dStack.pop();
                double b = dStack.top();
                dStack.pop();
                dStack.push(b*a);
            } else if (vstr[i] == "/") {
                double a = dStack.top();
                dStack.pop();
                double b = dStack.top();
                dStack.pop();
                dStack.push(b/a);
            } else if (vstr[i] == "=") {
                double a = dStack.top();
                cout << a << endl;
                str = "";
                while (!sStack.empty()) sStack.pop();
                while (!dStack.empty()) dStack.pop();
                break;
            }
        }
    }
}

VecString split(const string &s, char delim) {
    VecString elems;
    string item;
    for (char ch: s) {                  // range-based for loop (C++11)
        if (ch == delim) {
            if (!item.empty()) elems.push_back(item);
            item.clear();
        } else {
            item += ch;
        }
    }
    if (!item.empty()) elems.push_back(item);
    return elems;
}
