//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SUTestValidator : NSObject
{
    NSDictionary *_productValidationsDict;
}

+ (id)sharedTestValidator;
- (unsigned long long)validationOverrideForProductKey:(id)arg1;
- (id)init;
- (void)_plistDidChange:(id)arg1;
- (void)_loadProductValidations;

@end

