//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding>
{
    BOOL _highPriority;
    BOOL _cancelled;
    CPLResource *_resource;
    NSString *_taskIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isHighPriority) BOOL highPriority; // @synthesize highPriority=_highPriority;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(retain, nonatomic) CPLResource *resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)cancelTask;
- (void)launch;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;

@end

