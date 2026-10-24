#include <list>
#include <vector>
#include <iterator>
using namespace std;

class LinkedList {
    list<int> l;

public:
    int get(int index) {
        if (index < 0 || index >= (int)l.size()) return -1;
        auto it = l.begin();
        advance(it, index);
        return *it;
    }

    void insertHead(int val) { l.push_front(val);
    }

    void insertTail(int val) { l.push_back(val); }

    bool remove(int index) {
        if (index < 0 || index >= (int)l.size()) return false;
        auto it = l.begin();
        advance(it, index);
        l.erase(it);
        return true;
    }

    vector<int> getValues() {
        return vector<int>(l.begin(), l.end());
    }
};