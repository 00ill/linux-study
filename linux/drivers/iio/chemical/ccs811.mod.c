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
	{ 0x2f4d7036, "iio_device_unregister" },
	{ 0xd579a247, "iio_triggered_buffer_cleanup" },
	{ 0x5403b271, "iio_trigger_unregister" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x8ab34ed9, "iio_trigger_poll" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x21b473b6, "iio_device_id" },
	{ 0x4428253c, "__devm_iio_trigger_alloc" },
	{ 0xbff97efa, "iio_trigger_register" },
	{ 0x1f305853, "i2c_smbus_write_i2c_block_data" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xd8940511, "__module_get" },
	{ 0xab10f750, "iio_triggered_buffer_setup_ext" },
	{ 0x9dd92e13, "__iio_device_register" },
	{ 0x56470118, "__warn_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cams,ccs811");
MODULE_ALIAS("of:N*T*Cams,ccs811C*");
MODULE_ALIAS("i2c:ccs811");

MODULE_INFO(srcversion, "9D859C91B1B9706200806EE");
