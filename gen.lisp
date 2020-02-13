
(defun generate-code-cxx (num stream)
  (format stream "void f~a() {throw E0();}~%" num)
  (loop for xx from (1- num) downto 0        do (format stream "class E~a { public: int id; E~a() : id(0) {}; };~%" (1+ xx) (1+ xx))
        )
  (loop for xx from (1- num) downto 1
        do (format stream "void f~a() {try {f~a();} catch(E~a& e) {throw E~a();}}~%" xx (1+ xx) (1+ xx) xx))
  (format stream "void f0() {try {f1();} catch(E0& e) {};}~%")
)



(defun generate-code-cl (num stream)
  (format stream "void g~a() {throw E0();}~%" num)
  (loop for xx from (1- num) downto 1
        do (format stream "void g~a() {try {g~a();} catch(E0& e) {if (e.id!=5) throw;}}~%" xx (1+ xx)))
  (format stream "void g0() {try {g1();} catch(E0& e) {};}~%")
)


(defun generate-code (num stream)
  (format stream "class E~a { public: int id; E~a() : id(0) {}; };~%" 0 0)
  (generate-code-cxx num stream)
  (generate-code-cl num stream))




(defun generate-all (&optional (num 10))
  (with-open-file (fout "/Users/meister/Development/test/unwind/unwindf.cc" :direction :output) (generate-code num fout)))
