#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string text, content;

    cout << "Please enter text: ";
    getline(cin, text);

    ofstream out("CSC450_CT5_mod5.txt", ios::app);
    out << text << endl;
    out.close();

    ifstream in("CSC450_CT5_mod5.txt");
    content.assign((istreambuf_iterator<char>(in)),
                    istreambuf_iterator<char>());

    reverse(content.begin(), content.end());

    ofstream rev("CSC450-mod5-reverse.txt");
    rev << content;

    cout << "Done." << endl;

    return 0;
}
