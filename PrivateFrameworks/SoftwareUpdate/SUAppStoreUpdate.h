//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSAttributedString, NSDate, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL, NSXPCConnection, SUUpdateProduct;

@interface SUAppStoreUpdate : NSObject <NSSecureCoding>
{
    SUUpdateProduct *_product;
    NSError *_updateError;
    long long _lastState;
    NSObject<OS_dispatch_queue> *_q;
    NSString *_longDescriptionString;
    NSXPCConnection *_connection;
}

+ (BOOL)_connectToService;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *longDescriptionString; // @synthesize longDescriptionString=_longDescriptionString;
- (id)initWithProductKey:(id)arg1 title:(id)arg2 longDescription:(id)arg3;
@property(readonly) BOOL canRetry;
@property(readonly, retain) NSError *updateError;
@property(readonly, retain) NSArray *applicationIdentifiersToClose;
@property(readonly, retain) NSURL *customURLForPostInstallNotification;
@property(readonly, retain) NSString *customTextForPostInstallNotification;
@property(readonly, retain) NSString *customTitleForPostInstallNotification;
@property(readonly) BOOL showPostInstallNotification;
@property(readonly) long long autoInstallWithDelayInHours;
@property(readonly) BOOL isCritical;
@property(readonly) BOOL allowedToUseInstallLater;
@property(readonly) NSDate *adminDeferredToDate;
@property(readonly) BOOL isAdminDeferred;
@property(readonly) BOOL isRamped;
@property(readonly) BOOL isRecommended;
@property(readonly, retain) id auxInfo;
@property(readonly, retain) NSDate *deferredUntilDate;
@property(readonly, retain) NSArray *tags;
@property(readonly, retain) NSString *productKey;
@property(readonly, retain) NSAttributedString *firmwareWarning;
@property(readonly, retain) NSAttributedString *licenseAgreement;
@property(readonly, retain) NSString *currentLocalization;
@property(readonly) long long action;
@property(readonly, retain) NSString *longDescription;
@property(readonly, retain) NSString *versionString;
@property(readonly, retain) NSString *title;
- (id)description;
- (void)_setCurrentStatus:(id)arg1;
- (void)_setProduct:(id)arg1;
- (id)_product;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithProduct:(id)arg1;

@end

