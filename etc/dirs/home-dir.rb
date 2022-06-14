# -*- coding: utf-8; mode: ruby; -*-

require 'pp'
require 'psych'

scheme = Psych.safe_load_file("home-dir.yaml")
# pp scheme
scheme.each_pair do |item| # |key, value|
    if scheme.value?(item)
        puts item
    elsif scheme.key?(item)
        puts item
    else
        puts "else:\t#{item}"
    end
end
