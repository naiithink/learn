# -*- coding: utf-8; mode: ruby; -*-

require 'json'


OS = Gem::Platform.local.os
HMM_FILE_NAME = "hmm.json"

if File.exist? HMM_FILE_NAME
HMM_FILE = File.open HMM_FILE_NAME


def prep_exit(exit_code = 0)
    puts "\u{1F648} cooling down..."
    exit exit_code
end


puts "\u{1F649} warming up..."


prep_exit(0)
