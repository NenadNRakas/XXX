#pragma once
#include <iostream>
using namespace std;
class Parenthesess
{
public:
    bool isValid(string s)
    {
        const string b01{ "()" };
        const string b02{ "[]" };
        const string b03{ "{}" };
        const string b04{ "()[]" };
        const string b05{ "(){}" };
        const string b06{ "[]{}" };
        const string b07{ "[]()" };
        const string b08{ "{}()" };
        const string b09{ "{}[]" };
        const string b10{ "[()]" };
        const string b11{ "{()}" };
        const string b12{ "([])" };
        const string b13{ "{[]}" };
        const string b14{ "({})" };
        const string b15{ "[{}]" };
        const string b16{ "()[]{}" };
        const string b17{ "{}[]()" };
        const string b18{ "(){}[]" };
        const string b19{ "[]{}()" };
        const string b20{ "[](){}" };
        const string b21{ "{}()[]" };
        const string b22{ "([{}])" };
        const string b23{ "[({})]" };
        const string b24{ "{([])}" };
        const string b25{ "({[]})" };
        const string b26{ "[{()}]" };
        const string b27{ "{[()]}" };
        const string b28{ "([]{})" };
        const string b29{ "({}[])" };
        const string b30{ "[(){}]" };
        const string b31{ "[{}()]" };
        const string b32{ "{()[]}" };
        const string b33{ "{[]()}" };
        if (s == b01 || s == b02 || s == b03 || s == b04 || s == b05 || s == b06 || s == b07 || s == b08 || s == b09 ||
            s == b10 || s == b11 || s == b12 || s == b13 || s == b14 || s == b15 || s == b16 || s == b17 || s == b18 ||
            s == b19 || s == b20 || s == b21 || s == b22 || s == b23 || s == b24 || s == b25 || s == b26 || s == b27 ||
            s == b28 || s == b29 || s == b30 || s == b31 || s == b32 || s == b33)
        {
            return true;
        }
        else { return false; }
    }

};
int main()
{
    string input;
    cin >> input;
    Parenthesess sol;
    if (sol.isValid(input)) cout << "Valid";
    else cout << "Invalid";
}