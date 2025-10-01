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
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x10843d0a, "param_ops_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:tuner");

MODULE_INFO(srcversion, "8744E3EC7628C2C645B2837");
