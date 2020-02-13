class E0 { public: int id; E0() : id(0) {}; };
void f10() {throw E0();}
class E10 { public: int id; E10() : id(0) {}; };
class E9 { public: int id; E9() : id(0) {}; };
class E8 { public: int id; E8() : id(0) {}; };
class E7 { public: int id; E7() : id(0) {}; };
class E6 { public: int id; E6() : id(0) {}; };
class E5 { public: int id; E5() : id(0) {}; };
class E4 { public: int id; E4() : id(0) {}; };
class E3 { public: int id; E3() : id(0) {}; };
class E2 { public: int id; E2() : id(0) {}; };
class E1 { public: int id; E1() : id(0) {}; };
void f9() {try {f10();} catch(E10& e) {throw E9();}}
void f8() {try {f9();} catch(E9& e) {throw E8();}}
void f7() {try {f8();} catch(E8& e) {throw E7();}}
void f6() {try {f7();} catch(E7& e) {throw E6();}}
void f5() {try {f6();} catch(E6& e) {throw E5();}}
void f4() {try {f5();} catch(E5& e) {throw E4();}}
void f3() {try {f4();} catch(E4& e) {throw E3();}}
void f2() {try {f3();} catch(E3& e) {throw E2();}}
void f1() {try {f2();} catch(E2& e) {throw E1();}}
void f0() {try {f1();} catch(E0& e) {};}
void g10() {throw E0();}
void g9() {try {g10();} catch(E0& e) {if (e.id!=5) throw;}}
void g8() {try {g9();} catch(E0& e) {if (e.id!=5) throw;}}
void g7() {try {g8();} catch(E0& e) {if (e.id!=5) throw;}}
void g6() {try {g7();} catch(E0& e) {if (e.id!=5) throw;}}
void g5() {try {g6();} catch(E0& e) {if (e.id!=5) throw;}}
void g4() {try {g5();} catch(E0& e) {if (e.id!=5) throw;}}
void g3() {try {g4();} catch(E0& e) {if (e.id!=5) throw;}}
void g2() {try {g3();} catch(E0& e) {if (e.id!=5) throw;}}
void g1() {try {g2();} catch(E0& e) {if (e.id!=5) throw;}}
void g0() {try {g1();} catch(E0& e) {};}
