BEGIN { eiei("hello") }

function eiei(str) {
    print(str)
    print("world")
    while (getline f <"mail-list" > 0) {
        print $2
    }
}