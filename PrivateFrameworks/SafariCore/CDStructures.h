//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct RawData {
    _Bool _field1;
    void *_field2;
    int _field3;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int timestamp:1;
} CDStruct_b5306035;

// Ambiguous groups
typedef struct {
    unsigned int timestamp:1;
    unsigned int button:1;
    unsigned int usedLongTap:1;
} CDStruct_9b2e609f;

typedef struct {
    unsigned int timestamp:1;
    unsigned int category:1;
    unsigned int formProperty:1;
} CDStruct_18b2ecd0;

typedef struct {
    unsigned int timestamp:1;
    unsigned int action:1;
} CDStruct_399b966a;

typedef struct {
    unsigned int timestamp:1;
    unsigned int method:1;
} CDStruct_64f0786c;
