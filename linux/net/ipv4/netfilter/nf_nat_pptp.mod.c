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
	{ 0xedee54bf, "nf_nat_pptp_hook" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdcb764ad, "memset" },
	{ 0x3fba28e1, "nf_ct_nat_ext_add" },
	{ 0x521b2f16, "nf_ct_expect_find_get" },
	{ 0x7212cd50, "nf_ct_unexpect_related" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0x6ff996e1, "nf_nat_setup_info" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf2b2b87, "__nf_nat_mangle_tcp_packet" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "C7C38083A615C69B600042D");
