#include <iostream>
#include "calc.h"

int main()
{
    ExprSolver obj;
    std::vector<std::string> expr = {"(", "2", "+", "(", "5", "*", "2", ")", ")", "*", "12"};
    obj.exprSolver(expr);
    std::cout << expr[0] << std::endl;

    return 0;
}
