## DEFAULT
# function prompt {
#     $(if (Test-Path variable:/PSDebugContext) { '[DBG]: ' }
#       else { '' }) + 'PS ' + $(Get-Location) +
#         $(if ($NestedPromptLevel -ge 1) { '>>' }) + '> '
# }

function prompt {
    $(if (!(Test-Path (Get-Location))) { throw "Invalid script command output" })

    [String]$PrintPath = Get-Location

    $(if (($PrintPath -eq $env:USERPROFILE) -and ($env:USERPROFILE -eq ($env:HOMEDRIVE + $env:HOMEPATH))) { $PrintPath = '~' }
      else { $PrintPath = (Split-Path -Path (Get-Location) -Leaf) })

    $(if (Test-Path variable:/PSDebugContext) { '[DBG]: ' }
      else { '' }) + 'PS [' + (($env:USERNAME) + '@' + ($env:COMPUTERNAME) + '] [' + $PrintPath + ']') +
        $(if ($NestedPromptLevel -ge 1) { '>>' }) + '> '
}
