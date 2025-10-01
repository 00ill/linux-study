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
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0x41cc93f6, "input_event" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa3f77ef, "matrix_keypad_parse_properties" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x218c170f, "matrix_keypad_build_keymap" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cti,tca8418");
MODULE_ALIAS("of:N*T*Cti,tca8418C*");
MODULE_ALIAS("i2c:tca8418");

MODULE_INFO(srcversion, "EB5171855FB45C148376BDE");
