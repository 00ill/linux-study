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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x669c413b, "_dev_err" },
	{ 0x7d6ad7b1, "pwmchip_remove" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x79c88dda, "devm_pwmchip_alloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x940c3fbd, "__pwmchip_add" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwm");
MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwmC*");
MODULE_ALIAS("i2c:pca9685");

MODULE_INFO(srcversion, "9D13C6BE264E0F5CACB11C7");
