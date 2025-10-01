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
	{ 0x53c9fc8a, "ip6_tnl_encap_add_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3759e062, "ip6_tnl_encap_del_ops" },
	{ 0x33b58322, "skb_push" },
	{ 0xcd27abad, "udp6_set_csum" },
	{ 0xa04b2526, "__gue_build_header" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe1fe813a, "__fou_build_header" },
	{ 0x715743ac, "inet6_protos" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x1757d1a4, "fou_encap_hlen" },
	{ 0xf13914b3, "gue_encap_hlen" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip6_tunnel,fou");


MODULE_INFO(srcversion, "4B51D0FA5058C78E6E0CB78");
