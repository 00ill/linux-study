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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0xab10f750, "iio_triggered_buffer_setup_ext" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9dd92e13, "__iio_device_register" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd579a247, "iio_triggered_buffer_cleanup" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xebf2304b, "iio_push_event" },
	{ 0xe94059dd, "i2c_smbus_write_word_data" },
	{ 0x96848186, "scnprintf" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0x2f4d7036, "iio_device_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0x37086b9, "iio_read_const_attr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:tcs3472");

MODULE_INFO(srcversion, "06FA067A98836B6079A63C0");
