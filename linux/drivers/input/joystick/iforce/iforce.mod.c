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

KSYMTAB_FUNC(iforce_init_device, "", "");
KSYMTAB_FUNC(iforce_send_packet, "", "");
KSYMTAB_FUNC(iforce_process_packet, "", "");

SYMBOL_CRC(iforce_init_device, 0xd883cbb0, "");
SYMBOL_CRC(iforce_send_packet, 0x3278b687, "");
SYMBOL_CRC(iforce_process_packet, 0x605906fd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb727b479, "input_free_device" },
	{ 0x1000e51, "schedule" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41cc93f6, "input_event" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xfbaf9a71, "allocate_resource" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ac7587f, "input_ff_create" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc5e74216, "release_resource" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC8778A2E8555C4AF628C53");
