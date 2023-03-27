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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0xb1545261, "seq_release_private" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0xdcf25530, "seq_read" },
	{ 0xa2f06cb2, "xt_unregister_matches" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x6e60e22a, "xt_register_matches" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5657c33f, "proc_set_user" },
	{ 0xd81baef0, "proc_create_data" },
	{ 0xb880495f, "make_kgid" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x219e54ee, "__do_once_done" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x37a0cba, "kfree" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x5a0baca8, "proc_mkdir" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbd7b056, "seq_putc" },
	{ 0x393cac96, "seq_printf" },
	{ 0xd06eabd1, "PDE_DATA" },
	{ 0xfe78dc71, "__seq_open_private" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "695F95E6A7EC108FDCC365A");
