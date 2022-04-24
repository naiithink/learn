#!/usr/bin/ruby

# trying to run '04_MegaGreeter.rb' should get the result:
# $ ruby ri20min.rb 
# Hello World!
# Goodbye World.  Come back soon!
# Hello Zeke!
# Goodbye Zeke.  Come back soon!
# Hello Albert!
# Hello Brenda!
# Hello Charles!
# Hello Dave!
# Hello Engelbert!
# Goodbye Albert, Brenda, Charles, Dave, Engelbert.  Come back soon!
# ...
# ...

# lets take a deeper look...

class MegaGreeter
    attr_accessor :names

    # create the object
    def initialize(names = "World")
        @names = names
    end

    # say hi to everybody
    def say_hi
        # no point greeting nobody, right?
        if @names.nil?
            puts "..."
        # if '@name' responds to 'each', it is an iterable object
        elsif @names.respond_to?("each")
            # @names is a list of some kind, iterate!
            # 'each' is a method that accepts a block of code
            # then run that block of code for every element in a list.
            # the bit between 'do' and 'end' is just such a block.
            # a block is like an anonymous function or 'lambda'.
            # the variable |between pipe| is the parameter for this block.
            @names.each do |name|
                puts "Hello #{name}!"
            end
        # if '@name' is anything else,
        # just let it get turned into a string automatically
        # and do the default greeting
        else
            puts "Hello #{@names}!"
        end
    end

    # say bye to everybody
    def say_bye
        if @names.nil?
            puts "..."
        elsif @names.respond_to?("join")
            # Join the list elements with commas
            puts "Goodbye #{@names.join(", ")}.  Come back soon!"
        else
            puts "Goodbye #{@names}.  Come back soon!"
        end
    end
