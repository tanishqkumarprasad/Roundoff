/* Round off project */
#include <iostream>
#include <iomanip>
int main(){
    double n;
    int r;
    std::cout << "Enter the number ";
    std::cin >> n;
    std::cout << "Round to?(decimal places) ";
    std::cin >> r;
    std::cout << std::setprecision(r) << std::fixed;
    std::cout << n << std::endl;
    return 0;
}