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

KSYMTAB_FUNC(cn_netlink_send_mult, "_gpl", "");
KSYMTAB_FUNC(cn_netlink_send, "_gpl", "");
KSYMTAB_FUNC(cn_add_callback, "_gpl", "");
KSYMTAB_FUNC(cn_del_callback, "_gpl", "");

SYMBOL_CRC(cn_netlink_send_mult, 0x8a32c422, "_gpl");
SYMBOL_CRC(cn_netlink_send, 0xe8bc40c5, "_gpl");
SYMBOL_CRC(cn_add_callback, 0xe7e06108, "_gpl");
SYMBOL_CRC(cn_del_callback, 0x07483e13, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc10c6da6, "__netlink_kernel_create" },
	{ 0x6d569cec, "netlink_broadcast_filtered" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x1a6ab775, "init_net" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0x1d25a0ff, "netlink_kernel_release" },
	{ 0xac27974a, "ns_capable" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf8a9c57e, "proc_create_single_data" },
	{ 0xec449138, "netlink_has_listeners" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4BC4F443E9704ED4CB7262C");
