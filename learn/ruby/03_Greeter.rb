#!/usr/bin/ruby

# ref https://www.ruby-lang.org/en/documentation/quickstart/3/

# defining a class
class Greeter
    def initialize(name = "World")
        @name = name
    end
    def say_hi
        puts "Hi #{@name}!"
    end
    def say_bye
        puts "Bye #{@name}, come back soon."
    end
end

# list all methods for a class (including ones from ancestor classes)
Greeter.instance_methods

# list only methods defined for a class
# 'false' : no methods defined by ancestors.
Greeter.instance_methods(false)

# creating an instance
greeter = Greeter.new("Pat")

# calling an instance
greeter.say_hi
greeter.say_bye

# class variables are sort-of hidden away, so you can't do this
greeter.@name

# check a class' responsible methods
greeter.respond_to?("name")
greeter.respond_to?("say_hi")
greeter.respond_to?("to_s")

# 'class.to_s'
# convert something to a string, was defined by default for every object.

# altering classes
# viewing or changing the value of a class' name.
# changes will be present in any new objects and even available in existing objects.
class Greeter
    attr_accessor :name
end
    # using 'attr_accessor' defined two new methods, getter and setter.
    # in this case,
    # 'name'  : get the value
    # 'name=' : set the value

# let's check out new methods
greeter.respond_to?("name")
greeter.respond_to?("name=")

# accessing a class' variable
greeter.name

# changing a class' variable
greeter.name="Andy"

# now,
greeter.say_hi