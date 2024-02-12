#include <iostream>
#include <string>
using namespace std;

void truthTable(string op) {
    bool p = true;
    bool q = true;

    if (op == "&&") {
        std::cout << "P\tQ\tP&&Q\n";
        std::cout << p << "\t" << q << "\t" << (p && q) << endl;
        std::cout << p << "\t" << !q << "\t" << (p && !q) << endl;
        std::cout << !p << "\t" << q << "\t" << (!p && q) << endl;
        std::cout << !p << "\t" << !q << "\t" << (!p && !q) << endl;
    } else if (op == "||") {
        std::cout << "P\tQ\tP||Q\n";
        std::cout << p << "\t" << q << "\t" << (p || q) << endl;
        std::cout << p << "\t" << !q << "\t" << (p || !q) << endl;
        std::cout << !p << "\t" << q << "\t" << (!p || q) << endl;
        std::cout << !p << "\t" << !q << "\t" << (!p || !q) << endl;
    } else if (op == "!") {
        std::cout << "P\t!P\n";
        std::cout << p << "\t" << (!p) << endl;
        std::cout << !p << "\t" << (!p) << endl;
    } else if (op == "iff") {
        std::cout << "P\tQ\tP↔Q\n";
        std::cout << p << "\t" << q << "\t" << (p == q) << endl;
        std::cout << p << "\t" << !q << "\t" << (p == !q) << endl;
        std::cout << !p << "\t" << q << "\t" << (!p == q) << endl;
        std::cout << !p << "\t" << !q << "\t" << (!p == !q) << endl;
    } else if (op == "if") {
        std::cout << "P\tQ\tP→Q\n";
        std::cout << p << "\t" << q << "\t" << (!(p && !q)) << endl;
        std::cout << p << "\t" << !q << "\t" << (!(p && q)) << endl;
        std::cout << !p << "\t" << q << "\t" << (!(!p && !q)) << endl;
        std::cout << !p << "\t" << !q << "\t" << (!(!p && q)) << endl;
    } else {
        return;
    }
}

void printRow(bool p, bool q, bool c) {
    std::cout << p << "\t" << q << "\t" << c;
}

int main() {
    string op;
    std::cout << "Input operator: ";
    std::cin >> op;
    std::cout << endl;
    truthTable(op);
    return 0;
}