savedcmd_drivers/iio/light/veml6040.mod := printf '%s\n'   veml6040.o | awk '!x[$$0]++ { print("drivers/iio/light/"$$0) }' > drivers/iio/light/veml6040.mod
