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
	{ 0xfd7f342e, "xt_register_matches" },
	{ 0xcd4a4bb3, "nf_sk_lookup_slow_v6" },
	{ 0x525928de, "sock_gen_put" },
	{ 0x5907e5ea, "xt_unregister_matches" },
	{ 0x97d992e8, "nf_defrag_ipv4_enable" },
	{ 0x29df7741, "nf_defrag_ipv6_enable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe4a7b2ec, "nf_defrag_ipv4_disable" },
	{ 0x6f25365e, "nf_defrag_ipv6_disable" },
	{ 0x4a2deada, "nf_sk_lookup_slow_v4" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_socket_ipv6,nf_defrag_ipv4,nf_defrag_ipv6,nf_socket_ipv4");


MODULE_INFO(srcversion, "793BA602317FFA00176D5E4");
