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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x4663c020, "lbs_resume" },
	{ 0x81dfb9c8, "sdio_writesb" },
	{ 0xa61482f9, "sdio_enable_func" },
	{ 0x32e3198, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9577ae7a, "lbs_stop_card" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xa4aa6834, "netdev_alert" },
	{ 0xc05fe13e, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x89bc6c69, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5e6bef31, "lbs_start_card" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3da5c614, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x51b4181b, "lbs_get_firmware_async" },
	{ 0x19b5aac7, "lbs_cmd_copyback" },
	{ 0xe34ef415, "lbs_suspend" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe607bf1e, "sdio_readsb" },
	{ 0xc43150f4, "sdio_unregister_driver" },
	{ 0xa16abb09, "lbs_remove_card" },
	{ 0xb063f94e, "sdio_f0_writeb" },
	{ 0xfa880192, "sdio_set_host_pm_flags" },
	{ 0x9f0b0532, "lbs_process_rxed_packet" },
	{ 0x44239691, "_dev_info" },
	{ 0x45e3a808, "sdio_release_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd3447258, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xf529312a, "sdio_align_size" },
	{ 0x4db214a6, "lbs_add_card" },
	{ 0x622764d0, "sdio_f0_readb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xc9e800fb, "mmc_add_host" },
	{ 0x835033cd, "netdev_err" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x11f9c12a, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xaf2386cf, "sdio_register_driver" },
	{ 0x7daa61cc, "sdio_claim_host" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf7fb32ee, "sdio_set_block_size" },
	{ 0x38c69f96, "sdio_disable_func" },
	{ 0xb2adf3f6, "sdio_release_host" },
	{ 0x2100d867, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "12BEFE9A4E42403FC050CA3");
