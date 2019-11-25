//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct flock {
    long long _field1;
    long long _field2;
    int _field3;
    short _field4;
    short _field5;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct tagPLImageTableMemoryPool {
    struct {
        void *_field1;
        long long _field2;
    } _field1;
    unsigned long long _field2;
    int _field3;
    void *_field4;
    void *_field5;
    unsigned long long _field6;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    int _field1;
    struct CGSize _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    unsigned int _field5;
    int _field6;
    int _field7;
    double _field8[4];
    double _field9[4];
    unsigned int _field10;
} CDStruct_e5ce1f5a;

