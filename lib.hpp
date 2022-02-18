
// Dependencies
#include <exception>
#include <cstdint>
#include <type_traits>
#include <vector>
#include <string>
#include <map>


// Structure
namespace type {
};

namespace except {
    class Exception         : public std::exception {};
    class InvalidOperation  : public Exception      {};
    class InvalidType       : public Exception      {};
    class Interupt          : public Exception      {};
};

class Variable;
class Convert;
