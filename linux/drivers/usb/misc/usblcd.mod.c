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
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xcf2a6966, "up" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x668b19a1, "down_read" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x53b954a2, "up_read" },
	{ 0xdcb764ad, "memset" },
	{ 0x669c413b, "_dev_err" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x28a823ab, "usb_find_interface" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F6418DF2362497557790A5F");
