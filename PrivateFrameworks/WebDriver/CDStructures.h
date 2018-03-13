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
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct InspectorObject;

struct InspectorValue;

struct NSString {
    Class _field1;
};

struct Ref<Inspector::InspectorObject> {
    struct InspectorObject *_field1;
};

struct RefPtr<Inspector::InspectorValue> {
    struct InspectorValue *_field1;
};

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
typedef struct Ref<Inspector::InspectorObject> {
    struct InspectorObject *_field1;
} Ref_6b71ca39;

typedef struct RefPtr<Inspector::InspectorValue> {
    struct InspectorValue *_field1;
} RefPtr_47980b30;

