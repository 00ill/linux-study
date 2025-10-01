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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd71fb816, "devm_free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x1f305853, "i2c_smbus_write_i2c_block_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1374");
MODULE_ALIAS("of:N*T*Cdallas,ds1374C*");
MODULE_ALIAS("i2c:ds1374");

MODULE_INFO(srcversion, "DD7A5E72F7422DEBC351A6A");
