#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

void output(const std::string &s) { std::cout << s << " "; }

int main() {
    using namespace std;

    string s1[4] = {"fine", "fish", "fashion", "fate"};
    string s2[2] = {"busy", "bats"};
    string s3[2] = {"silly", "singers"};
    vector<string> words(4);

    // 复制 s1 到 words
    copy(s1, s1 + 4, words.begin());
    for_each(words.begin(), words.end(), output);
    cout << endl;

    // 构造匿名的 back_insert_iterator 对象
    copy(s2, s2 + 2, back_insert_iterator<vector<string> >(words));
    for_each(words.begin(), words.end(), output);
    cout << endl;

    // 构造匿名的 insert_iterator 对象
    copy(s3, s3 + 2, insert_iterator<vector<string> >(words, words.begin()));
    for_each(words.begin(), words.end(), output);
    cout << endl;

    return 0;
}
