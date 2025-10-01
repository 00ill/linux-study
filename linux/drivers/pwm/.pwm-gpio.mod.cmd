savedcmd_drivers/pwm/pwm-gpio.mod := printf '%s\n'   pwm-gpio.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-gpio.mod
