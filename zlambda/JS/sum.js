const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

var ps1 = process.env.PS1;
var ps2 = process.env.PS2;
var pwd = __dirname;
var path = process.env.PATH;
const login_name = process.env.LOGNAME;
var recent_exit = null;

while (true)
{
    var user_command = prompt("\033[0;96m", login_name, "@", "\033[0;92m", pwd, " ", "\033[0;39m", ps1);

    if (!user_command)
        continue;
    else
        /* ขี้เกียจละครับ */
        throw "exit";
}