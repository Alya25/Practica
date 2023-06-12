#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool SpellWord(string word, vector<string> blocks) {
    unordered_map<char, bool> usedBlocks;//хэш-таблица
    for (int i = 0; i < blocks.size(); i++) {
        usedBlocks[blocks[i][0]] = false;
        usedBlocks[blocks[i][1]] = false;
    }
    for (int i = 0; i < word.length(); i++) {
        char letter = word[i];
        bool foundBlock = false;
        for (int j = 0; j < blocks.size(); j++) {
            if (!usedBlocks[blocks[j][0]] && !usedBlocks[blocks[j][1]] &&
                (letter == blocks[j][0] || letter == blocks[j][1])) {
                usedBlocks[blocks[j][0]] = true;
                usedBlocks[blocks[j][1]] = true;
                foundBlock = true;
                break;
            }
        }
        if (!foundBlock) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<string> blocks = { "BO", "XK", "DQ", "CP", "NA", "GT", "RE", "TG", "QD", "FS", "JW", "HU", "VI", "AN", "OB", "ER", "FS", "LY", "PC", "ZM" };
    string word;
    cout << "Enter a word: ";
    cin >> word;
    if (SpellWord(word, blocks)) {
        cout << "The word can be spelled " << endl;
    }
    else {
        cout << "The word cannot be spelled" << endl;
    }
    return 0;
}
