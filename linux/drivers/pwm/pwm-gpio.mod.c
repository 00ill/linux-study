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
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x79c88dda, "devm_pwmchip_alloc" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0xf112a60d, "gpiod_cansleep" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x940c3fbd, "__pwmchip_add" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-gpio");
MODULE_ALIAS("of:N*T*Cpwm-gpioC*");

MODULE_INFO(srcversion, "C48247778782BA2BB8768CE");
