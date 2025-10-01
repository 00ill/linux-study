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
	{ 0xba3e8f12, "led_trigger_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xdcb764ad, "memset" },
	{ 0x1f37fd64, "ethtool_params_from_link_mode" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x842cf66f, "__ethtool_get_link_ksettings" },
	{ 0xbb302169, "led_trigger_unregister" },
	{ 0x7ec8fd19, "led_set_brightness" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb98d1737, "dev_get_stats" },
	{ 0x226e19d0, "led_stop_software_blink" },
	{ 0x66f94f9c, "led_blink_set_oneshot" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1a6ab775, "init_net" },
	{ 0xf43f04b4, "dev_get_by_name" },
	{ 0x91525b12, "sysfs_update_group" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "65D3F1995AF46E62C57D2D9");
