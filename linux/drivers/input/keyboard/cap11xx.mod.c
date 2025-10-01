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
	{ 0x9ba6295b, "regmap_read" },
	{ 0x41cc93f6, "input_event" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xd7dbf556, "of_property_read_u32_index" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x469438cc, "of_node_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:cap1106");
MODULE_ALIAS("i2c:cap1126");
MODULE_ALIAS("i2c:cap1188");
MODULE_ALIAS("i2c:cap1203");
MODULE_ALIAS("i2c:cap1206");
MODULE_ALIAS("i2c:cap1293");
MODULE_ALIAS("i2c:cap1298");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1203");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1203C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1206");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1206C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1293");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1293C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1298");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1298C*");

MODULE_INFO(srcversion, "041E8EA607263A3959A3CC6");
