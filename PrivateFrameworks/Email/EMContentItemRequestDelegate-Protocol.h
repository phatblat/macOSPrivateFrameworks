//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EMObjectID, NSArray;

@protocol EMContentItemRequestDelegate <NSObject>
- (void)contentObjectID:(EMObjectID *)arg1 placeholderHTMLForEmptyContentWithCompletionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)contentObjectID:(EMObjectID *)arg1 generateHTMLSnippetsForMailDropContentItems:(NSArray *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)contentObjectID:(EMObjectID *)arg1 generateHTMLSnippetsForRelatedContentItems:(NSArray *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
@end

