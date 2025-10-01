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

KSYMTAB_FUNC(register_snap_client, "", "");
KSYMTAB_FUNC(unregister_snap_client, "", "");

SYMBOL_CRC(register_snap_client, 0x90b8821f, "");
SYMBOL_CRC(unregister_snap_client, 0x5843966d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6c9c5043, "llc_sap_open" },
	{ 0x122c3a7e, "_printk" },
	{ 0x33b58322, "skb_push" },
	{ 0x55967982, "llc_build_and_send_ui_pkt" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x594477ee, "skb_pull_rcsum" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1fa0b3fb, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "E7A99B16CA7F825BA8B19EC");
