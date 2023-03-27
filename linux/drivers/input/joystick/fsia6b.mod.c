#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0xb01c00d, "serio_unregister_driver" },
	{ 0x8142883e, "__serio_register_driver" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xd6011851, "input_free_device" },
	{ 0x1cc4d27c, "serio_open" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x771f85fb, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0x79a10a3d, "serio_close" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty02pr42id*ex*");

MODULE_INFO(srcversion, "2040749EB102A067D44DC02");
