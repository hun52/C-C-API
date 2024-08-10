#include <api.h>
#include <iostream>
#include <cmath>

using namespace math_api;

api_error_t add(int32_t* const result, int32_t const a, int32_t const b) {
    api_error_t err { API_SUCCESS };
    if(result == nullptr) {
        std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Invalid parameter is given" << std::endl;
        err = API_ERROR_INVALID_PARAMETER;
    } 
    else {
        int64_t const check_overflow {static_cast<int64_t>(a) + static_cast<int64_t>(b)};
        if(check_overflow > INT32_MAX || check_overflow < INT32_MIN) {
            std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Overflow occurs from given param" << std::endl;
            err = API_ERROR_OVERFLOW;
        } 
        else {
            *result = static_cast<int32_t>(check_overflow);
        }
    }
    return err;
}

api_error_t sub(int32_t* const result, int32_t const a, int32_t const b) {
    api_error_t err { API_SUCCESS };
    if(result == nullptr) {
        std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Invalid parameter is given" << std::endl;
        err = API_ERROR_INVALID_PARAMETER;
    } 
    else {
        int64_t const check_overflow {static_cast<int64_t>(a) - static_cast<int64_t>(b)};
        if(check_overflow > INT32_MAX || check_overflow < INT32_MIN) {
            std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Overflow occurs from given param" << std::endl;
            err = API_ERROR_OVERFLOW;
        } 
        else {
            *result = static_cast<int32_t>(check_overflow);
        }
    }
    return err;
}

api_error_t mul(int32_t* const result, int32_t const a, int32_t const b) {
    api_error_t err { API_SUCCESS };
    if(result == nullptr) {
        std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Invalid parameter is given" << std::endl;
        err = API_ERROR_INVALID_PARAMETER;
    } 
    else {
        int64_t const check_overflow {static_cast<int64_t>(a) * static_cast<int64_t>(b)};
        if(check_overflow > INT32_MAX || check_overflow < INT32_MIN) {
            std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Overflow occurs from given param" << std::endl;
            err = API_ERROR_OVERFLOW;
        } 
        else {
            *result = static_cast<int32_t>(check_overflow);
        }
    }
    return err;
}

api_error_t div(int32_t* const result, int32_t const a, int32_t const b) {
    api_error_t err { API_SUCCESS };
    if(result == nullptr) {
        std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Invalid parameter is given" << std::endl;
        err = API_ERROR_INVALID_PARAMETER;
    } 
    else if(b == 0) {
        std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Division by zero occurs" << std::endl;
        err = API_ERROR_DIVISION_BY_ZERO;
    } 
    else {
        *result = a / b;
    }
    return err;
}

api_error_t mod(int32_t* const result, int32_t const a, int32_t const b) {
    api_error_t err { API_SUCCESS };
    if(result == nullptr) {
        std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Invalid parameter is given" << std::endl;
        err = API_ERROR_INVALID_PARAMETER;
    } 
    else if(b == 0) {
        std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Division by zero occurs" << std::endl;
        err = API_ERROR_DIVISION_BY_ZERO;
    } 
    else {
        *result = a % b;
    }
    return err;
}

// api_error_t pow(int32_t* const result, int32_t const a, int32_t const b) {
//     api_error_t err { API_SUCCESS };
//     if(result == nullptr) {
//         std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Invalid parameter is given" << std::endl;
//         err = API_ERROR_INVALID_PARAMETER;
//     } 
//     else {
//         int64_t check_overflow {1};
//         for(int32_t i {}; i < b; ++i) {
//             check_overflow *= a;
//             if(check_overflow > INT32_MAX || check_overflow < INT32_MIN) {
//                 std::cerr << "__FILE__" << ":" << __LINE__ << " " << __func__ << " " << "Overflow occurs from given param" << std::endl;
//                 err = API_ERROR_OVERFLOW;
//                 break;
//             }
//         }
//         *result = static_cast<int32_t>(check_overflow);
//     }
//     return err;
// }