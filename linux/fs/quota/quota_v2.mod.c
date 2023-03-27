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
	{ 0xf479278c, "unregister_quota_format" },
	{ 0x75b21b50, "register_quota_format" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0xb880495f, "make_kgid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0xd159560d, "make_kprojid" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x832a0f1c, "qtree_entry_unused" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x33c8503a, "__quota_error" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x850bf23d, "qtree_read_dquot" },
	{ 0xf36ff530, "qtree_write_dquot" },
	{ 0xce807a25, "up_write" },
	{ 0x47d24393, "qtree_release_dquot" },
	{ 0x57bc19d2, "down_write" },
	{ 0x53b954a2, "up_read" },
	{ 0x487e0fbc, "qtree_get_next_id" },
	{ 0x668b19a1, "down_read" },
};

MODULE_INFO(depends, "quota_tree");


MODULE_INFO(srcversion, "346A40DE11699FE3101DD7C");
