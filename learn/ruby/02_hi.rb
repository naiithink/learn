#!/usr/bin/ruby

# ref https://www.ruby-lang.org/en/documentation/quickstart/2/

# defining a function
def hi
    puts "Hello World!"
end

# calling functions
hi
hi()

# redefining a function
def hi(name)
    puts "Hello #{name}!"
end

# calling functions
hi("Matz")

# capitalizing
def hi(name)
    puts "Hello #{name.capitalize}!"
end

# calling functions
hi("chris")
hi