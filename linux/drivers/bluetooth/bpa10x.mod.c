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
	{ 0xa728742c, "usb_register_driver" },
	{ 0xadc1603a, "hci_unregister_dev" },
	{ 0xec2f6bf4, "hci_free_dev" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb5947eb5, "__hci_cmd_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x33b58322, "skb_push" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x718b8b7, "bt_info" },
	{ 0x353b511a, "hci_set_fw_info" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x84351f9d, "hci_alloc_dev_priv" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9b80e029, "hci_register_dev" },
	{ 0xf7389894, "hci_recv_frame" },
	{ 0xcf9ac34d, "hci_recv_diag" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2454D46DA84A0AE5B483785");
