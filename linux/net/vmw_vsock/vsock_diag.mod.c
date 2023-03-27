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
	{ 0xd1fd771a, "sock_diag_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x703fd655, "sock_i_ino" },
	{ 0x67722d74, "sock_diag_register" },
	{ 0x9bb6fd09, "vsock_connected_table" },
	{ 0x284e07d8, "vsock_bind_table" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x64efaea7, "sock_diag_save_cookie" },
	{ 0xc92f7f50, "vsock_table_lock" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0x7ae66123, "__netlink_dump_start" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "B2C1B7CC7644E72B66D6647");
