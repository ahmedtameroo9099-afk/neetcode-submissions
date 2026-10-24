#include <vector>

class DynamicArray {
    std::vector<int> v;

public:
    DynamicArray(int capacity) {
        v.reserve(capacity);
    }

    int get(int i) { return v.at(i); }

    void set(int i, int n) { v.at(i) = n; }

    void pushback(int n) { v.push_back(n); }

    int popback() {
        int item = v.back();
        v.pop_back();
        return item;
    }

    void resize() { v.reserve(2 * v.capacity()); }

    int getSize() { return v.size(); }

    int getCapacity() { return v.capacity(); }
};