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
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8d1a1cb6, "of_fwnode_ops" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7bb9b1, "device_get_child_node_count" },
	{ 0x9d9bbdee, "device_get_next_child_node" },
	{ 0xf6d37b88, "fwnode_property_read_u32_array" },
	{ 0x8b71853d, "led_init_default_state_get" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9550");
MODULE_ALIAS("of:N*T*Cnxp,pca9550C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9551");
MODULE_ALIAS("of:N*T*Cnxp,pca9551C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9552");
MODULE_ALIAS("of:N*T*Cnxp,pca9552C*");
MODULE_ALIAS("of:N*T*Cibm,pca9552");
MODULE_ALIAS("of:N*T*Cibm,pca9552C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9553");
MODULE_ALIAS("of:N*T*Cnxp,pca9553C*");
MODULE_ALIAS("i2c:pca9550");
MODULE_ALIAS("i2c:pca9551");
MODULE_ALIAS("i2c:pca9552");
MODULE_ALIAS("i2c:ibm-pca9552");
MODULE_ALIAS("i2c:pca9553");

MODULE_INFO(srcversion, "047B880B67AFE6FB3379367");
