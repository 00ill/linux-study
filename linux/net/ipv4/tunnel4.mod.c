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

KSYMTAB_FUNC(xfrm4_tunnel_register, "", "");
KSYMTAB_FUNC(xfrm4_tunnel_deregister, "", "");

SYMBOL_CRC(xfrm4_tunnel_register, 0xd50c1f64, "");
SYMBOL_CRC(xfrm4_tunnel_deregister, 0xe3f7e2ea, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x13f15bb4, "inet_add_protocol" },
	{ 0x77381339, "xfrm_input_register_afinfo" },
	{ 0x67a911a9, "inet_del_protocol" },
	{ 0x122c3a7e, "_printk" },
	{ 0x80e970df, "__icmp_send" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x6cc5f22, "xfrm_input_unregister_afinfo" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4D4D11377E687CC3FC084CB");
