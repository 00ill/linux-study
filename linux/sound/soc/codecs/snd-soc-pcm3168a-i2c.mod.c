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
	{ 0x111bf83a, "pcm3168a_regmap" },
	{ 0xfc8d2787, "pcm3168a_pm_ops" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xc0e259b1, "pcm3168a_remove" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x4e8e6bc2, "pcm3168a_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-pcm3168a,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,pcm3168a");
MODULE_ALIAS("of:N*T*Cti,pcm3168aC*");
MODULE_ALIAS("i2c:pcm3168a");

MODULE_INFO(srcversion, "CFF978796645AAC9EBBEC3C");
