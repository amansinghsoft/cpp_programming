#include <iostream>

class Counter {
private:
    int value;

public:
    // Initialize the counter
    void initialize(int initialValue) {
        value = initialValue;
    }

    // Increment the counter
    void increment() {
        value++;
    }

    // Decrement the counter
    void decrement() {
        value--;
    }

    // Get the current value of the counter
    int getValue() const {
        return value;
    }
};

int main() {
    // Create a counter and initialize it to 0
    Counter myCounter;
    myCounter.initialize(0);

    // Increment the counter three times
    myCounter.increment();
    //myCounter.increment();
    //myCounter.increment();

    // Print the current value of the counter
    std::cout << "Current value: " << myCounter.getValue() << std::endl;

    // Decrement the counter
    myCounter.decrement();

    // Print the updated value of the counter
    std::cout << "Updated value: " << myCounter.getValue() << std::endl;

    return 0;
}
