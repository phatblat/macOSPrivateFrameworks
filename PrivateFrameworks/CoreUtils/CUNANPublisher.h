//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUNANServiceInfo, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CUNANPublisher : NSObject
{
    CDUnknownBlockType _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct NSMutableDictionary *_sessions;
    CUNANServiceInfo *_serviceInfo;
    struct LogCategory *_ucat;
    BOOL _dataPathEnabled;
    int _port;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_textInfo;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _dataSessionStartedHandler;
    CDUnknownBlockType _dataSessionEndedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dataSessionEndedHandler; // @synthesize dataSessionEndedHandler=_dataSessionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType dataSessionStartedHandler; // @synthesize dataSessionStartedHandler=_dataSessionStartedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) NSDictionary *textInfo; // @synthesize textInfo=_textInfo;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) BOOL dataPathEnabled; // @synthesize dataPathEnabled=_dataPathEnabled;
- (void).cxx_destruct;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

