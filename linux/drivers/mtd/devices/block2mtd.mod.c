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
	{ 0xd61910ed, "mtd_device_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe8f94573, "balance_dirty_pages_ratelimited" },
	{ 0x700c176b, "unlock_page" },
	{ 0x57651a8b, "set_page_dirty" },
	{ 0x5112f49a, "__lock_page" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x17afb12f, "__put_page" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4829a47e, "memcpy" },
	{ 0x571a7dce, "read_cache_page" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8eb61361, "mtd_device_parse_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd1ca1c12, "blkdev_get_by_path" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x98cf60b3, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9f984513, "strrchr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x84c7a253, "blkdev_put" },
	{ 0x21c79675, "invalidate_mapping_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xec553da5, "sync_blockdev" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "C56DC99CA9E7C8AE34815CA");
