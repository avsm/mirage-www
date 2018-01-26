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

