//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet;

@interface BTMLoginItemController : NSObject
{
    id _internalItems;
    id _internalQueue;
    id _delegate;
    unsigned long long _typeMask;
}

@property(readonly) unsigned long long typeMask; // @synthesize typeMask=_typeMask;
@property(readonly) __weak id <BTMLoginItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSSet *_items; // @synthesize _items=_internalItems;
- (void).cxx_destruct;
- (void)_notifyDidChangeItems;
- (void)_setLoginItems:(id)arg1;
- (void)fetchLoginItems;
- (void)handleLoginItemsChangeNotification:(id)arg1;
@property(readonly) NSSet *items; // @dynamic items;
- (void)removeLoginItem:(id)arg1;
- (void)addLoginItem:(id)arg1;
- (void)dealloc;
- (id)initWithTypeMask:(unsigned long long)arg1 delegate:(id)arg2;

@end

