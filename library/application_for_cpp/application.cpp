#include <api.h>
#include <iostream>

int32_t main() {
    int32_t result{};
    math_api::api_error_t error{math_api::API_SUCCESS}; 
    error = math_api::add(&result, 3, 4);
    std::cout << "3 + 4 = " << result << std::endl;

    error = math_api::sub(&result, 3, 4);
    std::cout << "3 - 4 = " << result << std::endl;

    error = math_api::mul(&result, 3, 4);
    std::cout << "3 * 4 = " << result << std::endl;

    error = math_api::div(&result, 3, 4);
    std::cout << "3 / 4 = " << result << std::endl;

    return 0;
}