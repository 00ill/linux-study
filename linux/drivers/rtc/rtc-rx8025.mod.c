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
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x1f305853, "i2c_smbus_write_i2c_block_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x4805b066, "i2c_match_id" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x78804cc2, "rtc_add_group" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x669c413b, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:rx8035");

MODULE_INFO(srcversion, "0F76C042D87DC7AA6FF697C");
