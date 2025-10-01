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
	{ 0xe94059dd, "i2c_smbus_write_word_data" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0x37086b9, "iio_read_const_attr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("acpi*:TXNW1010:*");
MODULE_ALIAS("of:N*T*Cti,hdc1000");
MODULE_ALIAS("of:N*T*Cti,hdc1000C*");
MODULE_ALIAS("of:N*T*Cti,hdc1008");
MODULE_ALIAS("of:N*T*Cti,hdc1008C*");
MODULE_ALIAS("of:N*T*Cti,hdc1010");
MODULE_ALIAS("of:N*T*Cti,hdc1010C*");
MODULE_ALIAS("of:N*T*Cti,hdc1050");
MODULE_ALIAS("of:N*T*Cti,hdc1050C*");
MODULE_ALIAS("of:N*T*Cti,hdc1080");
MODULE_ALIAS("of:N*T*Cti,hdc1080C*");
MODULE_ALIAS("i2c:hdc100x");
MODULE_ALIAS("i2c:hdc1000");
MODULE_ALIAS("i2c:hdc1008");
MODULE_ALIAS("i2c:hdc1010");
MODULE_ALIAS("i2c:hdc1050");
MODULE_ALIAS("i2c:hdc1080");

MODULE_INFO(srcversion, "41F32D7013E4DCDEEFE2B8C");
