Function Calls and Call Stack: Demonstrating how function calls work and how the call stack is managed. 

  #include <iostream> 

  

using namespace std; 

  

void foo(int x) { 

    cout << "Inside foo() with argument: " << x << endl; 

} 

  

void bar() { 

    cout << "Inside bar()" << endl; 

} 

  

int main() { 

    foo(10); 

    bar(); 

    return 0; 

} 
