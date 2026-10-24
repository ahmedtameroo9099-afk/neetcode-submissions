class MinStack {
    private:
        int vals[1024];
        int mins[1024];
        int topIdx;

    public:
        MinStack() {
            topIdx = -1;
        }

        void push(int val) {
            topIdx++;
            vals[topIdx] = val;
            if (topIdx == 0 || val < mins[topIdx - 1])
                mins[topIdx] = val;
            else
                mins[topIdx] = mins[topIdx - 1];
        }

        void pop() {
            topIdx--;
        }

        int top() {
            return vals[topIdx];
        }

        int getMin() {
            return mins[topIdx];
        }
};