
test: test.o libtest.a
	$(LINK.C) $< -o $@ -L. -ltest

test.o: test.cpp libtest.h
	$(COMPILE.C) $< -o $@

libtest.a: libtest.o
	$(AR) cru $@ $<

libtest.o: libtest.c
	$(COMPILE.c) $< -fPIC -o $@

clean:
	rm *.a *.o
