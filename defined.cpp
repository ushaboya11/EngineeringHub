 #include <iostream> 
class Test { 
public: 
void display(); 
}; 
void Test::display() { 
std::cout << "Hello from Test class!" << std::endl; 
} 
int main() { 
Test t; 
t.display();  // Call the member function�
 return 0;
}
