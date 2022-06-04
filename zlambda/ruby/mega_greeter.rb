class MegaGreeter
    attr_accessor :names

    def initialize(names = "World")
        @name = names
    end

    def say_hi
        if @name.nil?
            puts "..."
        elsif @name.respond_to?("each")
            @names.each do |name|
                puts "Hello #{name}!"
            end
        else
            puts "Hello #{@names}!"
        end
    end

    def say_bye
        if @names.nil?
            puts "..."
        elsif @names.respond_to?("join")
            puts "Goodbye #{@names.join(", ")}.  Come back soon!"
        else
            puts "Goodbye #{@names}."
        end
    end
end

if __FILE__ == $0
  mg = MegaGreeter.new
  mg.say_hi
  mg.say_bye

  # Change name to be "Zeke"
  mg.names = "Zeke"
  mg.say_hi
  mg.say_bye

  # Change the name to an array of names
  mg.names = ["Albert", "Brenda", "Charles",
              "Dave", "Engelbert"]
  mg.say_hi
  mg.say_bye

  # Change to nil
  mg.names = nil
  mg.say_hi
  mg.say_bye
end
