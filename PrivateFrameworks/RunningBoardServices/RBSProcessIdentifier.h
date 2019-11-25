//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "RBSProcessIdentifier.h"

@class NSString;

@interface RBSProcessIdentifier : NSObject <BSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding, NSCopying>
{
    NSString *_description;
    int _pid;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)identifierForIdentifier:(id)arg1;
+ (id)identifierForCurrentProcess;
+ (id)identifierWithPid:(int)arg1;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)arg1;
- (int)rbs_pid;
- (id)initWithPid:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

