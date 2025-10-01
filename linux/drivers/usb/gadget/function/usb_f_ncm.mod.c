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
	{ 0x4367c3a1, "skb_put" },
	{ 0xdaa5d4cc, "usb_os_desc_prepare_interf_dir" },
	{ 0x2155f701, "hrtimer_try_to_cancel" },
	{ 0x8bf701a4, "usb_interface_id" },
	{ 0x72516513, "usb_assign_descriptors" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x80d59396, "gether_disconnect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x35e071f4, "config_ep_by_speed" },
	{ 0x8b77bcf8, "gether_set_dev_addr" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x9fbc503, "gether_register_netdev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x8c8eed8e, "usb_ep_dequeue" },
	{ 0xf9673004, "usb_function_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0xc62d4142, "gether_set_qmult" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x7ece9457, "gether_get_host_addr" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa0ff66b2, "gether_set_gadget" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x6f3f2011, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0xa16bbe76, "gether_connect" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x7579a216, "gether_get_dev_addr" },
	{ 0x3bd61cfd, "gether_set_host_addr" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xf0105eee, "usb_function_unregister" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0x60032353, "gether_get_ifname" },
	{ 0x2d75696f, "usb_ep_set_halt" },
	{ 0x2ee0fb71, "gether_set_ifname" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x45dba26c, "gether_get_host_addr_cdc" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3a777c62, "gether_setup_name_default" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0xf8386df, "gether_get_qmult" },
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


MODULE_INFO(srcversion, "2827E1C345C5ADE2607BE2F");
