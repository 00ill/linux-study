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
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x5b9cb702, "ip_set_put_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4eb7bf9e, "ip_set_get_extensions" },
	{ 0x9dfd6235, "ip_set_get_ip6_port" },
	{ 0x203d7cce, "ip_set_get_ip4_port" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1c5e4bad, "ip_set_type_unregister" },
	{ 0x3d8cfa4e, "ip_set_elem_len" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x1ea0c3a9, "ip_set_match_extensions" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x115a0beb, "ip_set_extensions" },
	{ 0x8cb8ed94, "ip_set_init_comment" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc3bc94ff, "ip_set_put_extensions" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "C44DD83AD3301B5BED28F04");
