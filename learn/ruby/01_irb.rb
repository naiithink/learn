#!/usr/bin/ruby

# ref https://www.ruby-lang.org/en/documentation/quickstart/

# evaluating an expressesion
# irb(main):001:0> "Hello World"
# => "Hello World"

# printing out
# irb(main):002:0> puts "Hello World"
# => nil
    # '=> nil' : the result of the expression,
    # 'nul' is Ruby's absolutely-positively-nothing value.
    # 'puts' always return 'nil'
puts "Hello World"

# some more expressions
# irb(main):003:0> 3+2
# => 5
# irb(main):004:0> 3*2
# => 6
# irb(main):005:0> 3**2
# => 9
# irb(main):006:0> Math.sqrt(9)
# => 3.0
    # 'Math' is a built-in module for mathematics.

# assignment
# irb(main):007:0> a = 3 ** 2
# => 9
# irb(main):008:0> b = 4 ** 2
# => 16
# irb(main):009:0> Math.sqrt(a+b)
# => 5.0
a = 3 ** 2
b = 4 ** 2
Math.sqrt(a+b)