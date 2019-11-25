//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RunningBoardServices/RBSAttribute.h>

@class NSString;

@interface RBSDomainAttribute : RBSAttribute
{
    NSString *_domain;
    NSString *_name;
    NSString *_sourceEnvironment;
}

+ (id)attributeWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3;
+ (id)attributeWithDomain:(id)arg1 name:(id)arg2;
@property(copy, nonatomic) NSString *sourceEnvironment; // @synthesize sourceEnvironment=_sourceEnvironment;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *fullyQualifiedName;

@end

