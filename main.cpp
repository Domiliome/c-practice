#include <iostream>
  
int main()
{
    setlocale(LC_ALL, "");
    std::wcout << L"привет мир!" << std::endl;
    std::cout << "hello, world" << std::endl;
}