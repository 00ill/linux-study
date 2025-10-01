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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0xda91c459, "input_setup_polling" },
	{ 0xf11817cb, "input_set_poll_interval" },
	{ 0xa9d24e21, "input_set_min_poll_interval" },
	{ 0x9d998c5a, "input_set_max_poll_interval" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92893115, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x41cc93f6, "input_event" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "9F2783BC545AA67B983779A");
