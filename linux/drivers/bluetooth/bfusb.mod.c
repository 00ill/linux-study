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
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x84351f9d, "hci_alloc_dev_priv" },
	{ 0x9b80e029, "hci_register_dev" },
	{ 0xec2f6bf4, "hci_free_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xadc1603a, "hci_unregister_dev" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xf7389894, "hci_recv_frame" },
	{ 0x33b58322, "skb_push" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1B78857D6FB12E14298332");
