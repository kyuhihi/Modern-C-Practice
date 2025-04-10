#include <iostream>
#include <list>
#include <vector>

using namespace std;

// 파라미터를 더하는 함수
int FuncAdd(int iLeft, int iRight)
{
    return iLeft + iRight;
}

int main() {
    // FuncAdd를 람다로 표현하면
    auto lambdaAdd = [](int iLeft, int iRight) 
        {
            return iLeft + iRight;
        };

    std::cout << "FuncAdd(10, 10) = " << FuncAdd(10, 10) << std::endl;

    std::cout << "lambdaAdd(10, 10) = " << lambdaAdd(10, 10) << std::endl;
}



