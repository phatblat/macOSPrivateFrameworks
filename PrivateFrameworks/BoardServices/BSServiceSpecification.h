//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"

@class NSString;

@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding>
{
    NSString *_identifier;
    BOOL _launchWhitelisted;
    BOOL _derived;
}

@property(readonly, nonatomic, getter=isDerived) BOOL derived; // @synthesize derived=_derived;
@property(readonly, nonatomic, getter=isLaunchWhitelisted) BOOL launchWhitelisted; // @synthesize launchWhitelisted=_launchWhitelisted;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_initWithIdentifier:(id)arg1 launchWhitelisted:(BOOL)arg2 derived:(BOOL)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

