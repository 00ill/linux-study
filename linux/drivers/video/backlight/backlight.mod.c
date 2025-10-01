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

KSYMTAB_FUNC(backlight_device_set_brightness, "", "");
KSYMTAB_FUNC(backlight_force_update, "", "");
KSYMTAB_FUNC(backlight_device_register, "", "");
KSYMTAB_FUNC(backlight_device_get_by_type, "", "");
KSYMTAB_FUNC(backlight_device_get_by_name, "", "");
KSYMTAB_FUNC(backlight_device_unregister, "", "");
KSYMTAB_FUNC(backlight_register_notifier, "", "");
KSYMTAB_FUNC(backlight_unregister_notifier, "", "");
KSYMTAB_FUNC(devm_backlight_device_register, "", "");
KSYMTAB_FUNC(devm_backlight_device_unregister, "", "");
KSYMTAB_FUNC(backlight_set_display_name, "", "");
KSYMTAB_FUNC(of_find_backlight_by_node, "", "");
KSYMTAB_FUNC(devm_of_find_backlight, "", "");

SYMBOL_CRC(backlight_device_set_brightness, 0x71e28418, "");
SYMBOL_CRC(backlight_force_update, 0x927d2e03, "");
SYMBOL_CRC(backlight_device_register, 0x433cb9ab, "");
SYMBOL_CRC(backlight_device_get_by_type, 0x1854b1db, "");
SYMBOL_CRC(backlight_device_get_by_name, 0x6d79d0bc, "");
SYMBOL_CRC(backlight_device_unregister, 0xcd458c71, "");
SYMBOL_CRC(backlight_register_notifier, 0xdc512134, "");
SYMBOL_CRC(backlight_unregister_notifier, 0x9939eba0, "");
SYMBOL_CRC(devm_backlight_device_register, 0x9716458e, "");
SYMBOL_CRC(devm_backlight_device_unregister, 0xb6697f56, "");
SYMBOL_CRC(backlight_set_display_name, 0x2ccaaf9c, "");
SYMBOL_CRC(of_find_backlight_by_node, 0xd36b7cfd, "");
SYMBOL_CRC(devm_of_find_backlight, 0xa0f34315, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9f37e570, "kobject_uevent_env" },
	{ 0x304e7bbf, "sysfs_notify" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6fb37fe8, "device_match_name" },
	{ 0xcf5fbd79, "class_find_device" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa42d469b, "class_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7143a676, "class_unregister" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xb12cbacb, "fb_unregister_client" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0xc86c73db, "devres_release" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x28b118b6, "device_register" },
	{ 0x80d68d3e, "fb_register_client" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xde5315ca, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x469438cc, "of_node_put" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9baf18af, "fb_bl_device" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD4D227968A911E8822A73F");
