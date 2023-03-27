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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3ef339, "_dev_notice" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x44239691, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x24d079af, "i2c_mux_add_adapter" },
	{ 0x7a5dffba, "i2c_mux_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x97eb7767, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:si2168");

MODULE_INFO(srcversion, "251A0EA02AA416D61EC0A7C");
