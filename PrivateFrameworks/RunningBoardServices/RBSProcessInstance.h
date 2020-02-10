//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"
#import "NSCopying.h"
#import "RBSProcessIdentifier.h"
#import "RBSProcessMatching.h"

@class NSString, RBSProcessIdentifier, RBSProcessIdentity;

@interface RBSProcessInstance : NSObject <RBSProcessMatching, RBSProcessIdentifier, NSCopying, BSXPCSecureCoding>
{
    RBSProcessIdentity *_identity;
    RBSProcessIdentifier *_identifier;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)instanceWithIdentifier:(id)arg1 identity:(id)arg2;
@property(readonly, nonatomic) RBSProcessIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) RBSProcessIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)arg1;
- (int)rbs_pid;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)_initWithIdentifier:(id)arg1 identity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
