#!/usr/bin/env awk

{
    if (length($0) > max)
        max = length($0)
}

END {
    print max
}