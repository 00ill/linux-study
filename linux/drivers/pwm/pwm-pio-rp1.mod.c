#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xb103a745, "rp1_pio_close" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xb478565a, "rp1_pio_add_program" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2f64a4f6, "rp1_pio_gpio_init" },
	{ 0xf3280aea, "rp1_pio_gpio_set_function" },
	{ 0xba80b828, "rp1_pio_set_error" },
	{ 0xe73f23fd, "rp1_pio_sm_set_pindirs" },
	{ 0xa426d5b4, "rp1_pio_sm_init" },
	{ 0x79c88dda, "devm_pwmchip_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0x469438cc, "of_node_put" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x29925ff9, "rp1_pio_open" },
	{ 0x2048a782, "rp1_pio_sm_claim" },
	{ 0x6ba0c125, "__devm_pwmchip_add" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcb1a1a, "rp1_pio_sm_set_enabled" },
	{ 0xf9eeca06, "rp1_pio_sm_put" },
	{ 0x78684f51, "rp1_pio_sm_exec" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x23fdeb26, "rp1_pio_gpio_set_outover" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rp1-pio");

MODULE_ALIAS("of:N*T*Craspberrypi,pwm-pio-rp1");
MODULE_ALIAS("of:N*T*Craspberrypi,pwm-pio-rp1C*");

MODULE_INFO(srcversion, "AAFED1B8B98EB8B6E3B6C1C");
