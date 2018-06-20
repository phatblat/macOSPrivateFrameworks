//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface SafariWebGLLoadPolicyEntry : NSObject <NSCopying>
{
    BOOL _webPageIsOpen;
    BOOL _explicitlySetByUser;
    BOOL _explicitlySetByAdmin;
    BOOL _didShowSecurityAlertDialog;
    BOOL _managedByAdmin;
    int _loadPolicy;
    NSDate *_date;
    NSString *_host;
    NSDate *_lastVisitedDate;
    NSDate *_trustDialogDeferredDate;
}

+ (int)policyFromString:(id)arg1;
+ (id)stringFromPolicy:(int)arg1;
@property(nonatomic, getter=isManagedByAdmin) BOOL managedByAdmin; // @synthesize managedByAdmin=_managedByAdmin;
@property(nonatomic) BOOL didShowSecurityAlertDialog; // @synthesize didShowSecurityAlertDialog=_didShowSecurityAlertDialog;
@property(nonatomic, getter=isExplicitlySetByAdmin) BOOL explicitlySetByAdmin; // @synthesize explicitlySetByAdmin=_explicitlySetByAdmin;
@property(nonatomic, getter=isExplicitlySetByUser) BOOL explicitlySetByUser; // @synthesize explicitlySetByUser=_explicitlySetByUser;
@property(retain, nonatomic) NSDate *trustDialogDeferredDate; // @synthesize trustDialogDeferredDate=_trustDialogDeferredDate;
@property(nonatomic) BOOL webPageIsOpen; // @synthesize webPageIsOpen=_webPageIsOpen;
@property(retain, nonatomic) NSDate *lastVisitedDate; // @synthesize lastVisitedDate=_lastVisitedDate;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) int loadPolicy; // @synthesize loadPolicy=_loadPolicy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 host:(id)arg2;
- (id)initWithPolicy:(int)arg1 date:(id)arg2 lastVisitedDate:(id)arg3 host:(id)arg4;
- (id)initWithPolicy:(int)arg1 host:(id)arg2;
- (id)init;

@end

