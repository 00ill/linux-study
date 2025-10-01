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

KSYMTAB_FUNC(snd_hwdep_new, "", "");

SYMBOL_CRC(snd_hwdep_new, 0x0a27a1e5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3aaa0000, "try_module_get" },
	{ 0xc68b08a3, "snd_info_register" },
	{ 0x9507edad, "snd_info_create_module_entry" },
	{ 0x4915ac13, "snd_ctl_unregister_ioctl_compat" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x7c2b253b, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfad9735a, "snd_unregister_oss_device" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe2bdf3c8, "snd_register_oss_device" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x9d91cacf, "snd_ctl_register_ioctl" },
	{ 0x5a63169a, "snd_card_file_add" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x85194765, "snd_unregister_device" },
	{ 0xff106c56, "snd_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb6266700, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8019959e, "snd_ctl_unregister_ioctl" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x128a8023, "snd_ctl_register_ioctl_compat" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xd60bda5c, "snd_card_file_remove" },
	{ 0x30647f39, "snd_register_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "68C5FCE9F3B49F7AD43B21E");
