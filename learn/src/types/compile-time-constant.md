# Compile-time Constant

If a primitive type or a string is defined as a constant and the value is known at compile time,
the compiler replaces the constant name everywhere in the code with its value.
This is called a compile-time constant. If the value of the constant in the outside world changes
(for example, if it is legislated that pi actually should be 3.975),
you will need to recompile any classes that use this constant to get the current value.
