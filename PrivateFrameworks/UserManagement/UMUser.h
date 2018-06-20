//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSDate, NSError, NSString, NSURL;

@interface UMUser : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_displayName;
    BOOL _shouldFetchAttributes;
    BOOL _isLoginUser;
    BOOL _isAuditor;
    BOOL _isDisabled;
    BOOL _hasManagedCredentials;
    BOOL _hasDataToSync;
    unsigned int _uid;
    unsigned int _gid;
    NSString *_alternateDSID;
    NSURL *_homeDirectoryURL;
    NSString *_username;
    NSString *_givenName;
    NSString *_familyName;
    NSURL *_photoURL;
    id __photo;
    NSDate *_creationDate;
    NSDate *_lastLoginDate;
    NSDate *_lastRemoteAuthDate;
    unsigned long long _passcodeType;
    unsigned long long _passcodeLockGracePeriod;
    NSArray *_languages;
    unsigned long long _dataQuota;
    unsigned long long _dataUsed;
    NSError *_errorCausingLogout;
    NSError *_debugErrorCausingLogout;
    NSDate *_firstLoginStartDate;
    NSDate *_firstLoginEndDate;
    NSDate *_lastCachedLoginStartDate;
    NSDate *_lastCachedLoginEndDate;
    NSDate *_lastLogoutStartDate;
    NSDate *_lastLogoutEndDate;
}

+ (id)userWithUID:(unsigned int)arg1;
@property(copy, nonatomic) NSDate *lastLogoutEndDate; // @synthesize lastLogoutEndDate=_lastLogoutEndDate;
@property(copy, nonatomic) NSDate *lastLogoutStartDate; // @synthesize lastLogoutStartDate=_lastLogoutStartDate;
@property(copy, nonatomic) NSDate *lastCachedLoginEndDate; // @synthesize lastCachedLoginEndDate=_lastCachedLoginEndDate;
@property(copy, nonatomic) NSDate *lastCachedLoginStartDate; // @synthesize lastCachedLoginStartDate=_lastCachedLoginStartDate;
@property(copy, nonatomic) NSDate *firstLoginEndDate; // @synthesize firstLoginEndDate=_firstLoginEndDate;
@property(copy, nonatomic) NSDate *firstLoginStartDate; // @synthesize firstLoginStartDate=_firstLoginStartDate;
@property(copy, nonatomic) NSError *debugErrorCausingLogout; // @synthesize debugErrorCausingLogout=_debugErrorCausingLogout;
@property(retain, nonatomic) NSError *errorCausingLogout; // @synthesize errorCausingLogout=_errorCausingLogout;
@property(nonatomic) BOOL hasDataToSync; // @synthesize hasDataToSync=_hasDataToSync;
@property(nonatomic) unsigned long long dataUsed; // @synthesize dataUsed=_dataUsed;
@property(nonatomic) unsigned long long dataQuota; // @synthesize dataQuota=_dataQuota;
@property(nonatomic) BOOL hasManagedCredentials; // @synthesize hasManagedCredentials=_hasManagedCredentials;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(nonatomic) unsigned long long passcodeLockGracePeriod; // @synthesize passcodeLockGracePeriod=_passcodeLockGracePeriod;
@property(nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) BOOL isAuditor; // @synthesize isAuditor=_isAuditor;
@property(nonatomic) BOOL isLoginUser; // @synthesize isLoginUser=_isLoginUser;
@property(nonatomic) unsigned long long passcodeType; // @synthesize passcodeType=_passcodeType;
@property(copy, nonatomic) NSDate *lastRemoteAuthDate; // @synthesize lastRemoteAuthDate=_lastRemoteAuthDate;
@property(copy, nonatomic) NSDate *lastLoginDate; // @synthesize lastLoginDate=_lastLoginDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) id _photo; // @synthesize _photo=__photo;
@property(copy, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSURL *homeDirectoryURL; // @synthesize homeDirectoryURL=_homeDirectoryURL;
@property(copy, nonatomic) NSString *alternateDSID; // @synthesize alternateDSID=_alternateDSID;
@property(nonatomic) unsigned int gid; // @synthesize gid=_gid;
@property(nonatomic) BOOL shouldFetchAttributes; // @synthesize shouldFetchAttributes=_shouldFetchAttributes;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (BOOL)commitChangesWithError:(id *)arg1;
- (BOOL)commitChanges;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPropertiesFromUser:(id)arg1;
- (BOOL)isEqualToUser:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long userType;
@property(copy, nonatomic) NSString *displayName;
- (struct dqblk)_diskQuota;
@property(readonly, nonatomic) double passcodeBackOffInterval;
- (BOOL)inFirstLoginSession;
- (void)fetchAttributesIfNeeded;
- (BOOL)fetchAttributesWithOutError:(id *)arg1;
- (id)init;

@end

