//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct CVSMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct NSDictionary {
    Class _field1;
};

struct NSObject {
    Class _field1;
};

struct PFAsyncDispatchMulticaster {
    Class _field1;
};

struct PFIntPoint_st {
    long long _field1;
    long long _field2;
};

struct PFIntRect_st {
    struct PFIntPoint_st _field1;
    struct PFIntSize_st _field2;
};

struct PFIntSize_st {
    unsigned long long width;
    unsigned long long height;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long width;
    unsigned long long height;
} CDStruct_5e758c1a;

typedef struct {
    double sx;
    double sy;
    double r;
    double tx;
    double ty;
} CDStruct_921a3ed4;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    float r;
    float g;
    float b;
} CDStruct_3ac9af65;

typedef struct {
    float min;
    float max;
} CDStruct_84af802f;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long renderOrientation;
    long long displayOrientation;
} CDStruct_19170857;

typedef struct {
    unsigned int _field1;
    int _field2;
    long long _field3;
    unsigned long long _field4;
    double _field5;
    long long _field6;
    struct CVSMPTETime _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} CDStruct_e50ab651;

typedef struct {
    CDStruct_84af802f _field1;
    CDStruct_84af802f _field2;
    CDStruct_84af802f _field3;
} CDStruct_45e26d3d;

typedef struct {
    CDStruct_198678f7 _field1;
    CDStruct_198678f7 _field2;
} CDStruct_3c1748cc;

typedef struct {
    CDStruct_19170857 _field1;
    CDStruct_19170857 _field2;
} CDStruct_c3523bfd;

typedef struct {
    struct PFIntSize_st size;
    long long orientation;
} CDStruct_d459ca48;

typedef struct {
    union {
        CDStruct_818bb265 _field1;
        CDStruct_818bb265 _field2;
    } _field1;
} CDStruct_09d07adb;

typedef struct {
    CDStruct_09d07adb _field1;
    CDStruct_09d07adb _field2;
    CDStruct_09d07adb _field3;
    CDStruct_09d07adb _field4;
} CDStruct_183abd6b;

