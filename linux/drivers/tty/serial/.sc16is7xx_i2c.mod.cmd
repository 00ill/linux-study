savedcmd_drivers/tty/serial/sc16is7xx_i2c.mod := printf '%s\n'   sc16is7xx_i2c.o | awk '!x[$$0]++ { print("drivers/tty/serial/"$$0) }' > drivers/tty/serial/sc16is7xx_i2c.mod
