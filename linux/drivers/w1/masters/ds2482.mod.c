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
	{ 0xa661db9f, "w1_remove_master_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0xaff77e28, "i2c_smbus_read_byte" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x139e8b1f, "w1_add_master_device" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("i2c:ds2482");
MODULE_ALIAS("i2c:ds2484");

MODULE_INFO(srcversion, "CB4777049EC99012FD20235");
