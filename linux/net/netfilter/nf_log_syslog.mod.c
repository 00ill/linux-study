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
	{ 0x9f09e91e, "nf_log_register" },
	{ 0x36b39609, "nf_log_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xd3a55bcc, "nf_log_unset" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x771f0565, "init_user_ns" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0xe4151e2c, "from_kgid_munged" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x3018f386, "nf_log_set" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a6ab775, "init_net" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "582CEC5BF1E45F8A0BFB75F");
