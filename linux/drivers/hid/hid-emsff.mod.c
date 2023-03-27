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
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x762a3fb4, "__hid_request" },
	{ 0x44239691, "_dev_info" },
	{ 0x75464319, "input_ff_create_memless" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v00002006p00000118");

MODULE_INFO(srcversion, "8986EFA1D5C11138FE12BE6");
