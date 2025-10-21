cmake_minimum_required(VERSION 3.12)
project(ConfigureFile)

set(VAR1 123)
set(VAR3 "abc")

set(NAME "haha")
set(NEW_NAME "new_haha")

set(QUOTE "\"bb\"")
set(my_print "print_something")

configure_file(input.h input_default.h)
configure_file(input.h input_copyonly.h COPYONLY)
configure_file(input.h input_escape_quotes.h ESCAPE_QUOTES)
configure_file(input.h input_at_only.h @ONLY)
configure_file(input.h input_newline_style_dos.h NEWLINT_STYLE DOS)
configure_file(input.h input_newline_style_unix.h NEWLINE_STYLE LF)
