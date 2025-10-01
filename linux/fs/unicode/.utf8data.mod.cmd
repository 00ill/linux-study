savedcmd_fs/unicode/utf8data.mod := printf '%s\n'   utf8data.o | awk '!x[$$0]++ { print("fs/unicode/"$$0) }' > fs/unicode/utf8data.mod
