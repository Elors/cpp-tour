#include <iostream>
#include <string>
#include <vector>

using namespace std;

void _3_21();
void _3_22();
void _3_23();
void _3_24();
void _3_25();

int main()
{
    // _3_21();
    // _3_22();
    // _3_23();
    // _3_24();
    _3_25();
}

void _3_21()
{
    // rewrite 3.16 use itrator
    vector<string> v7{10, "hi"};    // 10个"hi"
    for (auto it = v7.cbegin(); it != v7.cend(); ++it)
        cout << *it << "\t";
    cout << endl;
}

void _3_22()
{
    string text = "this is the first line.\nthis is second line.";
    for (auto it = text.begin(); 
         it != text.end() && *it != '\n'; ++it)
        *it = toupper(*it);
    cout << text << endl;
}

void _3_23()
{
    vector<int> iv{12, 22, 91, 195, 2922, 2077, 9014, 1, 0, 99999};
    for (auto it = iv.begin(); it != iv.end(); ++it)
        *it *= 2;

    for (auto it = iv.cbegin(); it != iv.cend(); ++it)
        cout << *it << endl;
}

void _3_24()
{
    /**
     * rewrite 3.20 use itrator
    */
    vector<int> iv{12, 22, 91, 195, 2922, 2077, 9014, 1, 0, 99999};

    int len = iv.size() - 1;
    // part1
    for (auto it = iv.cbegin(); it != iv.cend(); ++it)
        cout << (*it) + *(++it) << ", ";
    cout << endl;
    
    // part2
    for (auto lft = iv.cbegin(), rht = iv.cend() - 1; lft <= rht; ++lft, --rht)
        cout << *lft + *rht << endl;
    cout << endl;
}

void _3_25()
{
    /**
     * rewrite code in page 93
    */
    vector<unsigned> inputs{42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93};
    vector<unsigned> scores(11, 0);
    unsigned grade;
    for (auto it = inputs.cbegin(); it != inputs.cend(); ++it)
        ++*(scores.begin() + (*it/10));

    for (auto c : scores)
        cout << c << endl;
}



