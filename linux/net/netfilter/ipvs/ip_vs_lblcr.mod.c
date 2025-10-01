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
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x40f8a274, "register_ip_vs_scheduler" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x1a6ab775, "init_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x771f0565, "init_user_ns" },
	{ 0x7861b279, "register_net_sysctl_sz" },
	{ 0x6d578e07, "unregister_ip_vs_scheduler" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2496af9a, "ip_vs_scheduler_err" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "24E8593FC86A5FFFF61F8D9");
