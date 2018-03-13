//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WBSCompletionQuery, WBSParsecSearchResult;

@protocol WBSParsecSearchSession <NSObject>
@property(readonly, nonatomic) id <WBSParsecFeedbackDispatcher> feedbackDispatcher;
@property(nonatomic, setter=setUIScale:) double uiScale;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(retain, nonatomic) WBSCompletionQuery *currentQuery;
@property(nonatomic) __weak id <WBSParsecSearchSessionDelegate> delegate;
- (void)fetchCardDetailsForResult:(WBSParsecSearchResult *)arg1 completionBlock:(void (^)(WBSParsecSearchResult *, NSError *))arg2;
@end

