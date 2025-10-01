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
	{ 0xcc0983c6, "regmap_write" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cjedec,jc-42.4-temp");
MODULE_ALIAS("of:N*T*Cjedec,jc-42.4-tempC*");
MODULE_ALIAS("i2c:jc42");

MODULE_INFO(srcversion, "3B6F59C56E16A3B4A66F934");
