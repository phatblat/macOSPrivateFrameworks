//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSSet;

@interface RBInheritanceCollection : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    NSDictionary *_inheritancesByEnvironment;
    NSSet *_inheritances;
    NSSet *_namespaces;
}

+ (id)collectionWithInheritances:(id)arg1;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (id)allNamespaces;
- (id)inheritancesForEnvironment:(id)arg1;
- (id)allInheritances;
- (id)allEnvironments;
- (id)_initWithCollection:(id)arg1;
- (id)_initWithInheritances:(id)arg1;

@end
