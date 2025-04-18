#include <iostream>
#include <vector>
using namespace std;

int lengthOfLastWord(string s) {
    vector<string> words;
    bool slovo = false;
    int index = 0;
    for (char i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            if (i + 1 == s.size()) {
                string to_words;
                for (int j = index - 1; j < i; j++) {
                    to_words.push_back(s[j]);
                }
                words.push_back(to_words);
                slovo = false;
                break;
            } else {
                slovo = true;
            }
        }
        else if (!slovo) {
            index++;
            continue;
        }
        else {
            string to_words;
            for (int j = index; j < i; j++) {
                to_words.push_back(s[j]);
            }
            index = i + 1;
            words.push_back(to_words);
            slovo = false;
        }
    }
    return words[words.size() - 1].size();
}

int main() {
    cout << lengthOfLastWord("   fly me   to   the moon  ") << endl;
    return 0;
}
