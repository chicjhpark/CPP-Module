#include "data.hpp"

int main(void)
{
    Data data = {"test"};

    std::cout << "data addr : " << &data<< std::endl;

    uintptr_t addr = serialize(&data);
    std::cout << "serialize addr : " << addr << std::endl;

    Data* temp = deserialize(addr);
    std::cout << "deserialize addr : " << temp << std::endl;

    return 0;
}
