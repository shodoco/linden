main() { /* union floatint { float f; int d;} u; u.f = 0.0; printf("u.f = %f, u.d = %d\n", u.f, u.d); */ float f = 0.0; printf("float 0.0f retrieved as integer %d\n", *((int*)&f)); }
