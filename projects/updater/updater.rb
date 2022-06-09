# -*- coding: utf-8; mode: ruby -*-

require 'json'
require 'yaml'

PROGRAM_VERSION = "0.1.0"
PKGMAN = ["gem", "pip", "tlmgr"]


puts "\u{1F649} warming up...\n\n"

def prep_to_exit(exit_code = 1)
    puts "\n\u{1F648} cooling down..."
    exit exit_code
end

def puts_help(cmd = nil)
    puts "#{__FILE__}
version: #{PROGRAM_VERSION}\n\n"

    case cmd
    when nil
        puts "\t-h, --help\tprints this help text\n\n"
    end

    prep_to_exit 0
end

if ARGV.respond_to?("each")
    ARGV.each do |opt|
        case opt
        when "help"
            puts_help()
            prep_to_exit 1
        end
    end
else
    nil
end

if PKGMAN.respond_to?("each")
    PKGMAN.each do |man|
        puts "#{man}"
        system("#{man} --version")
    end
else
    puts "#{__FILE__}:#{__LINE__}: InternalError: 'PKGMAN' list is not iterable."
end

prep_to_exit()
