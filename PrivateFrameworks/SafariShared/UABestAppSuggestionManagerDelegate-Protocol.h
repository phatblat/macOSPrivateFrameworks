//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UABestAppSuggestion;

@protocol UABestAppSuggestionManagerDelegate <NSObject>

@optional
- (void)connectionInterrupted;
- (void)bestAppSuggestionChanged:(UABestAppSuggestion *)arg1 withAdditionalSuggestions:(NSSet *)arg2;
- (void)bestAppSuggestionChanged:(UABestAppSuggestion *)arg1;
- (void)bestAppSuggestionMayHaveChanged;
@end

