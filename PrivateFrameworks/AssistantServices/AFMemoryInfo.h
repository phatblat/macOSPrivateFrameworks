//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding>
{
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _virtualMemorySizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long physicalMemoryFootprintInBytes; // @synthesize physicalMemoryFootprintInBytes=_physicalMemoryFootprintInBytes;
@property(readonly, nonatomic) unsigned long long peakResidentMemorySizeInBytes; // @synthesize peakResidentMemorySizeInBytes=_peakResidentMemorySizeInBytes;
@property(readonly, nonatomic) unsigned long long residentMemorySizeInBytes; // @synthesize residentMemorySizeInBytes=_residentMemorySizeInBytes;
@property(readonly, nonatomic) int pageSizeInBytes; // @synthesize pageSizeInBytes=_pageSizeInBytes;
@property(readonly, nonatomic) int numberOfRegions; // @synthesize numberOfRegions=_numberOfRegions;
@property(readonly, nonatomic) unsigned long long virtualMemorySizeInBytes; // @synthesize virtualMemorySizeInBytes=_virtualMemorySizeInBytes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

