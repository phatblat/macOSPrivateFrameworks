//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMConnectionMonitor, IMRemoteURLConnection, NSArray, NSData, NSDate, NSDictionary, NSMutableURLRequest, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface IDSServerBag : NSObject
{
    BOOL _allowSelfSignedCertificates;
    BOOL _allowUnsignedBags;
    int _trustStatus;
    int _token;
    IMConnectionMonitor *_connectionMonitor;
    NSURL *_bagURL;
    NSString *_apsEnvironmentName;
    NSDictionary *_bag;
    NSDictionary *_cachedBag;
    NSMutableURLRequest *_urlRequest;
    IMRemoteURLConnection *_remoteURLConnection;
    NSObject<OS_dispatch_queue> *_bagQueue;
    NSString *_cachedURLString;
    NSData *_certData;
    NSString *_cachedHash;
    NSDate *_loadDate;
    NSNumber *_cacheTime;
    unsigned long long _hasPairedDeviceState;
    NSData *_serverSignature;
    NSArray *_serverCerts;
    NSData *_serverGivenBag;
}

+ (id)_bagCreationLock;
+ (id)defaultBag;
+ (id)sharedInstanceForBagType:(long long)arg1;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)sharedInstance;
@property(retain) NSData *serverGivenBag; // @synthesize serverGivenBag=_serverGivenBag;
@property(retain) NSArray *serverCerts; // @synthesize serverCerts=_serverCerts;
@property(retain) NSData *serverSignature; // @synthesize serverSignature=_serverSignature;
@property unsigned long long hasPairedDeviceState; // @synthesize hasPairedDeviceState=_hasPairedDeviceState;
@property int token; // @synthesize token=_token;
@property BOOL allowUnsignedBags; // @synthesize allowUnsignedBags=_allowUnsignedBags;
@property BOOL allowSelfSignedCertificates; // @synthesize allowSelfSignedCertificates=_allowSelfSignedCertificates;
@property(retain) NSNumber *_cacheTime; // @synthesize _cacheTime;
@property(retain) NSDate *_loadDate; // @synthesize _loadDate;
@property(retain, setter=_setCachedHash:) NSString *_cachedHash; // @synthesize _cachedHash;
@property(retain) NSData *_certData; // @synthesize _certData;
@property(setter=_setTrustStatus:) int _trustStatus; // @synthesize _trustStatus;
@property(retain, setter=_setCachedURLString:) NSString *_cachedURLString; // @synthesize _cachedURLString;
@property(retain) NSObject<OS_dispatch_queue> *_bagQueue; // @synthesize _bagQueue;
@property(retain) IMRemoteURLConnection *_remoteURLConnection; // @synthesize _remoteURLConnection;
@property(retain) NSMutableURLRequest *_urlRequest; // @synthesize _urlRequest;
@property(retain, setter=_setCachedBag:) NSDictionary *_cachedBag; // @synthesize _cachedBag;
@property(retain, setter=_setBag:) NSDictionary *_bag; // @synthesize _bag;
@property(retain) NSString *apsEnvironmentName; // @synthesize apsEnvironmentName=_apsEnvironmentName;
@property(retain) NSURL *bagURL; // @synthesize bagURL=_bagURL;
@property(retain) IMConnectionMonitor *_connectionMonitor; // @synthesize _connectionMonitor;
- (void).cxx_destruct;
- (void)connectionMonitorDidUpdate:(id)arg1;
@property(readonly) BOOL isServerAvailable;
- (id)urlWithKey:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly) BOOL isInDebilitatedMode;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL isLoading;
- (void)forceBagLoad;
- (void)startBagLoad;
- (void)_startBagLoad:(BOOL)arg1;
- (void)_cancelCurrentLoad;
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(BOOL)arg3;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id *)arg2;
- (BOOL)trustRefFromCertificates:(id)arg1 trustRef:(struct __SecTrust **)arg2;
- (BOOL)_allowInvalid;
- (void)_invalidate;
- (BOOL)_loadFromDictionary:(id)arg1 returningError:(id *)arg2;
- (void)dealloc;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(BOOL)arg3 allowUnsignedBags:(BOOL)arg4;
- (void)_generateURLRequest;
- (BOOL)shouldForceDevicesToCarry;
- (void)_bagExternallyReloaded;
- (void)_saveToCache;
- (void)_saveCacheToPrefs;
- (void)__saveCacheToPrefs;
- (void)_loadFromCache;
- (void)_clearCache;
- (id)_bagDefaultsDomain;

@end
