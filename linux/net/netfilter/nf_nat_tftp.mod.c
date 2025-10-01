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
	{ 0x9dcd177, "nf_nat_tftp_hook" },
	{ 0xc29ef887, "nf_nat_helper_register" },
	{ 0x224faff1, "nf_nat_helper_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc4373c03, "nf_nat_follow_master" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x746ec9f7, "nf_ct_helper_log" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_tftp,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "4B2EA902DCDBE2B73C4C677");
