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
	{ 0xb832fe45, "fb_sys_read" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xcd458c71, "backlight_device_unregister" },
	{ 0x4cc2fbd2, "unregister_framebuffer" },
	{ 0xd877b3e9, "pwm_put" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xc7271929, "fb_deferred_io_cleanup" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x6c736d6, "__free_pages" },
	{ 0xd044c193, "framebuffer_release" },
	{ 0x18337c70, "pwm_apply_might_sleep" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa2c8ab97, "sys_imageblit" },
	{ 0xa548b29e, "sys_copyarea" },
	{ 0x6dcebf17, "sys_fillrect" },
	{ 0x43650a37, "fb_sys_write" },
	{ 0x7a9d63d0, "framebuffer_alloc" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x606a79da, "device_property_read_u8_array" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xb3058b55, "fb_deferred_io_init" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xf7b9149f, "pwm_get" },
	{ 0x433cb9ab, "backlight_device_register" },
	{ 0xb5d42d3e, "register_framebuffer" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xcad93fec, "fb_deferred_io_mmap" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");

MODULE_INFO(srcversion, "7229E3C9E419D1A3704E5ED");
