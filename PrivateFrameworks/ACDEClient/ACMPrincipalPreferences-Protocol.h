//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACMBasePreferences.h"

@class ACFPrincipal, NSNumber, NSString;

@protocol ACMPrincipalPreferences <ACMBasePreferences>
+ (id <ACMPrincipalPreferences>)preferencesForPrincipal:(ACFPrincipal *)arg1;
@property(copy, nonatomic) NSNumber *personID;
@property(copy, nonatomic) NSNumber *clientSecretCreateDate;
@property(copy, nonatomic) NSString *clientSecret;
@property(readonly, retain) ACFPrincipal *principal;
- (NSString *)realm;
- (NSString *)userName;
- (id <ACMPrincipalPreferences>)initWithPrincipal:(ACFPrincipal *)arg1;
@end

