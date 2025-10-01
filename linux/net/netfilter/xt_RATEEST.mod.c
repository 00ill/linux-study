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

KSYMTAB_FUNC(xt_rateest_lookup, "_gpl", "");
KSYMTAB_FUNC(xt_rateest_put, "_gpl", "");

SYMBOL_CRC(xt_rateest_lookup, 0x6d9dccf1, "_gpl");
SYMBOL_CRC(xt_rateest_put, 0x0e991717, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3e6760b4, "__do_once_done" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x5e9a01ce, "gen_new_estimator" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "BD9D2C82DBC8B6A0DDE3D50");
