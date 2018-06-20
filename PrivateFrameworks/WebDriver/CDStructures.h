//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct Object;

struct Ref<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object>> {
    struct Object *_field1;
};

struct RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value>> {
    struct Value *_field1;
};

struct Value;

struct _DDRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct Ref<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object>> {
    struct Object *_field1;
} Ref_54ade189;

typedef struct RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value>> {
    struct Value *_field1;
} RefPtr_12c52547;

