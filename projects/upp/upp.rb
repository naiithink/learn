# -*- coding: utf-8; mode: ruby; -*-

require 'json'
require 'signal'
require 'yaml'


PMGRS_FILE_BASENAME = "pmgrs.upp"
PMGRS_FILE_EXT = ["json", "yaml", "yml"]
pmgrs_file = nil

# Signals
Signal.trap(SIGINT) do
    $stderr.puts "Do you really want to quit?"
    gets.chomp
    if
end

class PMGRS_FILE
    def initialize
    end
end

# Open file
if !File.exist?(PMGRS_FILE_NAME)
    $stderr.puts "${PMGRS_FILE_NAME}: file not found."
    exit Errno::ENOENT::Errno
elsif !File.readable_real?(PMGRS_FILE_NAME)
    $stderr.puts "${PMGRS_FILE_NAME}: unable to read file."
    exit Errno::EACCES::Errno
else
    pmgrs_file = File.open(PMGRS_FILE_NAME, "r")
    
end
