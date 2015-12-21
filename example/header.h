// Author: Brian W Goldman
// This header creates two function registries:
// * greeting_message
// * math_operation
// All files that want to add functions to those registries
// or want to call functions in those registries, must include this file.
#ifndef HEADER_H
#define HEADER_H
#include "../function_registry.h"

// Macro takes 2 arguments:
// * The name for the new registry
// * The function signature (for best results, it should be a std::function
CREATE_FUNCTION_REGISTRY(greeting_message, function<string()>)
CREATE_FUNCTION_REGISTRY(math_operation, function<double(double, double)>)

#endif