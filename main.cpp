#include <iostream>
#include <algorithm>
#include <list>
#include <memory>

using namespace std;

//int main() {//uniqueptr 예제
//    unique_ptr<int> ptr = std::make_unique<int>(10);
//    cout << *ptr << std::endl;
//
//    //std::unique_ptr<int> ptr2 = ptr; //  컴파일러에러!! 복사 안됨
//    std::unique_ptr<int> ptr2 = move(ptr); //이동만 가능
//    cout << *ptr2 << std::endl;
//}

//class A {
//public:
//    A(shared_ptr<int> ForUseCnt) { ptr2 = ForUseCnt; cout << *ptr2 << endl; }
//private:
//
//    shared_ptr<int> ptr2;
//};
//
//int main() {//shared_ptr 예제
//    std::shared_ptr<int> ptr1 = std::make_shared<int>(100);
//    A* ptrA = new A(ptr1);
//
//    std::cout << *ptr1 << ", count = " << ptr1.use_count() << std::endl;//useCnt 2
//
//    delete ptrA;
//    std::cout << *ptr1 << ", count = " << ptr1.use_count() << std::endl;//useCnt 1
//
//}


int main() {
    std::shared_ptr<int> shared = std::make_shared<int>(100);
    std::weak_ptr<int> weak = shared;

    std::cout << "use_count = " << shared.use_count() << std::endl;//use cnt 1 카운터가 늘지 않는다.

    if (auto locked = weak.lock()) {
        ++(*locked);
        std::cout << "weak Value = " << *locked << std::endl;
        std::cout << "shared Value = " << *shared << std::endl;
    }
}
