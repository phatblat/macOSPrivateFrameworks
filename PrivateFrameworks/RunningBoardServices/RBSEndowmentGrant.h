//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RunningBoardServices/RBSGrant.h>

@class NSObject<OS_xpc_object>, NSString;

@interface RBSEndowmentGrant : RBSGrant
{
    struct NSString *_endowmentNamespace;
    NSObject<OS_xpc_object> *_encodedEndowment;
}

+ (id)grantWithNamespace:(id)arg1 endowment:(struct NSObject *)arg2;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // @synthesize encodedEndowment=_encodedEndowment;
@property(readonly, copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
