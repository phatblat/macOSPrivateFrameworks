//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitHostAppServices/UHASRemoteObject.h>

#import "UHATouchBarInterface.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface UHASTouchBar : UHASRemoteObject <UHATouchBarInterface>
{
    NSString *_principalItemIdentifier;
    NSSet *_templateItems;
    BOOL _allowsCustomization;
    NSString *_identifier;
    NSArray *_itemIdentifiers;
    CDUnknownBlockType _changeHandler;
    CDUnknownBlockType _itemChangeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType itemChangeHandler; // @synthesize itemChangeHandler=_itemChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(nonatomic) BOOL allowsCustomization; // @synthesize allowsCustomization=_allowsCustomization;
@property(retain, nonatomic) NSSet *templateItems; // @synthesize templateItems=_templateItems;
@property(retain, nonatomic) NSString *principalItemIdentifier; // @synthesize principalItemIdentifier=_principalItemIdentifier;
@property(copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) const struct __CFString *forwardingInterposableRunLoopMode;
@property(readonly, nonatomic) double forwardingInterposableRunLoopTimeOut;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long rock_invocationFlags;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *rock_invocationQueue;
@property(readonly) Class superclass;

@end

