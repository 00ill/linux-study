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

KSYMTAB_FUNC(lib80211_crypt_info_init, "", "");
KSYMTAB_FUNC(lib80211_crypt_info_free, "", "");
KSYMTAB_FUNC(lib80211_crypt_delayed_deinit, "", "");
KSYMTAB_FUNC(lib80211_register_crypto_ops, "", "");
KSYMTAB_FUNC(lib80211_unregister_crypto_ops, "", "");
KSYMTAB_FUNC(lib80211_get_crypto_ops, "", "");

SYMBOL_CRC(lib80211_crypt_info_init, 0x2a371196, "");
SYMBOL_CRC(lib80211_crypt_info_free, 0x3240271d, "");
SYMBOL_CRC(lib80211_crypt_delayed_deinit, 0x02b4bed3, "");
SYMBOL_CRC(lib80211_register_crypto_ops, 0x22afdaa6, "");
SYMBOL_CRC(lib80211_unregister_crypto_ops, 0x8f8d5ca5, "");
SYMBOL_CRC(lib80211_get_crypto_ops, 0x978746e5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9d9e8944, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4CF3155B4B96C840B538F8");
