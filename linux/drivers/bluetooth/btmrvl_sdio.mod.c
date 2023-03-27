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
	{ 0xc43150f4, "sdio_unregister_driver" },
	{ 0xaf2386cf, "sdio_register_driver" },
	{ 0xe17001a7, "btmrvl_send_module_cfg_cmd" },
	{ 0x979e554c, "btmrvl_remove_card" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x38c69f96, "sdio_disable_func" },
	{ 0x45e3a808, "sdio_release_irq" },
	{ 0xe47018cd, "btmrvl_register_hdev" },
	{ 0x5c1c95cc, "btmrvl_add_card" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x2bcd02e8, "irq_of_parse_and_map" },
	{ 0xbb76c120, "of_match_node" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xf7fb32ee, "sdio_set_block_size" },
	{ 0x32e3198, "sdio_claim_irq" },
	{ 0xa61482f9, "sdio_enable_func" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xbf35443c, "hci_recv_frame" },
	{ 0x8d7a1912, "btmrvl_check_evtpkt" },
	{ 0x5e4fddbf, "btmrvl_process_event" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x5459aeef, "dev_coredumpv" },
	{ 0x96848186, "scnprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x81dfb9c8, "sdio_writesb" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb5e70e2, "btmrvl_interrupt" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe607bf1e, "sdio_readsb" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x44239691, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfa880192, "sdio_set_host_pm_flags" },
	{ 0xf59b262, "btmrvl_enable_hs" },
	{ 0x28f5da5d, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xec45e113, "hci_resume_dev" },
	{ 0x89bc6c69, "sdio_get_host_pm_caps" },
	{ 0x718b8b7, "bt_info" },
	{ 0x804cd48b, "sdio_readb" },
	{ 0x622764d0, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xb2adf3f6, "sdio_release_host" },
	{ 0x745f29e6, "sdio_writeb" },
	{ 0x7daa61cc, "sdio_claim_host" },
};

MODULE_INFO(depends, "btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "FC5B7AFB277A64632424B95");
