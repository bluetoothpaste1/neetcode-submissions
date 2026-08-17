class DynamicArray {
   private:
    int* array;
    int capacity;
    int size;

   public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        this->array = new int[capacity];
    }

    ~DynamicArray() { delete[] array; }

    int get(int i) { return array[i]; }

    void set(int i, int n) { array[i] = n; }

    void pushback(int n) {
        if (size == capacity) resize();
        array[size] = n;
        size++;
    }

    int popback() {
        size--;
        return array[size];
    }

    void resize() {
        capacity *= 2;
        int* new_array = new int[capacity];

        for (int i = 0; i < size; ++i) {
            new_array[i] = array[i];
        }

        delete[] array;
        array = new_array;
    }

    int getSize() { return size; }

    int getCapacity() { return capacity; }
};
