//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSItemProvider.h"

@class SBLShareKitShareableItem;

@interface NSItemProvider (SBL)
+ (id)sbl_itemProviderWithAsset:(id)arg1 sessionGroup:(id)arg2 workerQueue:(id)arg3 replyQueue:(id)arg4;
- (void)sbl_registerLoadHandlers;
@property(retain, nonatomic) SBLShareKitShareableItem *sblItem;
@end
