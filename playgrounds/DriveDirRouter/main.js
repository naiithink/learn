// 2021-12-07

var now = new Date();
var currentTimezone = Session.getScriptTimeZone();
var formattedDate = Utilities.formatDate(now, currentTimezone, "yyyy-MM-dd, HH:mm:ss");
var rootDir = DriveApp.getRootFolder();
var rootDirID = rootDir.getId();
var manifestDirSearchResult = rootDir.getFoldersByName(".appsscript");

// test
var apscriptDir = rootDir.searchFolders('title contains ".appsscript"').next;
var apscriptDirId = apscriptDir.getId();
console.log(apscriptDir.getName());

class files2Move {
  constructor(moveMeDir, mySubmission, reveived) {
    this.moveMeDir;
  }
}

console.log(formattedDate);
console.log(rootDirID);

if (!manifestDirSearchResult) {
  var manifestDirID = manifestDirSearchResult(0).getId;
}
else {
  GmailApp.sendEmail( "potsawattkw@gmail.com",
                      "Drive Dir Router: Manifest File Not Found.",
                      "On " + formattedDate + "\n" +
                      "Files: " );
}

rootDir.createFolder("hello, world");
console.log("Done.");

function mvFiles() {
  
}
