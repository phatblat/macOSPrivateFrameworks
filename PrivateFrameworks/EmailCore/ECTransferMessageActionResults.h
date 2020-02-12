//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmailCore/ECLocalMessageActionResults.h>

#import "ECTransferMessageActionResultsBuilder.h"

@class NSArray, NSDictionary, NSError, NSString;

@interface ECTransferMessageActionResults : ECLocalMessageActionResults <ECTransferMessageActionResultsBuilder>
{
    long long _phaseForResults;
    NSArray *_completedItems;
    NSArray *_failedItems;
    NSArray *_createdServerMessages;
    NSDictionary *_downloadedDataByCopyItems;
}

@property(copy, nonatomic) NSDictionary *downloadedDataByCopyItems; // @synthesize downloadedDataByCopyItems=_downloadedDataByCopyItems;
@property(copy, nonatomic) NSArray *createdServerMessages; // @synthesize createdServerMessages=_createdServerMessages;
@property(copy, nonatomic) NSArray *failedItems; // @synthesize failedItems=_failedItems;
@property(copy, nonatomic) NSArray *completedItems; // @synthesize completedItems=_completedItems;
@property(nonatomic) long long phaseForResults; // @synthesize phaseForResults=_phaseForResults;
- (void).cxx_destruct;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

