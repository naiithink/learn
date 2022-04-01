#if os(macOS) || os(iOS) || os(tvOS) || os(watchOS)
import Darwin
#elseif os(Linux)
import Glibc
#endif

import Foundation

let args = CommandLine.arguments
let dir = NSHomeDirectory()
var pwd = FileManager.default.currentDirectoryPath
var ls = try FileManager.default.contentsOfDirectory(atPath: pwd)
var fileName: String
var filePath: String
// var fileContents = open()

if args.count > 1 {
    fileName = args[1]
} else {
    fileName = ""
}

filePath = pwd + fileName

print(filePath)