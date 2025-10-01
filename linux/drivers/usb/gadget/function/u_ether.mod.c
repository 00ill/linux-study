#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(gether_setup_name, "_gpl", "");
KSYMTAB_FUNC(gether_setup_name_default, "_gpl", "");
KSYMTAB_FUNC(gether_register_netdev, "_gpl", "");
KSYMTAB_FUNC(gether_set_gadget, "_gpl", "");
KSYMTAB_FUNC(gether_set_dev_addr, "_gpl", "");
KSYMTAB_FUNC(gether_get_dev_addr, "_gpl", "");
KSYMTAB_FUNC(gether_set_host_addr, "_gpl", "");
KSYMTAB_FUNC(gether_get_host_addr, "_gpl", "");
KSYMTAB_FUNC(gether_get_host_addr_cdc, "_gpl", "");
KSYMTAB_FUNC(gether_get_host_addr_u8, "_gpl", "");
KSYMTAB_FUNC(gether_set_qmult, "_gpl", "");
KSYMTAB_FUNC(gether_get_qmult, "_gpl", "");
KSYMTAB_FUNC(gether_get_ifname, "_gpl", "");
KSYMTAB_FUNC(gether_set_ifname, "_gpl", "");
KSYMTAB_FUNC(gether_suspend, "_gpl", "");
KSYMTAB_FUNC(gether_resume, "_gpl", "");
KSYMTAB_FUNC(gether_cleanup, "_gpl", "");
KSYMTAB_FUNC(gether_connect, "_gpl", "");
KSYMTAB_FUNC(gether_disconnect, "_gpl", "");

SYMBOL_CRC(gether_setup_name, 0x80c2921e, "_gpl");
SYMBOL_CRC(gether_setup_name_default, 0x3a777c62, "_gpl");
SYMBOL_CRC(gether_register_netdev, 0x09fbc503, "_gpl");
SYMBOL_CRC(gether_set_gadget, 0xa0ff66b2, "_gpl");
SYMBOL_CRC(gether_set_dev_addr, 0x8b77bcf8, "_gpl");
SYMBOL_CRC(gether_get_dev_addr, 0x7579a216, "_gpl");
SYMBOL_CRC(gether_set_host_addr, 0x3bd61cfd, "_gpl");
SYMBOL_CRC(gether_get_host_addr, 0x7ece9457, "_gpl");
SYMBOL_CRC(gether_get_host_addr_cdc, 0x45dba26c, "_gpl");
SYMBOL_CRC(gether_get_host_addr_u8, 0x828fd762, "_gpl");
SYMBOL_CRC(gether_set_qmult, 0xc62d4142, "_gpl");
SYMBOL_CRC(gether_get_qmult, 0x0f8386df, "_gpl");
SYMBOL_CRC(gether_get_ifname, 0x60032353, "_gpl");
SYMBOL_CRC(gether_set_ifname, 0x2ee0fb71, "_gpl");
SYMBOL_CRC(gether_suspend, 0x5162f404, "_gpl");
SYMBOL_CRC(gether_resume, 0x9950c1a1, "_gpl");
SYMBOL_CRC(gether_cleanup, 0x8878cfa6, "_gpl");
SYMBOL_CRC(gether_connect, 0xa16bbe76, "_gpl");
SYMBOL_CRC(gether_disconnect, 0x80d59396, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656e4a6e, "snprintf" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x11089ac7, "_ctype" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x96848186, "scnprintf" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x669c413b, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x50d00458, "netif_rx" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xc1f00e75, "usb_func_wakeup" },
	{ 0xcd09bb89, "usb_gadget_wakeup" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "F05D924038C656E4F6E6FBB");
