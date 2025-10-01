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
	{ 0x38cc15d, "brcmf_set_wsec" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x86d4e4b2, "brcmf_fwvid_register_vendor" },
	{ 0x2d384527, "brcmf_fwvid_unregister_vendor" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "brcmfmac");


MODULE_INFO(srcversion, "91C3953EDB53404DE25BE73");
