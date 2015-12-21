# function_registry
Tool to allow functions to be "linked in" at compile time and called by existing code, without modifying existing code.

# How to use
1. Add `function_registry.h` to your project.
2. Create a new "function registry" to store functions of some type using the `CREATE_FUNCTION_REGISTRY` macro.
3. Add functions to the registry using the `REGISTER_FUNCTION` macro.
4. Call functions using their string name in any file that knows about the registry, *even if it doesn't know about the functions!

See the `example` folder for more details. See `function_registry.h` for detailed usage requirements.

# How it works
Each registry is a map of strings to std::function objects. A helper function will add
the function to the map. The helper function is used to set a global constant variable
(hidden inside the function_registry namespace). Therefore the helper gets called
at initialization time, before `main()` is called. So before your `main()` runs, all your
functions are in the registry.
