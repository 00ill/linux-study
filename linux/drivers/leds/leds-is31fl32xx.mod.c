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
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x4716832b, "of_get_next_available_child" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0x469438cc, "of_node_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:is31fl3236");
MODULE_ALIAS("i2c:is31fl3235");
MODULE_ALIAS("i2c:is31fl3218");
MODULE_ALIAS("i2c:sn3218");
MODULE_ALIAS("i2c:is31fl3216");
MODULE_ALIAS("i2c:sn3216");
MODULE_ALIAS("of:N*T*Cissi,is31fl3236");
MODULE_ALIAS("of:N*T*Cissi,is31fl3236C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3235");
MODULE_ALIAS("of:N*T*Cissi,is31fl3235C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3218");
MODULE_ALIAS("of:N*T*Cissi,is31fl3218C*");
MODULE_ALIAS("of:N*T*Csi-en,sn3218");
MODULE_ALIAS("of:N*T*Csi-en,sn3218C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3216");
MODULE_ALIAS("of:N*T*Cissi,is31fl3216C*");
MODULE_ALIAS("of:N*T*Csi-en,sn3216");
MODULE_ALIAS("of:N*T*Csi-en,sn3216C*");

MODULE_INFO(srcversion, "F0480747C2816B31B2CB8D2");
