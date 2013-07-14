DIR = lesson01 lesson02 lesson04 lesson05 lesson06 lesson07 lesson08 lesson09 lesson10 lesson11 lesson12 lesson13 lesson14 lesson15 lesson16 lesson17 lesson18 lesson19 lesson20 lesson21 lesson22 lesson23 lesson24 lesson25 lesson26 lesson27 lesson28 lesson29 lesson30 lesson31 lesson32 lesson33 lesson34 lesson35 lesson36

all:
	@for i in $(DIR);\
		do(echo ""; \
			echo "======> ./$$i/make all \
				<======";\
		echo "";\
		cd $$i; make all);\
	done

clean:
	@for i in $(DIR);\
		do( echo "======> ./$$i/make clean \
				<======"; \
		cd $$i; make clean );\
	done

lesson02:
	cd lesson02; make;

lesson03:
	cd lesson03; make;

