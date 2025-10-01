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
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x2b59fb76, "hid_hw_output_report" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001294p00001320");
MODULE_ALIAS("hid:b0003g*v00001D34p00000004");
MODULE_ALIAS("hid:b0003g*v00001D34p0000000A");
MODULE_ALIAS("hid:b0003g*v000027B8p000001ED");
MODULE_ALIAS("hid:b0003g*v00000FC5p0000B080");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F372");

MODULE_INFO(srcversion, "DD3C66648E25F3B93CC563A");
