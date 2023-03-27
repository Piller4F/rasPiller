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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe51a70f7, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x1861fa72, "input_ff_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7d993228, "led_set_brightness" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xd6011851, "input_free_device" },
	{ 0x75464319, "input_ff_create_memless" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0x771f85fb, "input_event" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeeb77997, "usb_kill_urb" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic58isc42ip00in*");
MODULE_ALIAS("usb:v0079p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0079p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v03EBp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v03EBp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v056Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v056Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v06A3p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v06A3p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p4540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v07FFp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v07FFp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0C12p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0C12p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v1038p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1038p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v11C9p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v11C9p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1209p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1209p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1949p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1949p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2563p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2563p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v260Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v260Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v2DC8p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2E24p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2F24p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2F24p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v31E3p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v31E3p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v3285p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v3285p*d*dc*dsc*dp*icFFisc5Dip81in*");

MODULE_INFO(srcversion, "EEF7EDF1FC5649FDC2161DE");
