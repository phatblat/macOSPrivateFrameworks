//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SGDSuggestManagerBaseProtocol.h"
#import "_SGDSuggestManagerContactsConfirmRejectProtocol.h"
#import "_SGDSuggestManagerEventsConfirmRejectProtocol.h"

@class CSSearchableItem, NSArray, NSString;

@protocol SGDSuggestManagerMessagesProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)harvestedSuggestionsFromMessages:(NSArray *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(SGXPCResponse3 *))arg4;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(SGXPCResponse3 *))arg4;
- (void)suggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(SGXPCResponse3 *))arg3;
@end

