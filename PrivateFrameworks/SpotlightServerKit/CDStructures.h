//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct mach_msg_dispatch_link {
    struct mig_subsystem *_field1;
    unsigned int _field2;
    struct mach_msg_dispatch_link *_field3;
};

struct mig_subsystem;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    int _field6;
} CDStruct_c91b0553;

typedef struct {
    unsigned long long tokenId;
} CDStruct_5e0e920e;

