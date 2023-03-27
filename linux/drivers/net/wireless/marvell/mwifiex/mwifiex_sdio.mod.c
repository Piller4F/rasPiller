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
	{ 0x745f29e6, "sdio_writeb" },
	{ 0x804cd48b, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x395475f0, "mwifiex_cancel_hs" },
	{ 0x81dfb9c8, "sdio_writesb" },
	{ 0xa61482f9, "sdio_enable_func" },
	{ 0x32e3198, "sdio_claim_irq" },
	{ 0xe76f1a5c, "mmc_hw_reset" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x92b1ae37, "mwifiex_disable_auto_ds" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xba681b8e, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x9d01229f, "mwifiex_main_process" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb19df4a0, "mwifiex_prepare_fw_dump_info" },
	{ 0x89bc6c69, "sdio_get_host_pm_caps" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcfe045ce, "_mwifiex_dbg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0xa30151e9, "mwifiex_add_card" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbb76c120, "of_match_node" },
	{ 0x43baf64c, "mwifiex_shutdown_sw" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xe607bf1e, "sdio_readsb" },
	{ 0xc43150f4, "sdio_unregister_driver" },
	{ 0xfa880192, "sdio_set_host_pm_flags" },
	{ 0x162932a9, "mwifiex_dnld_fw" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x45e3a808, "sdio_release_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x622764d0, "sdio_f0_readb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa1536780, "mwifiex_reinit_sw" },
	{ 0x3cafcaf7, "mwifiex_handle_rx_packet" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbda02505, "mwifiex_deauthenticate_all" },
	{ 0x1319f24, "mwifiex_remove_card" },
	{ 0xc23b27d4, "mwifiex_enable_hs" },
	{ 0x60e3240c, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xaf2386cf, "sdio_register_driver" },
	{ 0x7daa61cc, "sdio_claim_host" },
	{ 0x59d1c3f9, "mwifiex_drv_info_dump" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc0f45cb1, "mwifiex_init_shutdown_fw" },
	{ 0xf7fb32ee, "sdio_set_block_size" },
	{ 0x38c69f96, "sdio_disable_func" },
	{ 0xb2adf3f6, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "DEF02E58B7FE6D9047E5B88");
