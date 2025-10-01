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
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0x41cc93f6, "input_event" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xe94059dd, "i2c_smbus_write_word_data" },
	{ 0xda91c459, "input_setup_polling" },
	{ 0xf11817cb, "input_set_poll_interval" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tca6416-keys");
MODULE_ALIAS("i2c:tca6408-keys");

MODULE_INFO(srcversion, "464C4F6DE0BB83863BDC875");
