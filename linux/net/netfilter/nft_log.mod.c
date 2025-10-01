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
	{ 0x5b221cd, "nft_register_expr" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xb20a946e, "nft_request_module" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0xc53d42bd, "nf_log_packet" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x108392f6, "audit_log_start" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "9207FE3A69BB167DC45B9C6");
