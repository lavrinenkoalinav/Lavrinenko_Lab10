#include <iostream>
#include <vector>
#include <regex>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::vector<std::string> numbers = { "123", "567", "598", "456", "5", "502", "845" };

    cout << "Початковий масив:" << " " << endl;
    for (const auto& num : numbers) {
        cout << num << " "; 
    }
    regex pattern(R"(\b5\d*)");

    vector<std::string> matchedNumbers;

    for (const auto& num : numbers) {
        if (regex_match(num, pattern)) {
            matchedNumbers.push_back(num);
        }
    }

    cout << endl << "Числа, які починаються з цифри 5:" << endl;
    for (const auto& match : matchedNumbers) {
        cout << match << " ";
    }

    return 0;
}
