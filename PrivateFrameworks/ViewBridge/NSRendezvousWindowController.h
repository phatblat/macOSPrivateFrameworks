//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSRendezvousWindowController : NSServiceViewController
{
    NSString *_identifier;
    NSSet *_bridgeKeys;
}

+ (id)controllerForIdentifier:(id)arg1;
+ (id)controllerForWindow:(id)arg1;
+ (id)bridgeKeysForWindowBase:(unsigned char)arg1;
+ (id)bridgeKeys;
+ (void)addBridgeKeys:(id)arg1;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (BOOL)_isSecondary;
- (unsigned long long)awakeFromRemoteView;
- (id)objectToObserveForKey:(id)arg1 withWindow:(id)arg2;
- (void)loadView;
- (void)windowWillOrder:(long long)arg1 relativeTo:(long long)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (void)releaseIvars;

@end

