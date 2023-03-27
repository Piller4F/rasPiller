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
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3452ed0f, "send_sig" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x88bf49b0, "atm_charge" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfc64ffa6, "vcc_release_async" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x461ccb2f, "usb_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x184c06d0, "atm_dev_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x404f24e1, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4df02057, "crc32_be" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x96848186, "scnprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "B3E2AC6A70CFA0046593E23");
