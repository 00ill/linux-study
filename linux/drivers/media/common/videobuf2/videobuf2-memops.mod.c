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

KSYMTAB_FUNC(vb2_create_framevec, "", "");
KSYMTAB_FUNC(vb2_destroy_framevec, "", "");
KSYMTAB_DATA(vb2_common_vm_ops, "_gpl", "");

SYMBOL_CRC(vb2_create_framevec, 0xc7c2b85f, "");
SYMBOL_CRC(vb2_destroy_framevec, 0xccd197c7, "");
SYMBOL_CRC(vb2_common_vm_ops, 0x42ce2615, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x65246b8, "frame_vector_create" },
	{ 0xe20dfe0f, "get_vaddr_frames" },
	{ 0x1b700d37, "put_vaddr_frames" },
	{ 0x1d5f9555, "frame_vector_destroy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-common");


MODULE_INFO(srcversion, "51CD3845FC10E99ED3AC062");
