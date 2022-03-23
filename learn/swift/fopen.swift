import Foundation

let args = CommandLine.arguments
let dir = NSHomeDirectory()
var pwd = FileManager.default.currentDirectoryPath
var ls = try FileManager.default.contentsOfDirectory(atPath: pwd)
var file: String

if args.count > 1 {
    file = args[1]
}

print(pwd)
print(ls)