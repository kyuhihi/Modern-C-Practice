#include <iostream>
#include <list>
#include <vector>

using namespace std;

// �Ķ���͸� ���ϴ� �Լ�
int FuncAdd(int iLeft, int iRight)
{
    return iLeft + iRight;
}

int main() {
    // FuncAdd�� ���ٷ� ǥ���ϸ�
    auto lambdaAdd = [](int iLeft, int iRight) 
        {
            return iLeft + iRight;
        };

    std::cout << "FuncAdd(10, 10) = " << FuncAdd(10, 10) << std::endl;

    std::cout << "lambdaAdd(10, 10) = " << lambdaAdd(10, 10) << std::endl;
}



