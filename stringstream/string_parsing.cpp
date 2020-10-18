#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parse_string(string);

int main() {
    string g_strInput;
    vector<int> g_intOutput;

    cin >> g_strInput;
    g_intOutput = parse_string(g_strInput);

    for (auto& x : g_intOutput){
        cout << x << endl;
    }
}

vector<int> parse_string(string ps_str){
    istringstream ps_strStream(ps_str);
    vector<int> ps_returnVect;
    int ps_catchStream;

    while(ps_strStream.good()){
        string ps_catchString;
        getline(ps_strStream,ps_catchString,',');
        ps_catchStream = stoi(ps_catchString);
        ps_returnVect.push_back(ps_catchStream);
    }

    return ps_returnVect;
}

/*

*/