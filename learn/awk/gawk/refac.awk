BEGIN {}

NR<=2 && /./ {
    getLineNoDiff()
}

{ linenod = $1 }

END {}

function getLineNoDiff() {
    if ($1 ~ [[:alnum:]]) {
        
    } else {
        return 0
    }
}