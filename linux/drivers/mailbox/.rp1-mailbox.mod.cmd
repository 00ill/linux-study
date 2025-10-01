savedcmd_drivers/mailbox/rp1-mailbox.mod := printf '%s\n'   rp1-mailbox.o | awk '!x[$$0]++ { print("drivers/mailbox/"$$0) }' > drivers/mailbox/rp1-mailbox.mod
