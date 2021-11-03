#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'smallestLexicographical' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
string smallestLexicographical(string s) {
    unordered_map<char,int> m;
    // int len = s.size();
    string output = "ferajdgbc";
    for(char ch : s){
        if(m[ch])
            m[ch]++;
        else
            m[ch] = 1;
    }
    for(auto it = m.begin();it!= m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return output;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = smallestLexicographical(s);

    fout << result << "\n";

    fout.close();

    return 0;
}