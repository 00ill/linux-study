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
	{ 0xb229ddc1, "wm8804_pm" },
	{ 0x87cc5b89, "wm8804_remove" },
	{ 0x160249c4, "wm8804_regmap_config" },
	{ 0xa20c600e, "wm8804_probe" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-wm8804,regmap-i2c");

MODULE_ALIAS("of:N*T*Cwlf,wm8804");
MODULE_ALIAS("of:N*T*Cwlf,wm8804C*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "9C3633782F91BA588203012");
