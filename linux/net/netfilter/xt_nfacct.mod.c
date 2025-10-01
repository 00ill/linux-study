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
	{ 0xfd7f342e, "xt_register_matches" },
	{ 0xbecf5d14, "nfnl_acct_put" },
	{ 0x86e039eb, "nfnl_acct_find_get" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xfec01bc0, "nfnl_acct_update" },
	{ 0xd1b5bcdc, "nfnl_acct_overquota" },
	{ 0x5907e5ea, "xt_unregister_matches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nfnetlink_acct");


MODULE_INFO(srcversion, "AEF02D0461AFF85FC42E888");
