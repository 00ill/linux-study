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
	{ 0x122c3a7e, "_printk" },
	{ 0xb8f1ac52, "nf_nat_irc_hook" },
	{ 0xc29ef887, "nf_nat_helper_register" },
	{ 0xc4373c03, "nf_nat_follow_master" },
	{ 0x9a13babd, "nf_nat_exp_find_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdf2b2b87, "__nf_nat_mangle_tcp_packet" },
	{ 0x746ec9f7, "nf_ct_helper_log" },
	{ 0x7212cd50, "nf_ct_unexpect_related" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x224faff1, "nf_nat_helper_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_irc,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "F3AC846BB6174B19BC68B06");
