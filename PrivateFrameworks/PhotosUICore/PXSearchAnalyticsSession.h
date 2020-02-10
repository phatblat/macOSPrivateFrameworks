//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXSearchActiveSearch;

@interface PXSearchAnalyticsSession : NSObject
{
    BOOL _isValid;
    BOOL _userInteractedWithCurrentSearch;
    BOOL _successful;
    unsigned long long _beginType;
    double _startTime;
    double _timeIntervalSuccess;
    double _timeIntervalFirstAssetAction;
    double _timeIntervalFirstOneUpInTopAssets;
    double _timeIntervalFirstEnteredCollection;
    unsigned long long _numberOfSearches;
    unsigned long long _numberOfSearchesUntilFirstSuccess;
    unsigned long long _numberOfSearchesUntilFirstAssetAction;
    unsigned long long _numberOfSearchesUntilFirstOneUpInTopAssets;
    unsigned long long _numberOfSearchesUntilFirstEnteredCollection;
    unsigned long long _firstAssetActionType;
    unsigned long long _firstAssetActionResultType;
    unsigned long long _firstEnteredCollectionResultType;
    PXSearchActiveSearch *_lastSearch;
}

+ (id)cappedSearchCount:(unsigned long long)arg1;
+ (id)bucketedTimeInterval:(double)arg1;
+ (id)_stringForResultType:(unsigned long long)arg1;
+ (id)_stringForActionType:(unsigned long long)arg1;
+ (id)_stringForSessionBeginType:(unsigned long long)arg1;
@property(nonatomic) BOOL successful; // @synthesize successful=_successful;
@property(retain, nonatomic) PXSearchActiveSearch *lastSearch; // @synthesize lastSearch=_lastSearch;
@property(nonatomic) unsigned long long firstEnteredCollectionResultType; // @synthesize firstEnteredCollectionResultType=_firstEnteredCollectionResultType;
@property(nonatomic) unsigned long long firstAssetActionResultType; // @synthesize firstAssetActionResultType=_firstAssetActionResultType;
@property(nonatomic) unsigned long long firstAssetActionType; // @synthesize firstAssetActionType=_firstAssetActionType;
@property(nonatomic) unsigned long long numberOfSearchesUntilFirstEnteredCollection; // @synthesize numberOfSearchesUntilFirstEnteredCollection=_numberOfSearchesUntilFirstEnteredCollection;
@property(nonatomic) unsigned long long numberOfSearchesUntilFirstOneUpInTopAssets; // @synthesize numberOfSearchesUntilFirstOneUpInTopAssets=_numberOfSearchesUntilFirstOneUpInTopAssets;
@property(nonatomic) unsigned long long numberOfSearchesUntilFirstAssetAction; // @synthesize numberOfSearchesUntilFirstAssetAction=_numberOfSearchesUntilFirstAssetAction;
@property(nonatomic) unsigned long long numberOfSearchesUntilFirstSuccess; // @synthesize numberOfSearchesUntilFirstSuccess=_numberOfSearchesUntilFirstSuccess;
@property(nonatomic) unsigned long long numberOfSearches; // @synthesize numberOfSearches=_numberOfSearches;
@property(nonatomic) double timeIntervalFirstEnteredCollection; // @synthesize timeIntervalFirstEnteredCollection=_timeIntervalFirstEnteredCollection;
@property(nonatomic) double timeIntervalFirstOneUpInTopAssets; // @synthesize timeIntervalFirstOneUpInTopAssets=_timeIntervalFirstOneUpInTopAssets;
@property(nonatomic) double timeIntervalFirstAssetAction; // @synthesize timeIntervalFirstAssetAction=_timeIntervalFirstAssetAction;
@property(nonatomic) double timeIntervalSuccess; // @synthesize timeIntervalSuccess=_timeIntervalSuccess;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long beginType; // @synthesize beginType=_beginType;
@property(nonatomic) BOOL userInteractedWithCurrentSearch; // @synthesize userInteractedWithCurrentSearch=_userInteractedWithCurrentSearch;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
- (void).cxx_destruct;
- (void)_logSuccess;
- (void)logEnteredCollectionResult:(unsigned long long)arg1;
- (void)logOneUpInTopAssets;
- (void)logAssetAction:(unsigned long long)arg1 inResult:(unsigned long long)arg2;
- (void)logSearch:(id)arg1;
- (void)endAndInvalidateSession;
- (id)initWithBeginType:(unsigned long long)arg1;

@end
