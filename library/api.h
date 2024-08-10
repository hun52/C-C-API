#ifndef __API_H__
#define __API_H__

#if _WIN32
    #ifdef _WINDLL
        #define API __declspec(dllexport)
    #else
    #define API __declspec(dllimport)
    #endif
#else
    #if __GNUC__ >= 4
        #define API __attribute__ ((visibility ("default")))
    #else
        #define API
    #endif
#endif

#include <stdint.h>

#if defined(__cplusplus)
namespace math_api {
#endif

/// @brief API error codes
typedef enum {
    API_SUCCESS                              =  0x00,    /*!< @brief Everything is OK. */
    API_ERROR_INVALID_PARAMETER              = -0x10,    /*!< @brief Invalid parameter is given. */
    API_ERROR_OVERFLOW                       = -0x20,    /*!< @brief Overflow occurs from given param*/
    API_ERROR_DIVISION_BY_ZERO               = -0x30,    /*!< @brief Division by zero occurs. */
} api_error_t;

/// @brief Add two integers
/// @param a First integer
/// @param b Second integer
/// @return The sum of the two integers
API api_error_t add(int32_t* const result, int32_t const a, int32_t const b); 

/// @brief Subtract two integers
/// @param a First integer
/// @param b Second integer
/// @return The difference of the two integers
API api_error_t sub(int32_t* const result, int32_t const a, int32_t const b);

/// @brief Multiply two integers
/// @param a First integer
/// @param b Second integer
/// @return The product of the two integers
API api_error_t mul(int32_t* const result, int32_t const a, int32_t const b);

/// @brief Divide two integers
/// @param numerator the number in a fraction that is above the line and that is divided by the number below the line compare 
/// @param denominator the number below the line in a vulgar fraction; a divisor.
/// @return The division of the two integers
API api_error_t div(int32_t* const result, int32_t const numerator, int32_t const denominator);

/// @brief Modulo of two integers
/// @param a First integer
/// @param b Second integer
/// @return The modulo of the two integers
API api_error_t mod(int32_t* const result, int32_t const a, int32_t const b);

/// @brief Power of two integers
/// @param a First integer
/// @param b Second integer
/// @return The power of the two integers
API api_error_t pow(int32_t* const result, int32_t const a, int32_t const b);

#if defined(__cplusplus)
} // namespace math_api
#endif

#endif // __API_H__