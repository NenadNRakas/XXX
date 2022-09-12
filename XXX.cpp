#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;
struct S
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    const int num8;
    const int num9;
};
S g(vector <string> ops)
{
    const int a{ 0 };
    const int b{ 5 };
    const int c{ 2 };
    const int AddAB{ a + b };
    const int AddBC{ b + c };
    const int DoubleBC{ (AddBC * 2)};
    const int SplitBC{ (DoubleBC / 2) };
    const int f{ AddBC - b };
    const int Sum{ b + c + AddBC + DoubleBC + f};
    return { a, b, c, AddAB, AddBC, DoubleBC, SplitBC, f, Sum };
}
bool b(string s)
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
    if   ( s == b01 || s == b02 || s == b03 || s == b04 || s == b05 || s == b06 || s == b07 || s == b08 || s == b09 ||
           s == b10 || s == b11 || s == b12 || s == b13 || s == b14 || s == b15 || s == b16 || s == b17 || s == b18 ||
           s == b19 || s == b20 || s == b21 || s == b22 || s == b23 || s == b24 || s == b25 || s == b26 || s == b27 ||
           s == b28 || s == b29 || s == b30 || s == b31 || s == b32 || s == b33 )
         { return true; }
    else { return false; }
}
struct objEmplace { objEmplace(int, double) {} };
int main()
{
    vector <string> item;
    S s = g(item);
    string parentheses = "[{}()]";
    cout << "-----------------------Struct---------------------------------" << endl;
    cout << s.num1 << " " << s.num2 << " " << endl;
    cout << s.num3 << " " << s.num4 << " " << endl;
    cout << s.num5 << " " << s.num6 << " " << endl;
    cout << s.num7 << " " << s.num8 << " " << endl;
    cout << "Grand Total: " << s.num9 << endl;
    cout << "-----------------------Function-------------------------------" << endl;
    if (b(parentheses)) { cout << "Is Valid" << endl; }
    else { cout << " Not Valid" << endl; }
    cout << "-----------------------VectorInt------------------------------" << endl;
    vector<string> v5;
    vector<int>::iterator v6_Iter;
    vector<int>::const_iterator v6_cIter;
    vector<int>::iterator v7_Iter;
    vector<int> v1, v2, v3, v6, v7, v8;
    vector<int> v4 = { 3, 3, 3, 3, 3, 3, 3 };
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    cout << "v1 = ";
    for (auto& v : v1) {
        cout << v << " ";
    }
    cout << endl;
    v2.assign(v1.begin(), v1.end());
    cout << "v2 = ";
    for (auto& v : v2) {
        cout << v << " ";
    }
    cout << endl;
    v3.assign(7, 4);
    cout << "v3 = ";
    for (auto& v : v3) {
        cout << v << " ";
    }
    cout << endl;
    v3.assign({ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 });
    cout << "v3 = ";
    for (auto& v : v3) {
        cout << v << " ";
    }
    cout << endl;
    v5.push_back("One");
    v5.push_back("Two");
    v5.push_back("Three");
    const string& ai = v5.at(0);
    const string& bi = v5.at(1);
    cout << "Element: " << ai << endl;
    cout << "Element: " << bi << endl;
    cout << "First Element: " << v5.front() << endl;
    cout << "Last Element: " << v5.back() << endl;
    cout << "v5 = ";
    for (auto& v : v5) { cout << v << ". "; }
    cout << endl << "-----------------------VectorBegin-------------------------------------" << endl;
    v6.push_back(3);
    v6.push_back(33);
    v6.push_back(333);
    cout << "v6 = ";
    v6_Iter = v6.begin();
    //*v6_cIter = 321;
    for (; v6_Iter != v6.end(); v6_Iter++) { cout << " " << *v6_Iter; } cout << endl;
    cout << "v6 = ";
    v6_Iter = v6.begin();
    *v6_Iter = { 3333 };
    *v6_Iter = {21};
    for (; v6_Iter != v6.end(); v6_Iter++) { cout << " " << *v6_Iter; } cout << endl;
    cout << endl << "-----------------------VectorCapacity----------------------------------" << endl;
    const int Add{ 42 };
    v7.push_back(21);
    v7_Iter = v7.begin();
    for (; v7_Iter != v7.end(); v7_Iter++) { cout << "v7 Element: " << *v7_Iter << " v7 Storage: " << v7.capacity() << endl; }
    cout << "v7 Element: " << Add << " will be added" << endl;
    v7.push_back(Add);
    for(auto& v : v7) { cout << "v7 Element: " << v << " v7 Storage: " << v7.capacity() << endl; }
    cout << endl << "-----------------------VectorEraser----------------------------------" << endl;
    v8.push_back(63);
    v8.push_back(84);
    v8.push_back(33);
    for (auto& v : v8) { cout << "v8 Element: " << v << " v8 Storage: " << v8.capacity() << " v8 Size: " << v8.size() << " v8 Data: " << v8.data() << endl; }
    v8.clear();
    for (auto& v : v8) { cout << "v8 Element: " << v << " v8 Storage: " << v8.capacity() << " v8 Size: " << v8.size() << " v8 Data: " << v8.data() << endl; }
    cout << "v8 Element: " << "00" << " v8 Storage: " << v8.capacity() << " v8 Size: " << v8.size() << " v8 Data: " << v8.data() << endl;
    cout << endl << "-----------------------VectorConst----------------------------------" << endl;
    v4.push_back(123);
    v4.push_back(321);
    v4.push_back(213);
    v4.push_back(312);
    const vector<int> v9 = v4;
    const int &Hi = v9.front();
    const int &Bi = v9.back();
    cout << "1st Element: " << Hi << endl;
    cout << "End Element: " << Bi << endl;
    cout << "v4 = ";
    for (auto& v : v4) { cout << v << " "; }
    cout << endl;
    cout << "v9 = ";
    for (auto& v : v9) { cout << v << " "; }
    cout << endl;
    cout << endl << "-----------------------VectorCrBegin---------------------------------------" << endl;
    vector<int> v10;
    vector<int>::iterator v10_Iter;
    vector<int>::const_reverse_iterator v10_crIter;
    v10.push_back(7);
    v10.push_back(11);
    v10.push_back(21);
    v10.push_back(33);
    v10_Iter = v10.begin();
    v10_crIter = v10.crbegin();
    cout << "1st Element: " << *v10_Iter << "  <- From the normal iterator." << endl;
    cout << "1st Element: " << *v10_crIter << " <- From the C. R. Interator." << endl;
    for (v10_crIter = v10.rbegin(); v10_crIter != v10.rend(); v10_crIter++) 
    { cout << "Rev Element: " << * v10_crIter << " <- From the C. R. Iterator" << endl; }
    cout << endl;
    cout << endl << "-----------------------VectorData---------------------------------------" << endl;
    vector<int> v11;
    vector<int>::pointer v11_Ptr;
    vector<int>::const_pointer v11_cPtr;
    v11.push_back(11);
    v11.push_back(13);
    v11.push_back(21);
    v11.push_back(33);
    v11.push_back(42);
    cout << "v11 Data: " << v11.data() << endl;
    cout << "v11 Size: " << v11.size() << endl;
    v11_cPtr = v11.data();
    for (size_t n = v11.size(); 0 < n; --n, v11_cPtr++) { cout << "v11 Item: " << *v11_cPtr << endl; }
    v11.push_back(63);
    v11.push_back(84);
    v11_Ptr = v11.data();
    *v11_Ptr = 07;
    cout << "v11 Data: " << v11.data() << endl;
    cout << "v11 Size: " << v11.size() << endl;
    for (size_t n = v11.size(); 0 < n; --n, v11_Ptr++) { cout << "New List: " << *v11_Ptr << endl; }
    cout << endl;
    cout << endl << "-----------------------VectorDiffType---------------------------------------" << endl;
    vector<int> v12;
    vector<int>::iterator v12_Iter1, v12_Iter2;
    v12.push_back(30);
    v12.push_back(20);
    v12.push_back(30);
    v12.push_back(10);
    v12.push_back(30);
    v12.push_back(20);
    v12.push_back(30);
    v12.push_back(10);
    v12.push_back(20);
    cout << "v12 Data: " << v12.data() << endl;
    for (int v : v12) { cout << "v12 Element: " << v << endl; }
    v12_Iter1 = v12.begin();
    v12_Iter2 = v12.end();
    vector<int>::difference_type v12_Diff1, v12_Diff2, v12_Diff3;
    v12_Diff1 = count(v12_Iter1, v12_Iter2, 10);
    v12_Diff2 = count(v12_Iter1, v12_Iter2, 20);
    v12_Diff3 = count(v12_Iter1, v12_Iter2, 30);
    cout << "v12 Collection: Ten occurs    " << v12_Diff1 << " times." << endl;
    cout << "v12 Collection: Twenty occurs " << v12_Diff2 << " times." << endl;
    cout << "v12 Collection: Thrity occurs " << v12_Diff3 << " times." << endl;
    cout << "v12 Size: " << v12.size() << endl;
    cout << endl;
    cout << endl << "-----------------------VectorEmplace---------------------------------------" << endl;
    vector<int> v13;
    vector<int>::iterator v13_Iter1;
    v13.push_back(10);
    v13.push_back(20);
    v13.push_back(30);
    cout << "v13: |";
    for (v13_Iter1 = v13.begin(); v13_Iter1 != v13.end(); v13_Iter1++) { cout << *v13_Iter1 << "|"; }
    vector<vector<int>> v13_Vtr1;
    v13_Vtr1.emplace(v13_Vtr1.begin(), move(v13));
    if (v13_Vtr1.size() != 0 && v13_Vtr1[0].size() != 0)
    {
        cout << " -->  v13 Moved: |";
        for (v13_Iter1 = v13_Vtr1[0].begin(); v13_Iter1 != v13_Vtr1[0].end(); v13_Iter1++) { cout << *v13_Iter1 << "|"; }
    }
    cout << endl;
    cout << endl << "-----------------------VectorEmplace---------------------------------------" << endl;
    std::vector<objEmplace> v14;
    v14.emplace_back(1, 3.14);
    cout << endl;
    cout << endl << "-----------------------VectorEmpty---------------------------------------" << endl;
    vector<int> v15;
    v15.push_back(10);
    v15.clear();
    if (v15.empty()) 
            { cout << "v15 Elements: Empty " << endl; }
    else    { for (int v : v15) 
                  { cout << "v15 Elements:  " << v << endl; } 
            }
    cout << endl;
    cout << endl << "-----------------------ThEnd---------------------------------------" << endl;
    vector<int> v16;
    vector<int>::iterator v16_Iter;
    v16.push_back(11);
    v16.push_back(22);
    for (v16_Iter = v16.begin(); v16_Iter != v16.end(); v16_Iter++) { cout << *v16_Iter << endl; }
    cout << endl;
    cout << endl << "-----------------------VectorErase---------------------------------------" << endl;
    vector<int> v17;
    vector<int>::iterator v17_Iter;
    v17.push_back(10);
    v17.push_back(20);
    v17.push_back(30);
    v17.push_back(40);
    v17.push_back(50);
    v17.push_back(60);
    cout << "v17 Elements: " << v17.at(0)<< "|" << v17.at(1) << "|" << v17.at(2) << "|" << v17.at(3) << "|";
    for (v17_Iter = v17.begin(); v17_Iter != v17.end(); v17_Iter++) { cout << " " << *v17_Iter; }
    cout << endl;
    v17.erase(v17.begin()+1);
    cout << "v17 Elemnets: " << v17.at(0) << "|" << v17.at(1) << "|" << v17.at(2) << "|" << v17.at(3) << "|";
    for (v17_Iter = v17.begin(); v17_Iter != v17.end(); v17_Iter++) { cout << " " << *v17_Iter; }
    cout << endl;
    v17.erase(v17.begin()+2);
    cout << "v17 Elements: " << v17.at(0) << "|" << v17.at(1) << "|" << v17.at(2) << "|" << v17.at(3) << "|";
    for (v17_Iter = v17.begin(); v17_Iter != v17.end(); v17_Iter++) { cout << " " << *v17_Iter; }
    cout << endl;
    cout << endl << "-----------------------VectorFront---------------------------------------" << endl;
    vector<int> v18;
    v18.push_back(11);
    v18.push_back(12);
    int& i = v18.front();
    const int& ii = v18.front();
    i++;
    cout << "1st Element; "<< i << endl;
    cout << "1st Element: " << ii << endl;
    cout << endl;
    cout << endl << "-----------------------VectorAllocator---------------------------------------" << endl;
    vector<int> v19;
    vector<int, allocator<int>> v19_Alloc = vector<int, allocator<int>> (allocator<int>());
    vector<int> v20(v19.get_allocator());
    vector<int>::allocator_type v20_Alloc = v20.get_allocator();
    cout << "v19 Data: " << v19.data() << " -> v19 Size: " << v19.size() << endl;
    cout << "v20 Data: " << v20.data() << " -> v20 Size: " << v20.size() << endl;
    cout << endl;
    cout << endl << "-----------------------VectorInsert---------------------------------------" << endl;
    vector<int> v21;
    vector<int>::iterator v21_Iter;
    v21.push_back(1);
    v21.push_back(2);
    v21.push_back(3);

    cout << endl;
    cout << endl << "-----------------------ThEnd---------------------------------------" << endl;

    return 0;
}
