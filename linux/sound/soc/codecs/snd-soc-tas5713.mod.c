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
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x122c3a7e, "_printk" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xc1e6e422, "snd_soc_unregister_component" },
	{ 0x669c413b, "_dev_err" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x666f5d9, "snd_soc_register_component" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713C*");

MODULE_INFO(srcversion, "B7018AFCE143A417DA922DC");
