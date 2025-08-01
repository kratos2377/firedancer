$(call add-hdrs,fd_base64.h)
$(call add-objs,fd_base64,fd_ballet)
$(call make-unit-test,test_base64,test_base64,fd_ballet fd_util)
$(call run-unit-test,test_base64)
ifdef FD_HAS_HOSTED
$(call make-fuzz-test,fuzz_base64_dec,fuzz_base64_dec,fd_ballet fd_util)
$(call make-fuzz-test,fuzz_base64_enc,fuzz_base64_enc,fd_ballet fd_util)
endif
