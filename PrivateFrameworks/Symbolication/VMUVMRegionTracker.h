//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray;

@interface VMUVMRegionTracker : NSObject <NSSecureCoding>
{
    unsigned int _task;
    id <VMUStackLogReader> _stackLogReader;
    NSMutableArray *_regionInfoArray;
}

+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)vmRegionRangeInfoForRange:(struct _VMURange)arg1;
- (void)convertStackIDs:(CDUnknownBlockType)arg1;
- (unsigned long long)handleStackLogType:(unsigned int)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 stackID:(unsigned long long)arg4;
- (unsigned long long)_regionIndexForAddress:(unsigned long long)arg1;
@property(readonly) long long regionCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTask:(unsigned int)arg1 stackLogReader:(id)arg2;
- (id)initWithTask:(unsigned int)arg1;

@end

