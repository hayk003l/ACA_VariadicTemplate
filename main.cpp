#include <iostream>


void print() {
    std::cout << "Empty" << std::endl;
}

template<typename T, typename... Types>
void print(T var1, Types... var2) {
    std::cout << var1 << std::endl;
    print(var2...);
}


int main() {
    print(1, 3.14, 8866, "Hello World", 'T');
    
    return 0;
}