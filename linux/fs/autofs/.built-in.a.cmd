cmd_fs/autofs/built-in.a := echo >/dev/null; rm -f fs/autofs/built-in.a; aarch64-linux-gnu-ar cDPrST fs/autofs/built-in.a fs/autofs/init.o fs/autofs/inode.o fs/autofs/root.o fs/autofs/symlink.o fs/autofs/waitq.o fs/autofs/expire.o fs/autofs/dev-ioctl.o