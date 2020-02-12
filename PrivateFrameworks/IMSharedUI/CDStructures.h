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

struct IMBalloonDescriptor_t {
    char _field1;
    char _field2;
    char _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    char _field6;
    char _field7;
};

struct IMTextLayoutResults {
    struct CGSize _field1;
    char _field2;
};

struct NSCollectionView {
    Class _field1;
};

struct NSColor {
    Class _field1;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct NSImage {
    Class _field1;
};

struct NSView {
    Class _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    id _field4;
    id _field5;
    id _field6;
    struct __VFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :5;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :6;
        unsigned int :1;
        unsigned int :1;
    } _field7;
};

