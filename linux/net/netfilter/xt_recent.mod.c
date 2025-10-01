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
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb3ba1a7a, "__seq_open_private" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xfd7f342e, "xt_register_matches" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x5907e5ea, "xt_unregister_matches" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb105c628, "proc_mkdir" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3e6760b4, "__do_once_done" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xe914e41e, "strcpy" },
	{ 0x771f0565, "init_user_ns" },
	{ 0x8d732959, "make_kuid" },
	{ 0x796c3d7, "make_kgid" },
	{ 0x906bb227, "proc_create_data" },
	{ 0x8ec23266, "proc_set_user" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4841bdee, "strnchr" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x661256ad, "seq_read" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xbf677e7a, "seq_release_private" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "71F9DE8866E8C26FDCD683E");
