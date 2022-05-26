#!/usr/bin/env bash
# -*- coding: utf-8; mode: sh-script -*-

WD=$(pwd)
GITCONFIG_LC_DIR='.git'
GITCONFIG_LC_FILE="${GITCONFIG_LC_DIR}/config"

function helpMe() {
    printf "Usage:\n\
  -h | --help | --usage        show this help text\n\
  --devcontainer               configure devcontainer settings\n" 1>&2
}

while [[ $# -gt 0 ]]; do
    case $1 in
        -h | --help | --usage)
            helpMe
            exit 0
            ;;
        --devcontainer)
            # git config --local oh-my-zsh.hide-info 1
            echo "devcon"
            # devcont()
            break
            ;;
        *)
            helpMe
            exit 1
            ;;
    esac
done

exit 0

git config --local commit.template .gitmessage
git config --local filter.indentTab.smudge "unexpand -t 4"
git config --local filter.indentTab.clean "expand -t 4"

# Core text editor
PLATFORM=$(uname -s | awk -f '.workspaceConfig/getGitConfig.awk')
echo $PLATFORM

# devcontainer
function devcont() {}