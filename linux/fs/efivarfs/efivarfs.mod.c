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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9ead25c, "drop_nlink" },
	{ 0x7410aba2, "strreplace" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9be30183, "efivar_entry_delete" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc1f56c6, "get_tree_single" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0xf5ad49bc, "simple_lookup" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x85fe2136, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xb5981cc5, "dput" },
	{ 0x7bd85b8d, "inc_nlink" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0x8d01884f, "d_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x70abc0f, "d_delete" },
	{ 0x5025b5a1, "kill_litter_super" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe46d2f7, "efivar_entry_remove" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa286bc3d, "efivar_entry_size" },
	{ 0xad5737fc, "efivar_init" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xaefa1db9, "efivar_entry_set_get_size" },
	{ 0xe073cc5c, "simple_dir_operations" },
	{ 0x53e98682, "d_alloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd44cdb92, "efivar_entry_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd93a5cb1, "efivar_variable_is_removable" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xbdfc304b, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaee52c0b, "efivar_entry_add" },
	{ 0xb132cad9, "current_time" },
	{ 0x24fc2310, "always_delete_dentry" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0xd81a9177, "simple_statfs" },
	{ 0x414b2b2e, "inode_set_flags" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x3b42df26, "new_inode" },
	{ 0x16641dab, "__efivar_entry_iter" },
	{ 0xdc30ae07, "clear_inode" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x7336a49b, "d_instantiate" },
	{ 0xe9f7bd32, "efivars_kobject" },
	{ 0x4336fcca, "ucs2_as_utf8" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1F5A8AB11193A60F24488F");
