//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSString;

@interface UIREvent : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *properties;
    struct __CGEvent *_cgEvent;
    NSString *_processName;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)needsProcessToGenerateCGEvent;
- (struct __CGEvent *)cgEventToPostToProcess:(id)arg1 withLastEvent:(id)arg2 withLastCGEvent:(struct __CGEvent *)arg3 error:(id *)arg4;
- (double)timeIntervalSinceStartup;
- (BOOL)isMouseUpEvent;
- (BOOL)isMouseDownEvent;
- (BOOL)isShiftKeyDown;
- (BOOL)isKeyUpEvent;
- (BOOL)isKeyDownEvent;
- (id)unicodeString;
- (unsigned long long)cgFlags;
- (unsigned int)cgType;
- (id)description;
- (struct __CGEvent *)cgEvent;
- (void)setProcessName:(id)arg1;
- (id)processName;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCGEvent:(struct __CGEvent *)arg1;
- (id)initWithCGEvent:(struct __CGEvent *)arg1 withProcess:(id)arg2;
- (BOOL)isUIREvent__;

@end

