#include <iostream>
#include "calc.h"

int main()
{
    ExprSolver obj;
    std::vector<std::string> expr = {"(", "5", "/", "0", ")", "*", "12"};
    obj.exprSolver(expr);
    std::cout << expr[0] << std::endl;

    return 0;
}
