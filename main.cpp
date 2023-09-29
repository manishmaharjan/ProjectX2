#include "src/calculator.h"
#include <iostream>
#include <cassert>
#include <cmath>

int main() {
    float result;

    // Test case 1: Addition
    result = calculator(5.0, '+', 3.0);
    assert(result == 8.0);
    std::cout << "Test case 1 (Addition) passed. Expected 8, got " << result << std::endl;

    // Test case 2: Subtraction
    result = calculator(10.0, '-', 4.0);
    assert(result == 6.0);
    std::cout << "Test case 2 (Subtraction) passed. Expected 6, got " << result << std::en>

    // Test case 3: Multiplication
    result = calculator(2.0, '*', 7.0);
    assert(result == 14.0);
    std::cout << "Test case 3 (Multiplication) passed. Expected 14, got " << result << std>

    // Test case 4: Division
    result = calculator(20.0, '/', 4.0);
    assert(result == 5.0);
    std::cout << "Test case 4 (Division) passed. Expected 5, got " << result << std::endl;

    // Test case 5: Division by zero
    result = calculator(10.0, '/', 0.0);
    assert(result == 1); // Expected result for division by zero error
    std::cout << "Test case 5 (Division by zero) passed. Expected 1, got  " << result  << >

    // Test case 6: Invalid operator
    result = calculator(8.0, '%', 4.0);
    assert(result == 1); // Expected result for invalid operator error
    std::cout << "Test case 6 (Invalid operator) passed. Expected 1, got " << result << st>

    // Test case 7: Floating-point precision
    result = calculator(0.1, '+', 0.2);
    assert(fabs(result - 0.3) < 0.00001); // Use a small tolerance value (e.g., 0.00001)
    std::cout << "Test case 7 (Floating-point precision) passed. Expected 0.3, got " << re>

    // Test case 8: Negative numbers
    result = calculator(-5.0, '*', 4.0);
    assert(result == -20.0);
    std::cout << "Test case 8 (Negative numbers multiplication) passed. Expected -20.0, go>

    // Test case 9: Large numbers
    result = calculator(1.0e20, '+', 1.0e20);
    float expected = 2.0e20;
    assert(fabs(result - expected) < 1.0e15); // Use a tolerance value (e.g., 1.0e15)
    std::cout << "Test case 9 (Large numbers) passed. Expected " << expected << ", got " <>

    // Test case 10: 22/7 pi test
    assert(calculator(22.0, '/', 7.0) > 3.141);
    std::cout << "Test case 10 (22/7 pi test) passed. Expected > 3.141, got " << result <<>

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
