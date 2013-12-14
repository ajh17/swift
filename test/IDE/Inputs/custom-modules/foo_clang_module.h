#import <foo_clang_dep_module.h>

// Types.
enum FooEnum1 { FooEnum1X };
enum FooEnum2 { FooEnum2X, FooEnum2Y };
enum FooEnum3 { FooEnum3X = 10, FooEnum3Y = 20 };

struct FooStruct1 {
  int x;
  double y;
};

typedef struct FooStruct2 {
  int x;
  double y;
} FooStructTypedef1;

typedef struct {
  int x;
  double y;
} FooStructTypedef2;

typedef struct FooStruct3 {
  int x;
  double y;
} FooStruct3;

struct FooStruct4 {
  int x;
  double y;
};
typedef struct FooStruct4 FooStruct4;

struct FooStruct5;
typedef struct FooStruct5 FooStruct5;
struct FooStruct5 {
  int x;
  double y;
};

typedef struct FooStruct6 FooStruct6;
struct FooStruct6 {
  int x;
  double y;
};


typedef int FooTypedef1;

extern int fooIntVar;

int fooFunc1(int a);
int fooFunc1AnonymousParam(int);
int fooFunc3(int a, float b, double c, int *d);

int redeclaredInMultipleModulesFunc1(int a);

@interface FooClass {
  int fooIntIvar;
}

@property int fooProperty;

- (void) fooInstanceFunc0;
- (void) fooInstanceFunc1:(int)a;
- (void) fooInstanceFunc2:(int)a withB:(int)b;

+ (void) fooClassFunc0;
@end

@class BarForwardDeclaredClass;

#define FOO_MACRO_1 0
#define FOO_MACRO_2 1
#define FOO_MACRO_3 (-1)
#define FOO_MACRO_4 0xffffffffu
#define FOO_MACRO_5 0xffffffffffffffffull

