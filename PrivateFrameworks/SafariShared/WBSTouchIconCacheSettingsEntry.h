//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSSiteMetadataImageCacheSettingsEntry.h"

@class NSColor, NSDate, NSString;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry>
{
    BOOL _lastRequestWasInUserLoadedWebpage;
    BOOL _iconInCache;
    BOOL _requestDidSucceed;
    BOOL _higherPriorityIconDownloadFailedDueToNetworkError;
    long long _databaseID;
    NSString *_host;
    NSString *_UUIDString;
    NSDate *_lastRequestDate;
    long long _requestCount;
    NSColor *_extractedColor;
    long long _transparencyAnalysisResult;
}

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9 UUIDString:(id)arg10;
@property(nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError; // @synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError;
@property(nonatomic) long long transparencyAnalysisResult; // @synthesize transparencyAnalysisResult=_transparencyAnalysisResult;
@property(retain, nonatomic) NSColor *extractedColor; // @synthesize extractedColor=_extractedColor;
@property(nonatomic) BOOL requestDidSucceed; // @synthesize requestDidSucceed=_requestDidSucceed;
@property(nonatomic, getter=isIconInCache) BOOL iconInCache; // @synthesize iconInCache=_iconInCache;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) BOOL lastRequestWasInUserLoadedWebpage; // @synthesize lastRequestWasInUserLoadedWebpage=_lastRequestWasInUserLoadedWebpage;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long downloadStatusFlags;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9 UUIDString:(id)arg10;
- (id)initWithSQLiteRow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

