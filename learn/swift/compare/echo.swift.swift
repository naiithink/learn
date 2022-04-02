import Foundation

let argv = CommandLine.arguments

if argv.count == 1 {
    exit(1)
}

print(argv[1])

exit(0)