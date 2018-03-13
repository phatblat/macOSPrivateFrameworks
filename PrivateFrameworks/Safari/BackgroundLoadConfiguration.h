//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BackgroundLoadConfiguration : NSObject
{
    BOOL _allowAccessToKeychain;
    BOOL _allowRemoteInspection;
    BOOL _includeToolbars;
    BOOL _cancelExistingLoadsWithSameURL;
    BOOL _copyInitialSessionState;
    BOOL _setUpParentTabBackItem;
    NSString *_httpReferrer;
}

@property(nonatomic) BOOL setUpParentTabBackItem; // @synthesize setUpParentTabBackItem=_setUpParentTabBackItem;
@property(nonatomic) BOOL copyInitialSessionState; // @synthesize copyInitialSessionState=_copyInitialSessionState;
@property(nonatomic) BOOL cancelExistingLoadsWithSameURL; // @synthesize cancelExistingLoadsWithSameURL=_cancelExistingLoadsWithSameURL;
@property(nonatomic) BOOL includeToolbars; // @synthesize includeToolbars=_includeToolbars;
@property(nonatomic) BOOL allowRemoteInspection; // @synthesize allowRemoteInspection=_allowRemoteInspection;
@property(nonatomic) BOOL allowAccessToKeychain; // @synthesize allowAccessToKeychain=_allowAccessToKeychain;
@property(copy, nonatomic) NSString *httpReferrer; // @synthesize httpReferrer=_httpReferrer;
- (void).cxx_destruct;

@end

