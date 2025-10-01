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
	{ 0x8a2cbef8, "register_asymmetric_key_parser" },
	{ 0x905c105a, "look_up_OID" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc201b66, "sprint_oid" },
	{ 0xd8940511, "__module_get" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3cc079d3, "unregister_asymmetric_key_parser" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc1ce3235, "public_key_subtype" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DB89F14B54FAEBEA2615C78");
