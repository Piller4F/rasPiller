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
	{ 0xe1f7f753, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0xb96301bf, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xfc75a988, "sock_no_recvmsg" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xdaf3bdc3, "iov_iter_get_pages" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x112af342, "sock_wake_async" },
	{ 0x27600d4d, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x2ee1c075, "sock_kfree_s" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x1acd7981, "module_put" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x32178799, "proto_register" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe01798b7, "sock_register" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x644c4a57, "sock_kmalloc" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xbd7f1345, "sock_no_connect" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x9abebc81, "sock_no_sendmsg" },
	{ 0xeac9f293, "sock_kzfree_s" },
	{ 0xd93c010f, "iov_iter_advance" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x17afb12f, "__put_page" },
	{ 0x68173019, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6670AEEAD9116012651EDD8");
