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

KSYMTAB_FUNC(lowpan_register_netdevice, "", "");
KSYMTAB_FUNC(lowpan_register_netdev, "", "");
KSYMTAB_FUNC(lowpan_unregister_netdevice, "", "");
KSYMTAB_FUNC(lowpan_unregister_netdev, "", "");
KSYMTAB_FUNC(lowpan_header_decompress, "_gpl", "");
KSYMTAB_FUNC(lowpan_header_compress, "_gpl", "");
KSYMTAB_FUNC(lowpan_nhc_add, "", "");
KSYMTAB_FUNC(lowpan_nhc_del, "", "");

SYMBOL_CRC(lowpan_register_netdevice, 0xde75e9bb, "");
SYMBOL_CRC(lowpan_register_netdev, 0x80a1fcfa, "");
SYMBOL_CRC(lowpan_unregister_netdevice, 0x0596e056, "");
SYMBOL_CRC(lowpan_unregister_netdev, 0x7391c4a5, "");
SYMBOL_CRC(lowpan_header_decompress, 0x4afafda4, "_gpl");
SYMBOL_CRC(lowpan_header_compress, 0xb22d67bc, "_gpl");
SYMBOL_CRC(lowpan_nhc_add, 0xe4201e28, "");
SYMBOL_CRC(lowpan_nhc_del, 0xbe4ed3b7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x9b426340, "__ndisc_fill_addr_option" },
	{ 0xe5780672, "addrconf_add_linklocal" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xb343d173, "addrconf_prefix_rcv_add_addr" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x33b58322, "skb_push" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "6A3C656302D2A691CD82CF7");
