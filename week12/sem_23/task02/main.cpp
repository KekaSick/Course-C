#include <iostream>
#include <vector>
#include <stdexcept>
#include <new>
#include <typeinfo>
#include <cstring>
#include <memory>
#include <cmath>
#include <functional>
#include <array>

int main() 
{
    try 
    {
        // 1. std::overflow_error
        int max_int = std::numeric_limits<int>::max();
        int overflow = max_int + 1; // This will cause undefined behavior in C++ but here is just illustrative.
    } 
    catch (const std::overflow_error&) 
    {
        std::cout << "Exception: overflow_error\n";
    }

    try 
    {
        // 2. std::underflow_error
        double small_number = std::numeric_limits<double>::denorm_min();
        double underflow = small_number / 2; // underflow leading to zero
    } 
    catch (const std::underflow_error&) 
    {
        std::cout << "Exception: underflow_error\n";
    }

    try 
    {
        // 3. std::range_error
        double value = std::pow(10, 308); // A large exponent that causes overflow
        if (value == std::numeric_limits<double>::infinity()) 
        {
            throw std::range_error("Range error: value overflow");
        }
    } 
    catch (const std::range_error&) 
    {
        std::cout << "Exception: range_error\n";
    }

    try 
    {
        // 4. std::out_of_range (different scenario)
        std::string s = "hello";
        char ch = s.at(10); // Accessing out of bound element
    } 
    catch (const std::out_of_range&) 
    {
        std::cout << "Exception: out_of_range\n";
    }

    try 
    {
        // 5. std::bad_array_new_length
        int size = -1;
        auto* array = new int[size]; // Negative size array
    } 
    catch (const std::bad_array_new_length&) 
    {
        std::cout << "Exception: bad_array_new_length\n";
    }

    try 
    {
        // 6. std::bad_typeid
        class Base { virtual void dummy() {} };
        class Derived : public Base { void dummy() {} };
        Base* p = nullptr; // Null pointer
        std::cout << typeid(*p).name();
    } 
    catch (const std::bad_typeid&)
    {
        std::cout << "Exception: bad_typeid\n";
    }

    try 
    {
        // 7. std::bad_optional_access
        std::optional<int> opt;
        int value = *opt; // Accessing empty optional
    } 
    catch (const std::bad_optional_access&) 
    {
        std::cout << "Exception: bad_optional_access\n";
    }

    try 
    {
        // 8. std::bad_function_call (different scenario)
        std::function<int(int)> f = nullptr; // Unassigned std::function
        int result = f(5);
    } 
    catch (const std::bad_function_call&) 
    {
        std::cout << "Exception: bad_function_call\n";
    }

    try 
    {
        // 9. Handling overflow error
        int max_int = std::numeric_limits<int>::max();
        // int overflow = max_int + 1; // Uncomment if using this variable for an operation
    } 
    catch (const std::overflow_error&) 
    {
        std::cout << "Exception: overflow_error\n";
    }

    try 
    {
        // 10. Handling underflow error
        double small_number = std::numeric_limits<double>::denorm_min();
        // double underflow = small_number / 2; // Uncomment if using this variable for an operation
    } 
    catch (const std::underflow_error&) 
    {
        std::cout << "Exception: underflow_error\n";
    }

    return 0;
}
