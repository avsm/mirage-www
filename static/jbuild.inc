(jbuild_version 1)

(alias (
  (name site)
  (deps (
    css/app.css
    css/prism.css
    images/jason.jpg
    images/plain-bg.jpg
    images/anil.jpg
    images/yaron.jpg
    images/cover.png
    images/book-cover.jpg
    images/bg.jpg
    images/front-end/pipeline.png
    images/gc/minor_heap.png
    images/imperative-programming/edit_distance2.png
    images/imperative-programming/edit_distance.png
    images/lists-and-patterns/lists_layout.png
    images/memory-repr/string_block.png
    images/memory-repr/string_size_calc.png
    images/memory-repr/block.png
    images/memory-repr/float_array_layout.png
    images/memory-repr/tuple_layout.png
    js/_functions.js
    js/prism.js
    js/jquery.min.js
    js/modernizr.js
    js/app.js
    js/discourse.js
    js/min/modernizr-min.js
    js/min/app-min.js
    theme/pdf/pdf.css))))

(alias ((name site) (deps (00-prologue.html))))

(rule (
  (targets (00-prologue.html))
  (deps (../book/00-prologue.html ../bin/bin/app.exe))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (01-guided-tour.html))))

(rule (
  (targets (01-guided-tour.html))
  (deps (
    ../book/01-guided-tour.html
    ../bin/bin/app.exe
    ../examples/code/guided-tour/local_let.topscript.sexp
    ../examples/code/guided-tour/main.topscript.sexp
    ../examples/code/guided-tour/recursion.ml.sexp
    ../examples/code/guided-tour/sum/build_sum.sh.sexp
    ../examples/code/guided-tour/sum/jbuild.sexp
    ../examples/code/guided-tour/sum/sum.ml.sexp
    ../examples/code/guided-tour/sum/sum.rawsh.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (02-variables-and-functions.html))))

(rule (
  (targets (02-variables-and-functions.html))
  (deps (
    ../book/02-variables-and-functions.html
    ../bin/bin/app.exe
    ../examples/code/variables-and-functions/abs_diff.mli.sexp
    ../examples/code/variables-and-functions/htable_sig1.ml.sexp
    ../examples/code/variables-and-functions/htable_sig2.ml.sexp
    ../examples/code/variables-and-functions/let.syntax.sexp
    ../examples/code/variables-and-functions/let_in.syntax.sexp
    ../examples/code/variables-and-functions/main.topscript.sexp
    ../examples/code/variables-and-functions/numerical_deriv_alt_sig.mli.sexp
    ../examples/code/variables-and-functions/operators.syntax.sexp
    ../examples/code/variables-and-functions/substring_sig1.ml.sexp
    ../examples/code/variables-and-functions/substring_sig2.ml.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (03-lists-and-patterns.html))))

(rule (
  (targets (03-lists-and-patterns.html))
  (deps (
    ../book/03-lists-and-patterns.html
    ../bin/bin/app.exe
    ../examples/code/lists-and-patterns/main.topscript.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (04-files-modules-and-programs.html))))

(rule (
  (targets (04-files-modules-and-programs.html))
  (deps (
    ../book/04-files-modules-and-programs.html
    ../bin/bin/app.exe
    ../examples/code/files-modules-and-programs/abstract_username.ml.sexp
    ../examples/code/files-modules-and-programs/common.ml.sexp
    ../examples/code/files-modules-and-programs/ext_list.ml.sexp
    ../examples/code/files-modules-and-programs/ext_list.mli.sexp
    ../examples/code/files-modules-and-programs/freq-cyclic1/build.errsh.sexp
    ../examples/code/files-modules-and-programs/freq-cyclic1/counter.ml.sexp
    ../examples/code/files-modules-and-programs/freq-cyclic2/build.errsh.sexp
    ../examples/code/files-modules-and-programs/freq-cyclic2/counter.ml.sexp
    ../examples/code/files-modules-and-programs/freq-fast/counter.ml.sexp
    ../examples/code/files-modules-and-programs/freq-median/counter.ml.sexp
    ../examples/code/files-modules-and-programs/freq-median/counter.mli.sexp
    ../examples/code/files-modules-and-programs/freq-median/use_median_1.ml.sexp
    ../examples/code/files-modules-and-programs/freq-median/use_median_2.ml.sexp
    ../examples/code/files-modules-and-programs/freq-obuild/build.sh.sexp
    ../examples/code/files-modules-and-programs/freq-obuild/jbuild.sexp
    ../examples/code/files-modules-and-programs/freq-obuild/test.sh.sexp
    ../examples/code/files-modules-and-programs/freq-with-counter/build.sh.sexp
    ../examples/code/files-modules-and-programs/freq-with-counter/counter.ml.sexp
    ../examples/code/files-modules-and-programs/freq-with-counter/freq.ml.sexp
    ../examples/code/files-modules-and-programs/freq-with-missing-def/build.errsh.sexp
    ../examples/code/files-modules-and-programs/freq-with-missing-def/counter.mli.sexp
    ../examples/code/files-modules-and-programs/freq-with-sig-abstract-fixed/build.sh.sexp
    ../examples/code/files-modules-and-programs/freq-with-sig-abstract-fixed/freq.ml.sexp
    ../examples/code/files-modules-and-programs/freq-with-sig-abstract/build.errsh.sexp
    ../examples/code/files-modules-and-programs/freq-with-sig-abstract/counter.ml.sexp
    ../examples/code/files-modules-and-programs/freq-with-sig-abstract/counter.mli.sexp
    ../examples/code/files-modules-and-programs/freq-with-sig-mismatch/build.errsh.sexp
    ../examples/code/files-modules-and-programs/freq-with-sig-mismatch/counter.mli.sexp
    ../examples/code/files-modules-and-programs/freq-with-sig/counter.mli.sexp
    ../examples/code/files-modules-and-programs/freq-with-type-mismatch/build.errsh.sexp
    ../examples/code/files-modules-and-programs/freq-with-type-mismatch/counter.mli.sexp
    ../examples/code/files-modules-and-programs/freq/freq.ml.sexp
    ../examples/code/files-modules-and-programs/freq/simple_build.sh.sexp
    ../examples/code/files-modules-and-programs/freq/simple_build_fail.errsh.sexp
    ../examples/code/files-modules-and-programs/intro.topscript.sexp
    ../examples/code/files-modules-and-programs/main.topscript.sexp
    ../examples/code/files-modules-and-programs/module.syntax.sexp
    ../examples/code/files-modules-and-programs/session_info/build_session_info.errsh.sexp
    ../examples/code/files-modules-and-programs/session_info/session_info.ml.sexp
    ../examples/code/files-modules-and-programs/val.syntax.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (05-records.html))))

(rule (
  (targets (05-records.html))
  (deps (
    ../book/05-records.html
    ../bin/bin/app.exe
    ../examples/code/records/functional_update.syntax.sexp
    ../examples/code/records/main.topscript.sexp
    ../examples/code/records/main2.topscript.sexp
    ../examples/code/records/record.syntax.sexp
    ../examples/code/records/warn_help.sh.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (06-variants.html))))

(rule (
  (targets (06-variants.html))
  (deps (
    ../book/06-variants.html
    ../bin/bin/app.exe
    ../examples/code/variants-termcol-annotated/build.errsh.sexp
    ../examples/code/variants-termcol-annotated/jbuild.sexp
    ../examples/code/variants-termcol-annotated/terminal_color.ml.sexp
    ../examples/code/variants-termcol-fixed/terminal_color.ml.sexp
    ../examples/code/variants-termcol/terminal_color.ml.sexp
    ../examples/code/variants-termcol/terminal_color.mli.sexp
    ../examples/code/variants/blang.topscript.sexp
    ../examples/code/variants/catch_all.topscript.sexp
    ../examples/code/variants/logger.topscript.sexp
    ../examples/code/variants/main.topscript.sexp
    ../examples/code/variants/variant.syntax.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (07-error-handling.html))))

(rule (
  (targets (07-error-handling.html))
  (deps (
    ../book/07-error-handling.html
    ../bin/bin/app.exe
    ../examples/code/error-handling/blow_up/blow_up.ml.sexp
    ../examples/code/error-handling/blow_up/build_blow_up.errsh.sexp
    ../examples/code/error-handling/blow_up/build_blow_up_notrace.errsh.sexp
    ../examples/code/error-handling/blow_up/jbuild.sexp
    ../examples/code/error-handling/exn_cost/exn_cost.ml.sexp
    ../examples/code/error-handling/exn_cost/jbuild.sexp
    ../examples/code/error-handling/exn_cost/run_exn_cost.sh.sexp
    ../examples/code/error-handling/exn_cost/run_exn_cost_notrace.sh.sexp
    ../examples/code/error-handling/main.topscript.sexp
    ../examples/code/error-handling/result.mli.sexp
    ../examples/code/error-handling/sexpr.scm.sexp
    ../examples/code/error-handling/try_with.syntax.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (08-imperative-programming.html))))

(rule (
  (targets (08-imperative-programming.html))
  (deps (
    ../book/08-imperative-programming.html
    ../bin/bin/app.exe
    ../examples/code/imperative-programming/array-get.syntax.sexp
    ../examples/code/imperative-programming/array-set.syntax.sexp
    ../examples/code/imperative-programming/bigarray.syntax.sexp
    ../examples/code/imperative-programming/dictionary.ml.sexp
    ../examples/code/imperative-programming/dictionary.mli.sexp
    ../examples/code/imperative-programming/dictionary2.ml.sexp
    ../examples/code/imperative-programming/dlist.ml.sexp
    ../examples/code/imperative-programming/dlist.mli.sexp
    ../examples/code/imperative-programming/examples.topscript.sexp
    ../examples/code/imperative-programming/fib.topscript.sexp
    ../examples/code/imperative-programming/file.topscript.sexp
    ../examples/code/imperative-programming/file2.topscript.sexp
    ../examples/code/imperative-programming/for.topscript.sexp
    ../examples/code/imperative-programming/lazy.topscript.sexp
    ../examples/code/imperative-programming/let-unit.syntax.sexp
    ../examples/code/imperative-programming/let_rec.ml.sexp
    ../examples/code/imperative-programming/letrec.topscript.sexp
    ../examples/code/imperative-programming/memo.topscript.sexp
    ../examples/code/imperative-programming/order.topscript.sexp
    ../examples/code/imperative-programming/printf.topscript.sexp
    ../examples/code/imperative-programming/ref.topscript.sexp
    ../examples/code/imperative-programming/remember_type.ml.sexp
    ../examples/code/imperative-programming/semicolon.syntax.sexp
    ../examples/code/imperative-programming/string.syntax.sexp
    ../examples/code/imperative-programming/time_converter/time_converter.ml.sexp
    ../examples/code/imperative-programming/time_converter/time_converter.rawsh.sexp
    ../examples/code/imperative-programming/time_converter2.ml.sexp
    ../examples/code/imperative-programming/time_converter2.rawsh.sexp
    ../examples/code/imperative-programming/value_restriction.topscript.sexp
    ../examples/code/imperative-programming/weak.topscript.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (09-functors.html))))

(rule (
  (targets (09-functors.html))
  (deps (
    ../book/09-functors.html
    ../bin/bin/app.exe
    ../examples/code/functors/compare_example.ml.sexp
    ../examples/code/functors/destructive_sub.syntax.sexp
    ../examples/code/functors/extended_fqueue.ml.sexp
    ../examples/code/functors/extended_fqueue.mli.sexp
    ../examples/code/functors/foldable.ml.sexp
    ../examples/code/functors/fqueue.ml.sexp
    ../examples/code/functors/fqueue.mli.sexp
    ../examples/code/functors/main.topscript.sexp
    ../examples/code/functors/multi_sharing_constraint.syntax.sexp
    ../examples/code/functors/sexpable.ml.sexp
    ../examples/code/functors/sharing_constraint.syntax.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (20-runtime-memory-layout.html))))

(rule (
  (targets (20-runtime-memory-layout.html))
  (deps (
    ../book/20-runtime-memory-layout.html
    ../bin/bin/app.exe
    ../examples/code/memory-repr/custom_ops.c.sexp
    ../examples/code/memory-repr/reprs.topscript.sexp
    ../examples/code/memory-repr/simple_record.topscript.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (21-garbage-collector.html))))

(rule (
  (targets (21-garbage-collector.html))
  (deps (
    ../book/21-garbage-collector.html
    ../bin/bin/app.exe
    ../examples/code/gc/barrier_bench/barrier_bench.ml.sexp
    ../examples/code/gc/barrier_bench/jbuild.sexp
    ../examples/code/gc/barrier_bench/run_barrier_bench.sh.sexp
    ../examples/code/gc/barrier_bench/show_barrier_bench_help.sh.sexp
    ../examples/code/gc/finalizer/finalizer.ml.sexp
    ../examples/code/gc/finalizer/jbuild.sexp
    ../examples/code/gc/finalizer/run_finalizer.sh.sexp
    ../examples/code/gc/tune.topscript.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (22-compiler-frontend.html))))

(rule (
  (targets (22-compiler-frontend.html))
  (deps (
    ../book/22-compiler-frontend.html
    ../bin/bin/app.exe
    ../examples/code/front-end/alice.ml.sexp
    ../examples/code/front-end/alice.mli.sexp
    ../examples/code/front-end/alice_combined.ml.sexp
    ../examples/code/front-end/broken_module.ml.sexp
    ../examples/code/front-end/broken_poly.ml.sexp
    ../examples/code/front-end/broken_poly_with_annot.ml.sexp
    ../examples/code/front-end/build_broken_module.errsh.sexp
    ../examples/code/front-end/build_broken_poly.errsh.sexp
    ../examples/code/front-end/build_broken_poly_with_annot.errsh.sexp
    ../examples/code/front-end/build_follow_on_function.errsh.sexp
    ../examples/code/front-end/build_non_principal.sh.sexp
    ../examples/code/front-end/build_ocamldoc.rawsh.sexp
    ../examples/code/front-end/build_principal.sh.sexp
    ../examples/code/front-end/build_principal_corebuild.sh.sexp
    ../examples/code/front-end/build_type_conv_with_camlp4.rawsh.sexp
    ../examples/code/front-end/build_type_conv_without_camlp4.errsh.sexp
    ../examples/code/front-end/camlp4_dump.cmd.sexp
    ../examples/code/front-end/camlp4_toplevel.topscript.sexp
    ../examples/code/front-end/comparelib_test.ml.sexp
    ../examples/code/front-end/comparelib_test.mli.sexp
    ../examples/code/front-end/conflicting_interface.ml.sexp
    ../examples/code/front-end/conflicting_interface.mli.sexp
    ../examples/code/front-end/conflicting_interfaces.errsh.sexp
    ../examples/code/front-end/doc.ml.sexp
    ../examples/code/front-end/fixed_module.ml.sexp
    ../examples/code/front-end/follow_on_function.ml.sexp
    ../examples/code/front-end/inconsistent_compilation_units.rawsh.sexp
    ../examples/code/front-end/indent_follow_on_function.sh.sexp
    ../examples/code/front-end/indent_follow_on_function_fixed.sh.sexp
    ../examples/code/front-end/infer_typedef.sh.sexp
    ../examples/code/front-end/install_ocp_index.rawsh.sexp
    ../examples/code/front-end/let_notunit.ml.sexp
    ../examples/code/front-end/let_unit.syntax.sexp
    ../examples/code/front-end/non_principal.ml.sexp
    ../examples/code/front-end/parsetree_typedef.sh.sexp
    ../examples/code/front-end/principal.ml.sexp
    ../examples/code/front-end/process_comparelib_interface.sh.sexp
    ../examples/code/front-end/process_comparelib_test.sh.sexp
    ../examples/code/front-end/short_paths_1.rawsh.sexp
    ../examples/code/front-end/short_paths_2.rawsh.sexp
    ../examples/code/front-end/short_paths_3.rawsh.sexp
    ../examples/code/front-end/type_conv_example.ml.sexp
    ../examples/code/front-end/typedef.ml.sexp
    ../examples/code/front-end/typedef_objinfo.sh.sexp
    ../examples/code/front-end/typedtree_typedef.sh.sexp
    ../examples/code/front-end/unused_var.ml.sexp
    ../examples/code/ocp-index/index_ncurses.sh.sexp
    ../examples/code/packing/build_test.sh.sexp
    ../examples/code/packing/show_files.sh.sexp
    ../examples/code/packing/test.ml.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (23-compiler-backend.html))))

(rule (
  (targets (23-compiler-backend.html))
  (deps (
    ../book/23-compiler-backend.html
    ../bin/bin/app.exe
    ../examples/code/back-end-embed/build_embed.sh.sexp
    ../examples/code/back-end-embed/build_embed_binary.rawsh.sexp
    ../examples/code/back-end-embed/build_embed_c.sh.sexp
    ../examples/code/back-end-embed/build_embed_native.rawsh.sexp
    ../examples/code/back-end-embed/embed_me1.ml.sexp
    ../examples/code/back-end-embed/embed_me2.ml.sexp
    ../examples/code/back-end-embed/link_custom.rawsh.sexp
    ../examples/code/back-end-embed/link_dllib.rawsh.sexp
    ../examples/code/back-end-embed/main.c.sexp
    ../examples/code/back-end-embed/run_debug_hello.sh.sexp
    ../examples/code/back-end/alternate_list/alternate_list.ml.sexp
    ../examples/code/back-end/alternate_list/jbuild.sexp
    ../examples/code/back-end/alternate_list/run_alternate_list.sh.sexp
    ../examples/code/back-end/asm_from_compare_mono.sh.sexp
    ../examples/code/back-end/bench_patterns/bench_patterns.ml.sexp
    ../examples/code/back-end/bench_patterns/jbuild.sexp
    ../examples/code/back-end/bench_patterns/run_bench_patterns.sh.sexp
    ../examples/code/back-end/bench_poly_and_mono/bench_poly_and_mono.ml.sexp
    ../examples/code/back-end/bench_poly_and_mono/jbuild.sexp
    ../examples/code/back-end/bench_poly_and_mono/run_bench_poly_and_mono.sh.sexp
    ../examples/code/back-end/cmp.S.sexp
    ../examples/code/back-end/compare_mono.ml.sexp
    ../examples/code/back-end/compare_poly.ml.sexp
    ../examples/code/back-end/compare_poly_asm.S.sexp
    ../examples/code/back-end/gdb_alternate0.rawsh.sexp
    ../examples/code/back-end/gdb_alternate1.rawsh.sexp
    ../examples/code/back-end/gdb_alternate2.rawsh.sexp
    ../examples/code/back-end/gdb_alternate3.rawsh.sexp
    ../examples/code/back-end/instr_for_pattern_monomorphic_small.sh.sexp
    ../examples/code/back-end/lambda_for_pattern_monomorphic_large.sh.sexp
    ../examples/code/back-end/lambda_for_pattern_monomorphic_small.sh.sexp
    ../examples/code/back-end/lambda_for_pattern_polymorphic.sh.sexp
    ../examples/code/back-end/opam_switch.rawsh.sexp
    ../examples/code/back-end/pattern_monomorphic_large.ml.sexp
    ../examples/code/back-end/pattern_monomorphic_small.ml.sexp
    ../examples/code/back-end/pattern_polymorphic.ml.sexp
    ../examples/code/back-end/perf_record.rawsh.sexp
    ../examples/code/back-end/perf_report.rawsh.sexp))
  (action (
    run rwo-build build chapter -o . -code ../examples -repo-root .. ${<}))))

(alias ((name site) (deps (faqs.html))))

(rule (
  (targets (faqs.html))
  (deps (../book/faqs.html ../bin/bin/app.exe))
  (action (run rwo-build build faqs -o . -repo-root ..))))

(alias ((name site) (deps (index.html))))

(rule (
  (targets (index.html))
  (deps (../book/index.html ../bin/bin/app.exe))
  (action (run rwo-build build index -o . -repo-root ..))))

(alias ((name site) (deps (install.html))))

(rule (
  (targets (install.html))
  (deps (../book/install.html ../bin/bin/app.exe))
  (action (run rwo-build build install -o . -repo-root ..))))

(alias ((name site) (deps (toc.html))))

(rule (
  (targets (toc.html))
  (deps (../book/toc.html ../bin/bin/app.exe))
  (action (run rwo-build build toc -o . -repo-root ..))))

