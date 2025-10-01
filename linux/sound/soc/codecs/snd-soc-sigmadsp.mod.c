#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(devm_sigmadsp_init, "_gpl", "");
KSYMTAB_FUNC(sigmadsp_attach, "_gpl", "");
KSYMTAB_FUNC(sigmadsp_setup, "_gpl", "");
KSYMTAB_FUNC(sigmadsp_reset, "_gpl", "");
KSYMTAB_FUNC(sigmadsp_restrict_params, "_gpl", "");

SYMBOL_CRC(devm_sigmadsp_init, 0x771c6525, "_gpl");
SYMBOL_CRC(sigmadsp_attach, 0x9ee46059, "_gpl");
SYMBOL_CRC(sigmadsp_setup, 0x13016d8f, "_gpl");
SYMBOL_CRC(sigmadsp_reset, 0xba4b97ee, "_gpl");
SYMBOL_CRC(sigmadsp_restrict_params, 0xbfbd0846, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xde5315ca, "devres_add" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xa84eb862, "snd_ctl_activate_id" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-pcm");


MODULE_INFO(srcversion, "E123FBF85C36BC1E940FEF7");
