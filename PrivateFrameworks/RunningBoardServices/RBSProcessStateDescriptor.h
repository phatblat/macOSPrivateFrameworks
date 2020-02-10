//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"
#import "NSCopying.h"

@class NSArray, NSSet, NSString;

@interface RBSProcessStateDescriptor : NSObject <BSXPCSecureCoding, NSCopying>
{
    NSSet *_endowmentNamespaces;
    unsigned long long _values;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)descriptor;
@property(nonatomic) unsigned long long values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (void)filterState:(id)arg1;
- (id)_endowmentNamespaces;
@property(copy, nonatomic) NSArray *endowmentNamespaces;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
