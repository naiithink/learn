# NR    : number of records of the whole process.
# FNR   : number of records of a single file, reset to 0 when a new file is started.
# RS    : record separator
# RT    : record terminator
            When RS is a regular expression, RT contains the actual input text that matched the regular expression.

# NF    : number of fields in the current record.

BEGIN { RS = "u" }

{
    # sub(/a+/, "AA");
    print $0
}

END {}