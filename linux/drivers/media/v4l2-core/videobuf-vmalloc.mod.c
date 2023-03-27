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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2cd20d01, "remap_vmalloc_range" },
	{ 0xdbe434dc, "videobuf_queue_cancel" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0248e65, "videobuf_queue_core_init" },
};

MODULE_INFO(depends, "videobuf-core");


MODULE_INFO(srcversion, "39E820F035201B8377B7A9A");
