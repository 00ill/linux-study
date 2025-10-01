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
	{ 0x976d9872, "bpf_prog_destroy" },
	{ 0xa916b694, "strnlen" },
	{ 0xd8a1c278, "bpf_prog_get_type_path" },
	{ 0xfc386a5, "bpf_prog_create" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b2c40e9, "bpf_prog_get_type_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x49608959, "migrate_disable" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5907e5ea, "xt_unregister_matches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "D3EE0220C3C869B56194D98");
