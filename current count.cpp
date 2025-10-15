 #include <iostream>
using namespace std;

class Counter {
private:
    int count = 0;
public:
    void increment() {
        count++;
    }
    int getCount() const {
        return count;
    }
};

int main()
{
    Counter c;
    c.increment();
    c.increment();

    cout << "Current count: " << c.getCount() << endl;
    return 0;
}


