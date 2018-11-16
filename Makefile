obj-m += lkm.o

all:
	make M=$(PWD) modules

clean:
	make M=$(PWD) clean
