#include <initializer_list>
#include <iostream>
double sum(std::initializer_list<double> il);

int main() {
    double total = sum({2.5, 3.1, 4}); // 4 converted to 4.0
    std::cout << total;

    return 0;
}

double sum(std::initializer_list<double> il) {
    double tot = 0;
    for (auto p = il.begin(); p != il.end(); p++)
        tot += *p;
    return tot;
}
