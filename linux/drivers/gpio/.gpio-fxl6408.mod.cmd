savedcmd_drivers/gpio/gpio-fxl6408.mod := printf '%s\n'   gpio-fxl6408.o | awk '!x[$$0]++ { print("drivers/gpio/"$$0) }' > drivers/gpio/gpio-fxl6408.mod
