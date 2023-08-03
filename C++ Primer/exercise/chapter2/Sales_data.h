#ifndef __SALES_DATA_H__
#define __SALES_DATA_H__
#include <string>
struct Sales_data {
    std::string sku;
    std::string isbn;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.;
};
#endif
