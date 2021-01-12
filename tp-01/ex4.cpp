#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<unsigned int> count_lower(const string& str) {
    vector<unsigned int> table(26, 0);
    for (const char& character : str) {
        if (islower(character)) {
            table[character - 97]++;
        }
    }
    return table;
}


void display_lower_occ(ostream& stream, const vector<unsigned int>& table) { 
    for (auto i = 0u; i < table.size(); i++) {
        if (table[i] != 0) {
            char c = 'a' + i;
            stream << c << ": " << table[i] << '\n';
        }
    }
    stream << endl;
}


int main() {
    string input;
    string str;

    while (getline(cin, input)) {
        if (input.empty()) {
            break;
        }
        str.append(input);
    }
    cout << str << endl;

    auto count = count_lower(str);
    display_lower_occ(cout, count);
}