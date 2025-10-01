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
	{ 0x4829a47e, "memcpy" },
	{ 0xec43380f, "pcm512x_remove" },
	{ 0x70a7e4b1, "pcm512x_probe" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xf0843038, "pcm512x_pm_ops" },
	{ 0x29f603f4, "pcm512x_regmap" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-pcm512x,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,pcm5121");
MODULE_ALIAS("of:N*T*Cti,pcm5121C*");
MODULE_ALIAS("of:N*T*Cti,pcm5122");
MODULE_ALIAS("of:N*T*Cti,pcm5122C*");
MODULE_ALIAS("of:N*T*Cti,pcm5141");
MODULE_ALIAS("of:N*T*Cti,pcm5141C*");
MODULE_ALIAS("of:N*T*Cti,pcm5142");
MODULE_ALIAS("of:N*T*Cti,pcm5142C*");
MODULE_ALIAS("of:N*T*Cti,pcm5242");
MODULE_ALIAS("of:N*T*Cti,pcm5242C*");
MODULE_ALIAS("of:N*T*Cti,tas5754");
MODULE_ALIAS("of:N*T*Cti,tas5754C*");
MODULE_ALIAS("of:N*T*Cti,tas5756");
MODULE_ALIAS("of:N*T*Cti,tas5756C*");
MODULE_ALIAS("i2c:pcm5121");
MODULE_ALIAS("i2c:pcm5122");
MODULE_ALIAS("i2c:pcm5141");
MODULE_ALIAS("i2c:pcm5142");
MODULE_ALIAS("i2c:pcm5242");
MODULE_ALIAS("i2c:tas5754");
MODULE_ALIAS("i2c:tas5756");

MODULE_INFO(srcversion, "B12C6F850A99E71F02CA794");
