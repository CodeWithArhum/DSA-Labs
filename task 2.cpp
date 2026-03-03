#include <iostream>
#include <stdexcept>
using namespace std;

template <class Type>
class List {

protected:
    Type* arr;
    int maxSize;
    int currentSize;

public:

    List(Type* a, int max, int csize) {
        maxSize = max;
        currentSize = csize;

        arr = new Type[maxSize];
        for (int i = 0; i < currentSize; i++) {
            arr[i] = a[i];
        }
    }

    List(const List<Type>& obj) {
        maxSize = obj.maxSize;
        currentSize = obj.currentSize;

        arr = new Type[maxSize];
        for (int i = 0; i < currentSize; i++) {
            arr[i] = obj.arr[i];
        }
    }

    virtual void addElementAtFirstIndex(Type) = 0;
    virtual void addElementAtLastIndex(Type) = 0;
    virtual Type removeElementFromEnd() = 0;
    virtual void removeElementFromStart() = 0;

    virtual ~List() {
        delete[] arr;
    }
};

template <class Type>
class MyList : public List<Type> {

public:

    MyList(Type* a, int max, int csize)
        : List<Type>(a, max, csize) {}

    void addElementAtFirstIndex(Type value) {
        if (this->currentSize == this->maxSize) return;

        for (int i = this->currentSize; i > 0; i--) {
            this->arr[i] = this->arr[i - 1];
        }

        this->arr[0] = value;
        this->currentSize++;
    }

    void addElementAtLastIndex(Type value) {
        if (this->currentSize == this->maxSize) return;

        this->arr[this->currentSize++] = value;
    }

    Type removeElementFromEnd() {
        if (this->currentSize == 0)
            throw runtime_error("List is empty");

        return this->arr[--this->currentSize];
    }

    void removeElementFromStart() {
        if (this->currentSize == 0) return;

        for (int i = 0; i < this->currentSize - 1; i++) {
            this->arr[i] = this->arr[i + 1];
        }

        this->currentSize--;
    }

    bool empty() {
        return this->currentSize == 0;
    }

    bool full() {
        return this->currentSize == this->maxSize;
    }

    int size() {
        return this->currentSize;
    }

    Type last() {
        if (this->currentSize == 0)
            throw runtime_error("List is empty");

        return this->arr[this->currentSize - 1];
    }

    bool search(Type value) {
        for (int i = 0; i < this->currentSize; i++) {
            if (this->arr[i] == value)
                return true;
        }
        return false;
    }
};

int main() {

    int initialData[] = { 10, 20, 30 };
    MyList<int> list(initialData, 10, 3);

    cout << "Initial size: " << list.size() << endl;

    list.addElementAtLastIndex(40);
    list.addElementAtLastIndex(50);

    cout << "After adding at end, size: " << list.size() << endl;

    list.addElementAtFirstIndex(5);

    cout << "Removed from end: " << list.removeElementFromEnd() << endl;

    list.removeElementFromStart();

    cout << "Size after removals: " << list.size() << endl;
    cout << "Last element: " << list.last() << endl;
    cout << "Search 30: " << list.search(30) << endl;
    cout << "Is empty? " << list.empty() << endl;
    cout << "Is full? " << list.full() << endl;

    return 0;
}