//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HMDSiriServerSessionInfo : NSObject
{
    BOOL _didBulkSendSessionFail;
    BOOL _didBulkSendSessionComplete;
    BOOL _didSiriSessionStart;
    BOOL _didSiriSessionStop;
    id <HMDDataStreamBulkSendSession> _bulkSendSession;
    NSString *_identifier;
}

@property(nonatomic) BOOL didSiriSessionStop; // @synthesize didSiriSessionStop=_didSiriSessionStop;
@property(nonatomic) BOOL didSiriSessionStart; // @synthesize didSiriSessionStart=_didSiriSessionStart;
@property(nonatomic) BOOL didBulkSendSessionComplete; // @synthesize didBulkSendSessionComplete=_didBulkSendSessionComplete;
@property(nonatomic) BOOL didBulkSendSessionFail; // @synthesize didBulkSendSessionFail=_didBulkSendSessionFail;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <HMDDataStreamBulkSendSession> bulkSendSession; // @synthesize bulkSendSession=_bulkSendSession;
- (void).cxx_destruct;
- (BOOL)isSiriSessionActive;
- (BOOL)isBulkSendActive;
- (id)description;

@end
