obj-m += odotmodule.o

all: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make 0C /lib/moudles/$(shell uname -r)/build M=$(PWD) clean
	
