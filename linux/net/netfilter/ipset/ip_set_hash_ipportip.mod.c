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
	{ 0x636dde53, "ip_set_type_register" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x5b9cb702, "ip_set_put_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9dfd6235, "ip_set_get_ip6_port" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x4eb7bf9e, "ip_set_get_extensions" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0x203d7cce, "ip_set_get_ip4_port" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1c5e4bad, "ip_set_type_unregister" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0x115a0beb, "ip_set_extensions" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x3d8cfa4e, "ip_set_elem_len" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc3bc94ff, "ip_set_put_extensions" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1ea0c3a9, "ip_set_match_extensions" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8cb8ed94, "ip_set_init_comment" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "C5603C50EA065F3FF34BF01");
