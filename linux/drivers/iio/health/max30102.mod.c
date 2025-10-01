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
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb357fc4e, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x9dd92e13, "__iio_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x2f4d7036, "iio_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x538351b9, "iio_device_claim_buffer_mode" },
	{ 0xfd87ccce, "iio_device_release_buffer_mode" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmaxim,max30101");
MODULE_ALIAS("of:N*T*Cmaxim,max30101C*");
MODULE_ALIAS("of:N*T*Cmaxim,max30102");
MODULE_ALIAS("of:N*T*Cmaxim,max30102C*");
MODULE_ALIAS("of:N*T*Cmaxim,max30105");
MODULE_ALIAS("of:N*T*Cmaxim,max30105C*");
MODULE_ALIAS("i2c:max30101");
MODULE_ALIAS("i2c:max30102");
MODULE_ALIAS("i2c:max30105");

MODULE_INFO(srcversion, "BC1D5EAC85FBCB3DCFDB79E");
