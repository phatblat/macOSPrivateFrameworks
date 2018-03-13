//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface BRCPersistedState : NSObject <NSObject, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_assertionQueue;
}

+ (id)loadFromClientStateInSession:(id)arg1;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *assertionQueue; // @synthesize assertionQueue=_assertionQueue;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)assertQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

