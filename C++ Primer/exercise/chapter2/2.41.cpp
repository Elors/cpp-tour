#include <iostream>
#include "Sales_data.h"

int e1_in_page_20();
int e1_in_page_21();
int e1_in_page_22();


int main()
{
    e1_in_page_20();
    // e1_in_page_21();
    // e1_in_page_22();
}

/// @brief sum if same isbn 
/// @return 
int e1_in_page_20()
{
    Sales_data data1, data2;
    std::cout << "put isbn for book1" << std::endl;
    std::cin >> data1.isbn;
    std::cout << "put revenue for book1" << std::endl;
    std::cin >> data1.revenue;

    std::cout << "put isbn for book2" << std::endl;
    std::cin >> data2.isbn;
    std::cout << "put revenue for book2" << std::endl;
    std::cin >> data2.revenue;

    if (data1.isbn == data2.isbn)
    {
        std::cout << "total revenue for " 
                  << data1.isbn 
                  <<" is " 
                  << data1.revenue + data2.revenue << std::endl;
    }
    else
    {
        std::cout << "must refer to the same ISBN!" << std::endl;
        return -1;
    }

    return 0;
}