BEGIN {}

{ uname = tolower($1) }

{
    switch (uname) {
        case /darwin/:
            print "Mac"
            break
        case /linux/:
            print "update-alternatives"
            break
        default:
            print "Unknown platform" > "/dev/stderr"
            exit 1
    }
}

END {}