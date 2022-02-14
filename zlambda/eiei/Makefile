run : make
    CONTENTS=$(eval "ls cases | wc -w")
    for i in $(CONTENTS[@]);
    do
        ./lab < cases/$(CONTENTS[$i])
    done;

make :
    clang++ lab.cpp -o lab