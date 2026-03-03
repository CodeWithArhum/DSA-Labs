//#include <iostream>
//using namespace std;
//
//template <class Type>
//class List {
//
//    Type* arr;
//    int maxSize;
//    int currentSize;
//
//public:
//
//    virtual void addElementAtFirstIndex(Type) = 0;
//    virtual void addElementAtLastIndex(Type) = 0;
//    virtual Type removeElementFromEnd() = 0;
//    virtual void removeElementFromStart() = 0;
//
//
//    List(Type* a, int max, int csize) {
//        maxSize = max;
//        currentSize = csize;
//
//        arr = new Type[currentSize];
//        for (int i = 0; i < currentSize; i++) {
//            arr[i] = a[i];
//        }
//    }
//
//    List(const List<Type>& obj) {
//        maxSize = obj.maxSize;
//        currentSize = obj.currentSize;
//
//        arr = new Type[currentSize];
//        for (int i = 0; i < currentSize; i++) {
//            arr[i] = obj.arr[i];
//        }
//    }
//
//
//    ~List() {
//        delete[] arr;
//    }
//};
//
//int main() {
//
//
//
//}