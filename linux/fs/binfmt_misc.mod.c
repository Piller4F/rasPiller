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
	{ 0x5025b5a1, "kill_litter_super" },
	{ 0x292268, "noop_llseek" },
	{ 0x591d2839, "default_llseek" },
	{ 0xd81a9177, "simple_statfs" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x6051b1d1, "unregister_binfmt" },
	{ 0x91740193, "__register_binfmt" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8fc06210, "remove_arg_zero" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4887eaa5, "dentry_open" },
	{ 0xce0bf077, "bprm_change_interp" },
	{ 0xbcfaafaa, "copy_string_kernel" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfc304b, "iput" },
	{ 0x7336a49b, "d_instantiate" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x3ae06f45, "simple_pin_fs" },
	{ 0xb132cad9, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x3b42df26, "new_inode" },
	{ 0xce807a25, "up_write" },
	{ 0x77edbffb, "lookup_one_len" },
	{ 0x57bc19d2, "down_write" },
	{ 0x9829a221, "open_exec" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x61a76976, "simple_release_fs" },
	{ 0xb5981cc5, "dput" },
	{ 0xaa6d0860, "d_drop" },
	{ 0xe9ead25c, "drop_nlink" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xf1c42774, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc30ae07, "clear_inode" },
	{ 0x7d636026, "simple_fill_super" },
	{ 0xc1f56c6, "get_tree_single" },
	{ 0x11089ac7, "_ctype" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "789587068F031BCB6B7CC28");
