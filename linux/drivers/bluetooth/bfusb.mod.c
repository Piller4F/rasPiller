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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6ee775f, "hci_register_dev" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x702b033b, "hci_alloc_dev_priv" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf35443c, "hci_recv_frame" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x5a08e008, "skb_unlink" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x38117856, "hci_free_dev" },
	{ 0x2cd2c61a, "hci_unregister_dev" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xe0e82ceb, "skb_queue_purge" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1B78857D6FB12E14298332");
