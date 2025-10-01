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

KSYMTAB_FUNC(rndis_borrow_net, "_gpl", "");
KSYMTAB_FUNC(rndis_signal_connect, "_gpl", "");
KSYMTAB_FUNC(rndis_signal_disconnect, "_gpl", "");
KSYMTAB_FUNC(rndis_uninit, "_gpl", "");
KSYMTAB_FUNC(rndis_set_host_mac, "_gpl", "");
KSYMTAB_FUNC(rndis_msg_parser, "_gpl", "");
KSYMTAB_FUNC(rndis_register, "_gpl", "");
KSYMTAB_FUNC(rndis_deregister, "_gpl", "");
KSYMTAB_FUNC(rndis_set_param_dev, "_gpl", "");
KSYMTAB_FUNC(rndis_set_param_vendor, "_gpl", "");
KSYMTAB_FUNC(rndis_set_param_medium, "_gpl", "");
KSYMTAB_FUNC(rndis_add_hdr, "_gpl", "");
KSYMTAB_FUNC(rndis_free_response, "_gpl", "");
KSYMTAB_FUNC(rndis_get_next_response, "_gpl", "");
KSYMTAB_FUNC(rndis_rm_hdr, "_gpl", "");

SYMBOL_CRC(rndis_borrow_net, 0x87fd9a9e, "_gpl");
SYMBOL_CRC(rndis_signal_connect, 0xce13fc8a, "_gpl");
SYMBOL_CRC(rndis_signal_disconnect, 0xf7bd7e5a, "_gpl");
SYMBOL_CRC(rndis_uninit, 0xc41d361a, "_gpl");
SYMBOL_CRC(rndis_set_host_mac, 0xcbc2feb4, "_gpl");
SYMBOL_CRC(rndis_msg_parser, 0x1fceeab9, "_gpl");
SYMBOL_CRC(rndis_register, 0xe16b1aae, "_gpl");
SYMBOL_CRC(rndis_deregister, 0x583091b4, "_gpl");
SYMBOL_CRC(rndis_set_param_dev, 0x1bcf449e, "_gpl");
SYMBOL_CRC(rndis_set_param_vendor, 0xb8217aeb, "_gpl");
SYMBOL_CRC(rndis_set_param_medium, 0xa1e033df, "_gpl");
SYMBOL_CRC(rndis_add_hdr, 0xef12f37d, "_gpl");
SYMBOL_CRC(rndis_free_response, 0x1457ca97, "_gpl");
SYMBOL_CRC(rndis_get_next_response, 0x618a87ad, "_gpl");
SYMBOL_CRC(rndis_rm_hdr, 0xf7240177, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xb98d1737, "dev_get_stats" },
	{ 0xdaa5d4cc, "usb_os_desc_prepare_interf_dir" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x8bf701a4, "usb_interface_id" },
	{ 0x72516513, "usb_assign_descriptors" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x80d59396, "gether_disconnect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0x35e071f4, "config_ep_by_speed" },
	{ 0x8b77bcf8, "gether_set_dev_addr" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9fbc503, "gether_register_netdev" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xf9673004, "usb_function_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x828fd762, "gether_get_host_addr_u8" },
	{ 0xc62d4142, "gether_set_qmult" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x7ece9457, "gether_get_host_addr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0xa0ff66b2, "gether_set_gadget" },
	{ 0xffb7c514, "ida_free" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x6f3f2011, "usb_ep_autoconfig" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xa16bbe76, "gether_connect" },
	{ 0xdcb764ad, "memset" },
	{ 0x7579a216, "gether_get_dev_addr" },
	{ 0x3bd61cfd, "gether_set_host_addr" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0105eee, "usb_function_unregister" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0xd4ab7847, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0x60032353, "gether_get_ifname" },
	{ 0x2ee0fb71, "gether_set_ifname" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3a777c62, "gether_setup_name_default" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0xf8386df, "gether_get_qmult" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd962ac6, "usb_free_all_descriptors" },
	{ 0x3a7eeb5, "usb_gstrings_attach" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "4FC2C0E068EB8031083783C");
